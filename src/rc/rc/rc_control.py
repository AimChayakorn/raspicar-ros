import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
from rc_pwm_pkg.msg import PubPwm

from std_msgs.msg import String

class MinimalSubscriber(Node):
    
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
                PubPwm,
                'output_pwm',
                self.listener_callback,
                10)
        self.subscription

        
        GPIO.setmode(GPIO.BCM)
        self.gpio_pin1 = 17 # motor left
        self.gpio_pin2 = 27

        self.gpio_pin3 = 23 # motor right
        self.gpio_pin4 = 24

        freq = 1000 #1kHz frequency
        GPIO.setup(self.gpio_pin1, GPIO.OUT)
        GPIO.setup(self.gpio_pin2, GPIO.OUT)

        GPIO.setup(self.gpio_pin3, GPIO.OUT)
        GPIO.setup(self.gpio_pin4, GPIO.OUT)
        
        GPIO.output(self.gpio_pin2, GPIO.HIGH)
        GPIO.output(self.gpio_pin4, GPIO.HIGH)
        
        self.pwm_right = GPIO.PWM(self.gpio_pin3, freq)
        self.pwm_left = GPIO.PWM(self.gpio_pin1, freq) 

        self.pwm_left.start(100)
        self.pwm_right.start(100)

    def listener_callback(self, msg):
        self.pwm_left.ChangeDutyCycle(100 - msg.left_pwm)
        self.pwm_right.ChangeDutyCycle(100 - msg.right_pwm)
        self.get_logger().info(f'Current left : {msg.left_pwm} , right : {msg.right_pwm}')

    def destroy_node(self):
        GPIO.cleanup()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    try:
        rclpy.spin(minimal_subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        minimal_subscriber.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
