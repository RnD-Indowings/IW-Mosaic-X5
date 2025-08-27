# Septentrio GNSS Driver Setup for MOSAIC-X5 

This repository provides the setup and launch instructions for running the **Septentrio GNSS Driver** with ROS2.  

---

## Requirements

To run this node, you need the following dependencies:

- [`nmea_msgs`](https://github.com/ros-drivers/nmea_msgs)  
- [`septentrio_gnss_driver`](https://github.com/septentrio-gnss/septentrio_gnss_driver)  

---

## Installation

1. Clone the required drivers inside your workspace `src` folder:
   ```bash
   cd {ws_name}/src
   git clone https://github.com/ros-drivers/nmea_msgs.git
   git clone https://github.com/septentrio-gnss/septentrio_gnss_driver.git
   
2. Replace the .yaml configuration files (provided in this repository) with the corresponding ones in the drivers to ensure proper functionality.

3. Build
   ```bash
   cd {ws_name}
   colcon build
   cd install
   . setup.bash
   ros2 launch septentrio_gnss_driver rover.launch.py file_name:=rover.yaml
   ros2 launch septentrio_gnss_driver rover_node.launch.py file_name:=rover_node.yaml                         ------ FOR ANY KIND OF DRONES



