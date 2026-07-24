import rclpy
from rclpy.node import Node

from habitat_msgs.msg import HabitatSensor


class SHT41Node(Node):

    def __init__(self):
        super().__init__('sht41_node')

        self.publisher_ = self.create_publisher(
            HabitatSensor,
            '/habitat/humid_hide',
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_sensor
        )

    def publish_sensor(self):
        msg = HabitatSensor()

        msg.temperature_c = 27.16
        msg.humidity_percent = 91.30
        msg.sensor_id = "humid_hide_sht41"

        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    node = SHT41Node()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
