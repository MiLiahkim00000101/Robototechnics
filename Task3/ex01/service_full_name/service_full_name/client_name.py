import sys

from sum_full_name_service.srv import SumFullName
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SumFullName, 'sum_full_name')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SumFullName.Request()

    def send_request(self, f_name, s_name, patronymic):
        self.req.f_name = f_name
        self.req.s_name = s_name
        self.req.patronymic = patronymic

        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(str(sys.argv[1]), str(sys.argv[2]), str(sys.argv[3]))
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        'Result of sum_full_name: for %s + %s + %s = %s' %
        (str(sys.argv[1]), str(sys.argv[2]), str(sys.argv[3]), response.full_name))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()