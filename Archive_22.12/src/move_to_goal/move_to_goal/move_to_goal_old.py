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

        dx = abs(self.goal_pose.x - self.curr_pose.x)
        dy = abs(self.goal_pose.y - self.curr_pose.y)

        theta = m.atan2(dy, dx) # Направление движения
        
        distance = m.sqrt(dx**2 + dy**2) # Расстояние до цели
        theta_diff = abs(theta - self.curr_pose.theta) # Угол движения до цели

        theta_diff_curr_goal = abs(self.curr_pose.theta - self.goal_pose.theta)

        if distance > 0.1:
            msg = Twist()
            msg.linear.x = distance * 5
            msg.angular.z = theta_diff * 2
            self.goal_achieved = False
        elif theta_diff_curr_goal > 0.1:
            msg = Twist()
            msg.linear.x = 0
            msg.angular.z = theta_diff * 2
            self.goal_achieved = False
        else:
            msg = Twist()
            msg.linear.x = 0
            msg.angular.z = 0
            self.goal_achieved = True

        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg)

    
        

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
