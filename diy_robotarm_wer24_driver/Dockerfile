#For deployment we decided to get all dependencies inside this Dockerfile, it's also possible to run stage 5 only and use the
#base image FROM diy-full-description/ros-render:"$ROS_DISTRO" as diy-robotarm-driver instead.

#But then, its necessary to build a image from the diy_full_cell_description package first. (This will be cached and used as base image by stage 5)

#With this implementation, it's not necessary to build the image from the diy_full_cell_description package first, you can just run this container.

##############################################################################
##                           1. stage: Base Image                           ##
##############################################################################
ARG ROS_DISTRO=humble
FROM osrf/ros:$ROS_DISTRO-desktop as base

# Configure DDS
COPY dds_profile.xml /opt/misc/dds_profile.xml
ENV FASTRTPS_DEFAULT_PROFILES_FILE=/opt/misc/dds_profile.xml

# Create user with root privilege
ARG USER=hephaestus
ARG UID=1000
ARG GID=1000
ENV USER=$USER
RUN groupadd -g $GID $USER \
    && useradd -m -u $UID -g $GID --shell $(which bash) $USER 

#install xacro and joint state publisher gui package (additional necessarity when not using the ur-package from ros)
USER root
RUN apt-get update && apt-get install -y ros-humble-xacro
RUN apt-get update && apt-get install -y ros-humble-joint-state-publisher-gui
USER ${USER}

# Setup workpace
USER $USER
RUN mkdir -p /home/$USER/ros2_ws/src
WORKDIR /home/$USER/ros2_ws


##############################################################################
##             2. stage: robotarm-description repo from github              ##
##############################################################################
FROM base as diy_robotarm

# Install git to clone diy-soft-robotarm-description packages
USER root
RUN apt-get update && apt-get install --no-install-recommends -y git
USER $USER

# Clone the diy-soft-robotarm-description package into its own workspace
RUN mkdir -p /home/$USER/dependencies/diy_robotarm_wer24_description_ws/src
RUN cd /home/$USER/dependencies/diy_robotarm_wer24_description_ws/src && \
    git clone https://github.com/RobinWolf/diy_robotarm_wer24_description.git

# Build the diy-robotarm package
RUN cd /home/$USER/dependencies/diy_robotarm_wer24_description_ws && \
    . /opt/ros/$ROS_DISTRO/setup.sh && \
    colcon build

# Add built diy-robotarm package to entrypoint by calling install/setup.bash
USER root
RUN sed -i 's|exec "\$@"|source "/home/'"${USER}"'/dependencies/diy_robotarm_wer24_description_ws/install/setup.bash"\n&|' /ros_entrypoint.sh
USER $USER

##############################################################################
##             3. stage: gripper-description repo from github               ##
##############################################################################
FROM diy_robotarm as diy_gripper

# Clone the diy-soft-gripper-description package into its own workspace
RUN mkdir -p /home/$USER/dependencies/diy_soft_gripper_description_ws/src
RUN cd /home/$USER/dependencies/diy_soft_gripper_description_ws/src && \
    git clone https://github.com/RobinWolf/diy_soft_gripper_description.git
    
# Build the diy-gripper package
RUN cd /home/$USER/dependencies/diy_soft_gripper_description_ws && \
    . /opt/ros/$ROS_DISTRO/setup.sh && \
    colcon build

# Add built diy-gripper package to entrypoint by calling install/setup.bash
USER root
RUN sed -i 's|exec "\$@"|source "/home/'"${USER}"'/dependencies/diy_soft_gripper_description_ws/install/setup.bash"\n&|' /ros_entrypoint.sh
USER $USER

##############################################################################
##               4. stage: cell-description repo from github                ##
##############################################################################
FROM diy_gripper as diy_cell

# Clone the diy-full-cell-description package into its own workspace
RUN mkdir -p /home/$USER/dependencies/diy_robot_full_cell_description_ws/src
RUN cd /home/$USER/dependencies/diy_robot_full_cell_description_ws/src && \
    git clone https://github.com/RobinWolf/diy_robot_full_cell_description.git
    
# Build the diy-full cell description package
RUN cd /home/$USER/dependencies/diy_robot_full_cell_description_ws && \
   . /opt/ros/$ROS_DISTRO/setup.sh && \
   . /home/$USER/dependencies/diy_robotarm_wer24_description_ws/install/setup.sh && \
   . /home/$USER/dependencies/diy_soft_gripper_description_ws/install/setup.sh && \
   colcon build

# Add built diy-full cell description package to entrypoint by calling install/setup.bash
USER root
RUN sed -i 's|exec "\$@"|source "/home/'"${USER}"'/dependencies/diy_robot_full_cell_description_ws/install/setup.bash"\n&|' /ros_entrypoint.sh
USER $USER

##############################################################################
##                  5. stage: arm-driver repo from github                   ##     
##############################################################################
FROM diy_cell as diy_robotarm_driver       

#install necessary packages
USER root
RUN apt-get update && apt-get install -y ros-humble-controller-interface 
RUN apt-get update && apt-get install -y ros-humble-controller-manager 
RUN apt-get update && apt-get install -y ros-humble-hardware-interface 
RUN apt-get update && apt-get install -y ros-humble-pluginlib 
RUN apt-get update && apt-get install -y ros-humble-rclcpp
RUN apt-get update && apt-get install -y ros-humble-rclcpp-lifecycle
RUN apt-get update && apt-get install -y ros-humble-ros2-control
RUN apt-get update && apt-get install -y ros-humble-ros2-controllers
USER $USER

# Clone the diy-robotarm-wer24-driver package into its own workspace
RUN mkdir -p /home/$USER/dependencies/diy_robotarm_wer24_driver_ws/src
RUN cd /home/$USER/dependencies/diy_robotarm_wer24_driver_ws/src && \
    git clone https://github.com/RobinWolf/diy_robotarm_wer24_driver.git
    
# Build and source the diy-robotarm-wer24-driver description package and source all dependeicies inside this stage
RUN cd /home/$USER/dependencies/diy_robotarm_wer24_driver_ws && \
   . /opt/ros/$ROS_DISTRO/setup.sh && \
   . /home/$USER/dependencies/diy_robot_full_cell_description_ws/install/setup.sh && \
   . /home/$USER/dependencies/diy_robotarm_wer24_description_ws/install/setup.sh && \
   . /home/$USER/dependencies/diy_soft_gripper_description_ws/install/setup.sh && \
   colcon build

# Add built diy-robotarm-wer24-driver package to ros entrypoint
USER root
RUN sed -i 's|exec "\$@"|source "/home/'"${USER}"'/dependencies/diy_robotarm_wer24_driver_ws/install/setup.bash"\n&|' /ros_entrypoint.sh
USER $USER

##############################################################################
## 6. stage: start the controller with fake hardware when container starts  ##     
##############################################################################

#default command which starts all controllers with fake hardware and displays the robot_description in rviz
# --> make sure to overwrite this CMD in the moveit package to abvoid launching multiple versions of rviz and controllers!
#CMD ["ros2", "launch", "diy_robotarm_wer24_driver", "forward_controller.launch.py", "rviz:=true"]

