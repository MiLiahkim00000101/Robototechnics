

from sum_full_name_service.srv import SumFullName

import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SumFullName, 'sum_full_name', self.sum_full_name_callback)

    def sum_full_name_callback(self, request, response):
        response.full_name = " ".join([request.f_name, request.s_name, request.patronymic])
        self.get_logger().info('Incoming request\nf_name: %s s_name: %s patronymic: %s' % (request.f_name, request.s_name, request.patronymic))

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()