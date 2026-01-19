#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>

class EightMovementCompleteCircles : public rclcpp::Node
{
public:
  EightMovementCompleteCircles() : Node("eight_movement_complete_circles")
  {
    // Параметры с возможностью переопределения через launch файл
    this->declare_parameter<double>("linear_speed", 0.3);
    this->declare_parameter<double>("radius", 0.5);           // Радиус окружностей
    this->declare_parameter<double>("circle_time", 10.0);     // Время на полную окружность
    
    linear_speed_ = this->get_parameter("linear_speed").as_double();
    radius_ = this->get_parameter("radius").as_double();
    circle_time_ = this->get_parameter("circle_time").as_double();
    
    // Рассчитываем угловую скорость: v = ω * R => ω = v / R
    angular_speed_ = linear_speed_ / radius_;
    
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/robot/cmd_vel", 10);
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(100),
      std::bind(&EightMovementCompleteCircles::publish_twist, this)
    );
    
    start_time_ = this->now();
    
    RCLCPP_INFO(this->get_logger(), "Eight movement (complete circles) started:");
    RCLCPP_INFO(this->get_logger(), "  Linear speed:  %.2f m/s", linear_speed_);
    RCLCPP_INFO(this->get_logger(), "  Circle radius: %.2f m", radius_);
    RCLCPP_INFO(this->get_logger(), "  Angular speed: %.2f rad/s (%.0f°/s)", 
                angular_speed_, angular_speed_ * 180.0 / M_PI);
    RCLCPP_INFO(this->get_logger(), "  Time per circle: %.1f s", circle_time_);
    RCLCPP_INFO(this->get_logger(), "  Full eight period: %.1f s", 2.0 * circle_time_);
  }

private:
  void publish_twist()
  {
    auto current_time = this->now();
    auto elapsed = (current_time - start_time_).seconds();
    
    auto msg = geometry_msgs::msg::Twist();
    
    // Полный период восьмерки = 2 окружности
    double full_period = 2.0 * circle_time_;
    
    // Сбрасываем таймер при завершении полного цикла (2 окружности)
    if (elapsed > full_period) {
      start_time_ = current_time;
      elapsed = 0;
    }
    
    // Определяем, на какой окружности находимся
    // 0 <= elapsed < circle_time_: первая окружность
    // circle_time_ <= elapsed < 2*circle_time_: вторая окружность
    bool on_first_circle = (elapsed < circle_time_);
    
    // Всегда двигаемся с постоянной линейной скоростью
    msg.linear.x = linear_speed_;
    
    if (on_first_circle) {
      // Первая окружность: движение ПО ЧАСОВОЙ стрелке (отрицательное ω)
      msg.angular.z = -angular_speed_;
      
      // Отладочная информация при начале первой окружности
      static bool first_circle_started = false;
      if (!first_circle_started && elapsed > 0.1) {
        first_circle_started = true;
        RCLCPP_INFO(this->get_logger(), "Starting FIRST circle (clockwise)");
      }
    } else {
      // Вторая окружность: движение ПРОТИВ ЧАСОВОЙ стрелки (положительное ω)
      msg.angular.z = angular_speed_;
      
      // Отладочная информация при начале второй окружности
      static bool second_circle_started = false;
      if (!second_circle_started && elapsed > circle_time_ + 0.1) {
        second_circle_started = true;
        RCLCPP_INFO(this->get_logger(), "Starting SECOND circle (counter-clockwise)");
      }
    }
    
    publisher_->publish(msg);
    
    // Логирование каждую секунду
    static int counter = 0;
    if (counter++ % 10 == 0) {
      double progress;
      if (on_first_circle) {
        progress = elapsed / circle_time_ * 100.0;
      } else {
        progress = (elapsed - circle_time_) / circle_time_ * 100.0;
      }
      
      RCLCPP_DEBUG(this->get_logger(), 
                  "Circle %d: %.0f%%, v=%.2f, ω=%.2f, R=%.2f", 
                  on_first_circle ? 1 : 2, progress,
                  msg.linear.x, msg.angular.z, radius_);
    }
  }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Time start_time_;
  
  double linear_speed_;
  double radius_;
  double angular_speed_;
  double circle_time_;  // Время для прохождения одной полной окружности
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<EightMovementCompleteCircles>());
  rclcpp::shutdown();
  return 0;
}