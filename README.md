# IXR_ROS_Files
## ROS2 Setup on Linux Machine
First, you will want to setup ROS2 on your Linux machine. This [guide](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html) shows how to install the version Humble Haskill on Ubuntu 22.04.2

Next, follow [this](https://www.youtube.com/watch?v=3GbrKQ7G2P0) video to understand what a ROS workspace is and how to set one up.

Finally, [this](https://github.com/ROBOTIS-GIT/DynamixelSDK/tree/humble-devel) repository has the Dynamixel SDK needed to control the AX-12A Servo Motors. Install this within your ROS2 workspace.

## Working Workspace
Please use the workspace "ros2_unity_ws1" as it is the most up to date for this project.

## Quick Commands
**Build/Compile workspace**: colcon build

Commands specific to "ros2_unity_ws1" workspace:

**Start Server**: ros2 run ros_tcp_endpoint default_server_endpoint –ros-args -p ROS_IP:=10.56.5.255

**Boot Motors**: ros2 run dynamixel_sdk_examples read_write_node_mod
