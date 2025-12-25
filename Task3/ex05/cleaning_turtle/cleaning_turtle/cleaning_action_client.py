import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from action_cleaning_turtle.action import CleaningTask


class CleaningActionClient(Node):

    def __init__(self):
        super().__init__('cleaning_action_client')
        self._action_client = ActionClient(self, CleaningTask, 'cleaningtask')

    def send_goal(self, task_type, area_size, target_x, target_y):
        goal_msg = CleaningTask.Goal()
        goal_msg.task_type = task_type
        goal_msg.area_size = area_size
        goal_msg.target_x = target_x
        goal_msg.target_y = target_y

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result:')
        self.get_logger().info('Status: {0}'.format(result.success))
        self.get_logger().info('Amount of cleaned points: {0}'.format(result.cleaned_points))
        self.get_logger().info('Total distance: {0}'.format(result.total_distance))
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback:')
        self.get_logger().info('progress_percent: {0}'.format(feedback.progress_percent))
        self.get_logger().info('current_cleaned_points: {0}'.format(feedback.current_cleaned_points))
        self.get_logger().info('current_x: {0}'.format(feedback.current_x))
        self.get_logger().info('current_y: {0}'.format(feedback.current_y))


def main(args=None):
    rclpy.init(args=args)

    action_client = CleaningActionClient()

    action_client.send_goal('clean_square', 9.0, 1.0, 1.0)

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()