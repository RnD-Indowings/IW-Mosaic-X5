Running this node requires two things:
a. nmea_msgs driver
b. septentrio_gnss_driver


Go to the STAR section of the github - 
You can clone the two drivers into this folder. 
Present there are few .yaml files, which you should replace accordingly in the drivers to make it work properly


Command to run the whole repo:

cd {ws_name}

colcon build

cd install

. setup.bash

ros2 launch septentrio_gnss_driver rover.launch.py file_name:=rover.yaml

ros2 launch septentrio_gnss_driver rover_node.launch.py file_name:=rover_node.yaml   (FOR DRONES)

