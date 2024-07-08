// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_wrapper:srv/MoveToPose.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
#define MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_wrapper/srv/detail/move_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_wrapper
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Request_pose
{
public:
  Init_MoveToPose_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_wrapper::srv::MoveToPose_Request pose(::moveit_wrapper::srv::MoveToPose_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_wrapper::srv::MoveToPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_wrapper::srv::MoveToPose_Request>()
{
  return moveit_wrapper::srv::builder::Init_MoveToPose_Request_pose();
}

}  // namespace moveit_wrapper


namespace moveit_wrapper
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Response_success
{
public:
  Init_MoveToPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_wrapper::srv::MoveToPose_Response success(::moveit_wrapper::srv::MoveToPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_wrapper::srv::MoveToPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_wrapper::srv::MoveToPose_Response>()
{
  return moveit_wrapper::srv::builder::Init_MoveToPose_Response_success();
}

}  // namespace moveit_wrapper

#endif  // MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
