#!/bin/bash
##############################################################################
##                       Build the image, using Dockerfile                  ##
##############################################################################
ROS_DISTRO=humble

uid=$(eval "id -u")
gid=$(eval "id -g")

#pass some arguments and settings to the dev.Dockerfile while building the image (dev.Dockerfile)
#name of the image builded here: diy-full-description/ros-render:"$ROS_DISTRO":"ROS-Distribution eg humble"
#dont use cached data to clone up-to date repos all the time
#--no-cache \
docker build \
  --no-cache \
  --build-arg ROS_DISTRO="$ROS_DISTRO" \
  --build-arg UID="$uid" \
  --build-arg GID="$gid" \
  -f Dockerfile \
  -t diy-robotarm-espdriver/ros-render:"$ROS_DISTRO" .

##############################################################################
##                            Run the container                             ##
##############################################################################

docker run \
  --name robot_arm_driver \
  --rm \
  -it \
  --net=host \
  -e DISPLAY="$DISPLAY" \
  diy-robotarm-espdriver/ros-render:"$ROS_DISTRO"

# display and network access is already passed to the container
