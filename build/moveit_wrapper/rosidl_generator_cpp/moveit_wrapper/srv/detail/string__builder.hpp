// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_wrapper:srv/String.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_WRAPPER__SRV__DETAIL__STRING__BUILDER_HPP_
#define MOVEIT_WRAPPER__SRV__DETAIL__STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_wrapper/srv/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_wrapper
{

namespace srv
{

namespace builder
{

class Init_String_Request_data
{
public:
  Init_String_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_wrapper::srv::String_Request data(::moveit_wrapper::srv::String_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_wrapper::srv::String_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_wrapper::srv::String_Request>()
{
  return moveit_wrapper::srv::builder::Init_String_Request_data();
}

}  // namespace moveit_wrapper


namespace moveit_wrapper
{

namespace srv
{

namespace builder
{

class Init_String_Response_success
{
public:
  Init_String_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_wrapper::srv::String_Response success(::moveit_wrapper::srv::String_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_wrapper::srv::String_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_wrapper::srv::String_Response>()
{
  return moveit_wrapper::srv::builder::Init_String_Response_success();
}

}  // namespace moveit_wrapper

#endif  // MOVEIT_WRAPPER__SRV__DETAIL__STRING__BUILDER_HPP_
