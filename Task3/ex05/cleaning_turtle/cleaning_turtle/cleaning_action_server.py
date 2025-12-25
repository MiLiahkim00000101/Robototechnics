import time
import math as m

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

from action_cleaning_turtle.action import CleaningTask


class Point():
    def __init__(self, x=0, y=0):    
        self.x = float(x)
        self.y = float(y)

class CleaningTaskActionServer(Node):

    def __init__(self):
        super().__init__('cleaningtask_action_server')
        self._action_server = ActionServer(
            self,
            CleaningTask,
            'cleaningtask',
            self.execute_callback)
        
        self.subscription = self.create_subscription(
            Pose,
            "turtle1/pose",
            self.pose_callback,
            10
        )
        self.subscription

        self.publisher_ = self.create_publisher(
            Twist,
            "turtle1/cmd_vel",
            10
        )
        
        self.curr_pose = Pose()
        self.goal_achieved = False

        self.total_dist = 0

        self.prev_x = 5.5
        self.prev_y = 5.5
            
        self.dist_timer = self.create_timer(0.1, self.calculate_distance)  # таймер 0.1 сек

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        self.total_dist = 0

        self.prev_x = self.curr_pose.x  # обновляем предыдущую позицию
        self.prev_y = self.curr_pose.y

        # goal definition
        # string task_type	# "clean_square", "clean_circle", "return_home"
        # float64 area_size	# размер области для уборки (сторона квадрата или радиус круга)
        # float64 target_x	# целевая координата X (только для return_home)
        # float64 target_y	# целевая координата Y (только для return_home)

        feedback_msg = CleaningTask.Feedback()

        print("task_type: ", goal_handle.request.task_type)
        print("area_size: ", goal_handle.request.area_size)
        print("target_x: ", goal_handle.request.target_x)
        print("target_y: ", goal_handle.request.target_y)


        self.send_feedback(feedback_msg=feedback_msg, goal_handle=goal_handle)

        if goal_handle.request.task_type == "clean_square":
            success, cleaned_points = self.clean_square(goal_handle.request.area_size, feedback_msg, goal_handle)
        elif goal_handle.request.task_type == "return_home":
            self.return_home()

        goal_handle.succeed()

        result = CleaningTask.Result()
        result.success = success
        result.cleaned_points = cleaned_points
        result.total_distance = self.total_dist
        return result

    def clean_square(self, area, feedback_msg, goal_handle, start_point=Pose(x=2, y=9, theta=0)):

        points_am = m.ceil(m.sqrt(area)) + 1

        print("points_am: ", points_am)

        points = [[Pose(x=0, y=0, theta=0) for _ in range(points_am)] for _ in range(points_am)]

        points[0][0] = start_point

        for i in range(points_am):
            for j in range(points_am):
                j_add = j
                if i % 2 != 0:
                    j_add = points_am - j - 1
                
                points[i][j].x = j_add + start_point.x
                points[i][j].y = start_point.y - i

        cleaned_points = 0
        for i in range(points_am):
            for j in range(points_am):
                self.move_to_goal(points[i][j])
                cleaned_points = int(i * points_am + j) + 1
                feedback_msg.current_cleaned_points = cleaned_points
                feedback_msg.progress_percent = m.ceil(cleaned_points / (points_am ** 2) * 100)
                feedback_msg.current_x = self.curr_pose.x
                feedback_msg.current_y = self.curr_pose.y
                self.send_feedback(feedback_msg, goal_handle)
                
        self.return_home()

        return True, cleaned_points

    def return_home(self, target_pose=Pose(x=5.5, y=5.5, theta=0)):
        self.move_to_goal(target_pose)

    def calculate_distance(self):
        # Вычисляем расстояние между текущей и предыдущей позицией
        dx = self.curr_pose.x - self.prev_x
        dy = self.curr_pose.y - self.prev_y
        delta = m.sqrt(dx**2 + dy**2)
        
        # Добавляем к общей дистанции
        self.total_dist += delta
        
        # Обновляем предыдущую позицию для следующего расчета
        self.prev_x = self.curr_pose.x
        self.prev_y = self.curr_pose.y
        
        # Для отладки:
        self.get_logger().info(f"Delta: {delta:.3f}, Total: {self.total_dist:.3f}")

    def move_to_goal(self, target_pose : Pose):
        
        # Таймер для расчета
        self.dist_timer = self.create_timer(0.1, self.calculate_distance)

        while self.goal_achieved == False:
            self.step_to_target(target_pose)
            rclpy.spin_once(self, timeout_sec=0.01)
        self.goal_achieved = False

        self.dist_timer.destroy()  # остановить таймер

    def pose_callback(self, pose):
        self.curr_pose = pose
        return pose

    def step_to_target(self, goal_pose):

        dx = goal_pose.x - self.curr_pose.x
        dy = goal_pose.y - self.curr_pose.y

        theta = m.atan2(dy, dx) # Направление движения
        
        distance = m.sqrt(dx**2 + dy**2) # Расстояние до цели

        # self.get_logger().info('Distance: "%d"' % distance)

        angle_diff = theta - self.curr_pose.theta # Угол движения до цели (теперь с правильным знаком)
        
        while angle_diff > m.pi:
            angle_diff -= 2 * m.pi
        while angle_diff < -m.pi:
            angle_diff += 2 * m.pi
        
        theta_diff = abs(angle_diff)  # Разница углов

        theta_diff_curr_goal = self.curr_pose.theta - goal_pose.theta
        
        # Нормализуем финальную разницу углов тоже
        while theta_diff_curr_goal > m.pi:
            theta_diff_curr_goal -= 2 * m.pi
        while theta_diff_curr_goal < -m.pi:
            theta_diff_curr_goal += 2 * m.pi
        
        theta_diff_curr_goal = abs(theta_diff_curr_goal)

        # self.get_logger().info('Theta_diff_goal: "%f"' % theta_diff_curr_goal)
        # self.get_logger().info('Theta_diff: "%f"' % theta_diff)

        msg = Twist()
        
        if distance > 0.1:
            msg.linear.x = distance * 1.5
            self.goal_achieved = False
        else:
            msg.linear.x = 0.0
            msg.angular.z = theta_diff_curr_goal * 5 

        if theta_diff > 0.1 and distance > 0.1:
            msg.angular.z = angle_diff * 3 
            self.goal_achieved = False
        
        if distance <= 0.1 and theta_diff_curr_goal <= 0.1:
            msg.linear.x = 0.0
            msg.angular.z = 0.0
            self.goal_achieved = True

        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "%s"' % msg)

        if self.goal_achieved:
            # print(f"Goal achieved. Turtle's actual coords: x={self.curr_pose.x}; y={self.curr_pose.y}; theta={self.curr_pose.theta}")
            # self.create_timer(0.5, self.shutdown_node)
            return 

    def send_feedback(self, feedback_msg, goal_handle):
        self.get_logger().info('Feedback:')
        
        self.get_logger().info('Progress percent: {0}'.format(feedback_msg.progress_percent))
        self.get_logger().info('Current cleaned points: {0}'.format(feedback_msg.current_cleaned_points))
        self.get_logger().info('Current x: {0}'.format(feedback_msg.current_x))
        self.get_logger().info('Current y: {0}'.format(feedback_msg.current_y))

        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)
        pass

    


def main(args=None):
    rclpy.init(args=args)

    cleaningtask_action_server = CleaningTaskActionServer()

    rclpy.spin(cleaningtask_action_server)


if __name__ == '__main__':
    main()