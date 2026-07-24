import rclpy
from rclpy.node import Node
from habitat_driver.ema import Ema
from habitat_msgs.msg import HabitatSensor


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('sht41_ema_filter')

        self.subscription = self.create_subscription(
            HabitatSensor,
            '/habitat/sensors/sht41/raw',
            self.listener_callback,
            10)

        self.subscription  # prevent unused variable warning

        self.publisher_ = self.create_publisher(
            HabitatSensor,
            '/habitat/sensors/sht41/filtered',
            10)

        alpha = 0.2
        self.humidity_ema = Ema(alpha)
        self.temperature_ema = Ema(alpha)

    def listener_callback(self, msg):
        self.get_logger().info('Humidity: "%f"' % msg.humidity_percent)
        self.get_logger().info('Temp C: "%f"' % msg.temperature_c)

        humid_filter = self.humidity_ema.update(msg.humidity_percent)
        temp_filter = self.temperature_ema.update(msg.temperature_c)

        pub_msg = HabitatSensor()
        pub_msg.humidity_percent = humid_filter
        pub_msg.temperature_c = temp_filter
        pub_msg.sensor_id = "sht41_ema"

        self.publisher_.publish(pub_msg)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
