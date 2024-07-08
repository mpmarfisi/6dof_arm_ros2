// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_wrapper:srv/MoveToJointPosition.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__BUILDER_HPP_
#define MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_wrapper/srv/detail/move_to_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_wrapper
{

namespace srv
{

namespace builder
{

class Init_MoveToJointPosition_Request_joint_position
{
public:
  Init_MoveToJointPosition_Request_joint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_wrapper::srv::MoveToJointPosition_Request joint_position(::moveit_wrapper::srv::MoveToJointPosition_Request::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_wrapper::srv::MoveToJointPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_wrapper::srv::MoveToJointPosition_Request>()
{
  return moveit_wrapper::srv::builder::Init_MoveToJointPosition_Request_joint_position();
}

}  // namespace moveit_wrapper


namespace moveit_wrapper
{

namespace srv
{

namespace builder
{

class Init_MoveToJointPosition_Response_success
{
public:
  Init_MoveToJointPosition_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_wrapper::srv::MoveToJointPosition_Response success(::moveit_wrapper::srv::MoveToJointPosition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_wrapper::srv::MoveToJointPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_wrapper::srv::MoveToJointPosition_Response>()
{
  return moveit_wrapper::srv::builder::Init_MoveToJointPosition_Response_success();
}

}  // namespace moveit_wrapper

#endif  // MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__BUILDER_HPP_
