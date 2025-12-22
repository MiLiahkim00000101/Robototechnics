import sys 

from turtlesim.msg import Pose
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Vector3
import math as m


class Coordinator(Node):

    def __init__(self):
        super().__init__('coordinator')
        self.subscription = self.create_subscription(
            Pose,
            "turtle1/pose",
            self.pose_callback,
            1
        )
        self.subscription

        self.publisher_ = self.create_publisher(
            Twist,
            "turtle1/cmd_vel",
            1
        )

        self.goal_pose = Pose()

        self.curr_pose = Pose()

        self.goal_achieved = False

        timer_period = 0.001  # seconds
        self.timer = self.create_timer(timer_period, self.step_to_target)
        # self.timer_dbg = self.create_timer(timer_period, self.print_info)

        self.i = 0
    
    def pose_callback(self, pose):
        self.curr_pose = pose
    
    def set_goal_pose(self, x, y, theta):
        self.goal_pose = Pose(x=x, y=y, theta=theta)
    
    def step_to_target(self):

        
        if self.goal_achieved:
            print(f"Goal achieved. Turtle's actual coords: x={self.curr_pose.x}; y={self.curr_pose.y}; theta={self.curr_pose.theta}")
            return 

        msg = Twist()
        
        x_coeff = 1.0
        theta_coeff = 0.1
        eps = 1e-2

        dx = abs(self.goal_pose.x - self.curr_pose.x)
        dy = abs(self.goal_pose.y - self.curr_pose.y)

        x_stop = False
        y_stop = False
        theta_stop = False

        # Зададим коэффициенты для направления движения. Первым делом линейного
        if dx < eps:
            x_stop = True

        if dy < eps:
            y_stop = True
        
        if x_stop == True and y_stop == True:
            x_coeff = 0

            # ТЕПЕРЬ ПОВЕРНЕМ НА НУЖНЫЙ УГОЛ
            
            if abs(self.curr_pose.theta - self.goal_pose.theta) < eps:
                theta_stop = True
                theta_coeff = 0.0
                self.publisher_.publish(msg)

            msg.linear.x = 0.0
            msg.angular.z = theta_coeff

            print("\nРазница углов: ", abs(self.curr_pose.theta - self.goal_pose.theta))
            self.publisher_.publish(msg)
            self.get_logger().info('Publishing: "%s"' % msg)
            self.i += 1


        else:

            alpha = m.atan(dx/dy)

            # четыре области пространста, которые я делю в зависимости от положения черепахи относительно цели
            if self.curr_pose.x > self.goal_pose.x and self.curr_pose.y > self.goal_pose.y:
                phi = -m.pi/2 - alpha
            elif self.curr_pose.x < self.goal_pose.x and self.curr_pose.y > self.goal_pose.y:
                phi = -m.pi/2 + alpha
            elif self.curr_pose.x < self.goal_pose.x and self.curr_pose.y < self.goal_pose.y:
                phi = m.pi/2 - alpha
            else:
                phi = m.pi/2 + alpha

            
            if abs(self.curr_pose.theta - phi) < eps:
                
                msg.linear.x = x_coeff
                msg.angular.z = 0.0

                self.publisher_.publish(msg)
                self.get_logger().info('Publishing: "%s"' % msg)
                self.i += 1
            else:
                print("\nРазница углов: ", abs(self.curr_pose.theta - phi))
                print("Угол для движения: ", phi)
                msg.linear.x = 0.0
                msg.angular.z = theta_coeff

                self.publisher_.publish(msg)
                self.get_logger().info('Publishing: "%s"' % msg)
                self.i += 1
            

        if x_stop and y_stop and theta_stop:
            self.goal_achieved = True

        
        
        

    def print_info(self):
        print("curr_pose:", self.curr_pose)
        print()
        print("goal_pose:", self.goal_pose)
        print()




def main():

    rclpy.init()

    coordinator = Coordinator()
    coordinator.set_goal_pose(float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]))

    rclpy.spin(coordinator)

    coordinator.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
