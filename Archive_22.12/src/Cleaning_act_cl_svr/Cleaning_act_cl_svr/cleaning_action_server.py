import time
import math as m

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from action_cleaning_robot.action import CleaningTask

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
    

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

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

        self.clean_square(goal_handle.request.area_size, feedback_msg, goal_handle)

        goal_handle.succeed()

        result = CleaningTask.Result()
        result.success = True
        result.cleaned_points = 0
        result.total_distance = 0.0
        return result

    def clean_square(self, area, feedback_msg, goal_handle, start_point=Point(2, 9)):

        points_am = m.ceil(m.sqrt(area))

        print("points_am: ", points_am)

        points = [[Point(0, 0) for _ in range(points_am + 1)] for _ in range(points_am + 1)]

        points[0][0].x = start_point

        for i in range(points_am + 1):
            for j in range(points_am + 1):
                if i == 0 and j ==0:
                    pass
                if i == 0:
                    points[i][j].x = points[i][j - 1].x + 1
                    points[i][j].y = points[i][j].y
                if j == 0:
                    points[i][j].x = points[i - 1][j].x
                    points[i][j].y = points[i - 1][j].y - 1
                
                points[i][j].x = points[i][j - 1].x + 1
                points[i][j].y = points[i - 1][j].y - 1

        for i in range(points_am + 1):
            for j in range(points_am + 1):
                self.coordinator.set_goal_pose(points[i][j].x, points[i][j].y, -m.pi/4)
                print(i * (points_am + 1) + j, "iter")
                self.coordinator.move_to_goal()
                self.send_feedback(feedback_msg=feedback_msg, goal_handle=goal_handle)
                

        # for i in range(points_am + 1):
        #     for j in range(points_am + 1):
        #         print(points[i][j].x, ",", points[i][j].y, end=" ; ")
        #     print()    


    def send_feedback(self, feedback_msg, goal_handle):
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.progress_percent))
        
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