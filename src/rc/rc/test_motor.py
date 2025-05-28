import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
import sys
import tty
import termios

class DirectKeyboardControlNode(Node):
    def __init__(self):
        super().__init__('direct_keyboard_control_node')

        GPIO.setmode(GPIO.BCM)
        self.left_forward = 17
        self.left_backward = 27
        self.right_forward = 23
        self.right_backward = 24

        GPIO.setup(self.left_forward, GPIO.OUT)
        GPIO.setup(self.left_backward, GPIO.OUT)
        GPIO.setup(self.right_forward, GPIO.OUT)
        GPIO.setup(self.right_backward, GPIO.OUT)

        freq = 1000
        self.pwm_left = GPIO.PWM(self.left_forward, freq)
        self.pwm_right = GPIO.PWM(self.right_forward, freq)
        self.pwm_left.start(0)
        self.pwm_right.start(0)

        self.speed = 70  # constant speed (duty cycle)

        self.get_logger().info("Ready. Use keys: W (forward), S (backward), A (left), D (right), X (stop), Q (quit)")
        self.keyboard_loop()

    def stop_all(self):
        self.pwm_left.ChangeDutyCycle(0)
        self.pwm_right.ChangeDutyCycle(0)
        GPIO.output(self.left_backward, GPIO.LOW)
        GPIO.output(self.right_backward, GPIO.LOW)

    def keyboard_loop(self):
        try:
            while rclpy.ok():
                key = self.get_key().lower()
                self.stop_all()

                if key == 'w':
                    GPIO.output(self.left_backward, GPIO.LOW)
                    GPIO.output(self.right_backward, GPIO.LOW)
                    self.pwm_left.ChangeDutyCycle(self.speed)
                    self.pwm_right.ChangeDutyCycle(self.speed)
                elif key == 's':
                    GPIO.output(self.left_backward, GPIO.HIGH)
                    GPIO.output(self.right_backward, GPIO.HIGH)
                    self.pwm_left.ChangeDutyCycle(self.speed)
                    self.pwm_right.ChangeDutyCycle(self.speed)
                elif key == 'a':
                    GPIO.output(self.left_backward, GPIO.HIGH)
                    GPIO.output(self.right_backward, GPIO.LOW)
                    self.pwm_left.ChangeDutyCycle(self.speed)
                    self.pwm_right.ChangeDutyCycle(self.speed)
                elif key == 'd':
                    GPIO.output(self.left_backward, GPIO.LOW)
                    GPIO.output(self.right_backward, GPIO.HIGH)
                    self.pwm_left.ChangeDutyCycle(self.speed)
                    self.pwm_right.ChangeDutyCycle(self.speed)
                elif key == 'x':
                    self.stop_all()
                elif key == 'q':
                    break

                self.get_logger().info(f"Key pressed: {key}")
        except KeyboardInterrupt:
            pass

    def get_key(self):
        """Read a single character from terminal without Enter key"""
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        try:
            tty.setraw(fd)
            return sys.stdin.read(1)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    def destroy_node(self):
        self.stop_all()
        GPIO.cleanup()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = DirectKeyboardControlNode()
    node.destroy_node()
    if rclpy.ok():
        rclpy.shutdown()

if __name__ == '__main__':
    main()
