# ROS RC car pwm listener
This project demonstrates a basic **ROS pwm node listener** setup using Python.

## 🧱 Project Structure

rc_ws/  
├── build/  
│ ├── rc  
│ └── rc_pwm_pkg  
├── install/  
├── log/  
├── src/  
│ ├── rc  
│ └── rc_pwm_pkg  
└── README.md  

## ⚙️ Requirements

- ROS 2 Humble
- Python 3

## 📦 Installation

1. Clone the repository into your catkin workspace:

```bash
git clone https://github.com/AimChayakorn/raspicar-ros.git

```

2. Export Discovery server and ROS setup
```bash
source /opt/ros/humble/setup.bash
export ROS_DOMAIN_ID=10
export ROS_DISCOVERY_SERVER=<Controller IP address>:11811
```

3.  Build the workspace

```bash
source install/setup.bash
colcon build
```

4. Start listener node
```bash
ros2 run rc listener
```

or to start all node
```bash
ros2 launch rc script.xml
```
