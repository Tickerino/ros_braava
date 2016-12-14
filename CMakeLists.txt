cmake_minimum_required(VERSION 2.8.3)
project(ros_braava)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  ros_arduino_msgs
  roscpp
  rospy
  rosserial_python
  sensor_msgs
  std_msgs
  tf
  tf
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES ros_braava
#  CATKIN_DEPENDS geometry_msgs ros_arduino_msgs roscpp rospy rosserial_python sensor_msgs std_msgs tf tf
#  DEPENDS system_lib
)
###########
## Build ##
###########

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(ros_braava_node src/ros_braava_node.cpp)
target_link_libraries(ros_braava_node ${catkin_LIBRARIES})
