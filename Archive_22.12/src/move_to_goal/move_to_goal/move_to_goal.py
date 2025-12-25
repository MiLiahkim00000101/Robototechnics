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

        print("constructor")

        self.goal_pose = Pose()
        self.curr_pose = Pose()
        self.goal_achieved = False
        self.pose_received = False

        
        timer_period = 0.001  # seconds
        self.timer = self.create_timer(timer_period, self.step_to_target)

        self.i = 0
    
    def pose_callback(self, pose):
        self.curr_pose = pose
        self.pose_received = True
        print("pose_callback")
    
    def set_goal_pose(self, x, y, theta):
        self.goal_pose = Pose(x=x, y=y, theta=theta)
    
    def step_to_target(self):

        if self.pose_received == False:
            return

        dx = self.goal_pose.x - self.curr_pose.x
        dy = self.goal_pose.y - self.curr_pose.y

        theta = m.atan2(dy, dx) # Направление движения
        
        distance = m.sqrt(dx**2 + dy**2) # Расстояние до цели

        self.get_logger().info('Distance: "%d"' % distance)

        angle_diff = theta - self.curr_pose.theta # Угол движения до цели (теперь с правильным знаком)
        
        while angle_diff > m.pi:
            angle_diff -= 2 * m.pi
        while angle_diff < -m.pi:
            angle_diff += 2 * m.pi
        
        theta_diff = abs(angle_diff)  # Разница углов

        theta_diff_curr_goal = self.curr_pose.theta - self.goal_pose.theta
        
        # Нормализуем финальную разницу углов тоже
        while theta_diff_curr_goal > m.pi:
            theta_diff_curr_goal -= 2 * m.pi
        while theta_diff_curr_goal < -m.pi:
            theta_diff_curr_goal += 2 * m.pi
        
        theta_diff_curr_goal = abs(theta_diff_curr_goal)

        self.get_logger().info('Theta_diff_goal: "%f"' % theta_diff_curr_goal)
        self.get_logger().info('Theta_diff: "%f"' % theta_diff)

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
            self.timer.cancel()

        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "%s"' % msg)

        if self.goal_achieved:
            print(f"Goal achieved. Turtle's actual coords: x={self.curr_pose.x}; y={self.curr_pose.y}; theta={self.curr_pose.theta}")
            # self.create_timer(0.5, self.shutdown_node)
            return 

    def print_info(self):
        print("curr_pose:", self.curr_pose)
        print()
        print("goal_pose:", self.goal_pose)
        print()
    
    def move_to_goal(self):
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.step_to_target)

    def is_goal_achieved(self):
        return self.goal_achieved

    def shutdown_node(self):
        self.get_logger().info('Node shutting down...')
        # Останавливаем spin
        raise KeyboardInterrupt  # Это прервет rclpy.spin()

def main():

    rclpy.init()

    coordinator = Coordinator()
    print("coordinator created!!!", end="\n\n\n")
    coordinator.set_goal_pose(float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]))

    rclpy.spin(coordinator)

    coordinator.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
