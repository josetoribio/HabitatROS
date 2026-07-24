import rclpy
from rclpy.node import Node
import smbus2
import time
from habitat_msgs.msg import HabitatSensor


class SHT41Node(Node):

    def __init__(self):
        super().__init__('sht41_node')

        self.publisher_ = self.create_publisher(
            HabitatSensor,
            '/habitat/sensors/sht41/raw',
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_sensor
        )
        # SHT41 setup
        self.BUS = 22
        self.ADDR = 0x44
        self.bus = smbus2.SMBus(self.BUS)

        self.timer = self.create_timer(
        30.0,
        self.publish_sensor
        )
    def publish_sensor(self):
        msg = HabitatSensor()
    # Tell SHT41 to measure
        self.bus.write_byte(self.ADDR, 0xFD)
    # Wait for measurement (~10ms, 100ms is fine)
        time.sleep(0.1)

        # Read 6 bytes
        read = smbus2.i2c_msg.read(self.ADDR, 6)
        self.bus.i2c_rdwr(read)

        data = list(read)

    
    
        temp_raw = (data[0] << 8) | data[1]
        hum_raw = (data[3] << 8) | data[4]

        temperature = -45 + (175 * temp_raw / 65535)
        humidity = -6 + (125 * hum_raw / 65535)
        msg.temperature_c = temperature
        msg.humidity_percent = humidity
        msg.sensor_id = "humid_hide_sht41"
        msg.header.stamp = self.get_clock().now().to_msg()
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    node = SHT41Node()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
