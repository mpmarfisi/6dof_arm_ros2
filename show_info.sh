#!/bin/bash

# Define the ROS topic of interest
ROS_TOPIC="/joint_trajectory_controller/controller_state"

# Temporary file to store the output of ros2 topic echo
OUTPUT_FILE="/tmp/ros_topic_output.txt"

# Function to echo messages from the specified ROS2 topic
show_ros_info() {
    echo "ROS2 Topic Info at $(date): $ROS_TOPIC"
    # ros2 topic echo --once $ROS_TOPIC > $OUTPUT_FILE  # Redirect output to temp file
    ros2 topic echo --once $ROS_TOPIC
}

# Function to extract specific lines from the output file
# extract_lines() {
#     echo "Extracting lines $1 to $2 from $OUTPUT_FILE:"
#     sed -n "$1,$2p" $OUTPUT_FILE  # Extract lines using sed
# }

# # Function to extract lines starting with a specific tag
# extract_tag_lines() {
#     echo "Extracting lines with \"$1:\" tag from $OUTPUT_FILE:"
#     grep -m 1 -A 7 "^$1:" $OUTPUT_FILE  # Extract lines starting with the specified tag
# }

# Function to extract specific lines from the output
extract_lines() {
    echo "Extracting lines $1 to $2:"
    sed -n "$1,$2p"  # Extract lines using sed from stdin
}

# Function to extract lines starting with a specific tag
extract_tag_lines() {
    echo "Extracting lines with \"$1:\" tag:"
    grep -m 1 -A 7 "^$1:"  # Extract lines starting with the specified tag from stdin
}

# Function to handle Ctrl+C
cleanup() {
    echo "Exiting..."
    rm -f $OUTPUT_FILE  # Clean up temporary file
    exit 0
}

# Trap Ctrl+C and call cleanup()
trap cleanup INT

# Loop to periodically show ROS2 topic info
while true
do
    # show_ros_info
    
    # # Example extractions (adjust as needed)
    # extract_lines 6 20
    # extract_tag_lines "feedback"
    # extract_tag_lines "output"
    
    
    output=$(show_ros_info)  # Capture output of ros2 topic echo
    # Example extraction for lines 6 to 20 and "feedback:" tag
    clear
    echo "$output" | extract_tag_lines "joint_names"
    echo "$output" | extract_tag_lines "reference"
    # echo "$output" | extract_tag_lines "feedback"
    # echo "$output" | extract_tag_lines "output"
    # echo "$output" | extract_tag_lines "error"
    # echo "$output" | extract_tag_lines "desired"
    # echo "$output" | extract_tag_lines "actual"

    sleep 1  # Adjust the delay (in seconds) as needed
    
    echo "----------------------------------------"
done
