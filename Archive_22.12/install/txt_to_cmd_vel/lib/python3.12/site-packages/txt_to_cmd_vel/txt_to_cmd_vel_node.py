import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist


class TextToCmdVel(Node):

    def __init__(self):
        super().__init__('text_to_cmd_vel')
        
        self.subscription = self.create_subscription(
            String,
            'cmd_text',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
            
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        self.get_logger().info('text_to_cmd_vel node started')
        self.get_logger().info('Available commands: "turn_right", "turn_left", "move_forward", "move_backward"')
        
    def listener_callback(self, msg):
        command = msg.data.lower().strip()
        twist_msg = Twist()
        
        # Обрабатываем текстовые команды
        if command == "turn_right":
            twist_msg.angular.z = -1.5  # радиан в секунду (отрицательное значение - поворот направо)
            self.get_logger().info('Turning right')
        elif command == "turn_left":
            twist_msg.angular.z = 1.5   # радиан в секунду (положительное значение - поворот налево)
            self.get_logger().info('Turning left')
        elif command == "move_forward":
            twist_msg.linear.x = 10.0    # метр в секунду
            self.get_logger().info('Moving forward')
        elif command == "move_backward":
            twist_msg.linear.x = -10.0   # метр в секунду
            self.get_logger().info('Moving backward')
        else:
            self.get_logger().warn(f'Unknown command: {command}')
            return
            
        self.publisher.publish(twist_msg)
        


def main(args=None):
    rclpy.init(args=args)

    text_to_cmd_vel = TextToCmdVel()

    rclpy.spin(text_to_cmd_vel)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
