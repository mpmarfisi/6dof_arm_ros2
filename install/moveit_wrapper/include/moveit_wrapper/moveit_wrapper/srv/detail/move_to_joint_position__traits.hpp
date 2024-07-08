// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_wrapper:srv/MoveToJointPosition.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__TRAITS_HPP_
#define MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_wrapper/srv/detail/move_to_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_wrapper
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToJointPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_position
  {
    if (msg.joint_position.size() == 0) {
      out << "joint_position: []";
    } else {
      out << "joint_position: [";
      size_t pending_items = msg.joint_position.size();
      for (auto item : msg.joint_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToJointPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_position.size() == 0) {
      out << "joint_position: []\n";
    } else {
      out << "joint_position:\n";
      for (auto item : msg.joint_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToJointPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace moveit_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use moveit_wrapper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_wrapper::srv::MoveToJointPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_wrapper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_wrapper::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_wrapper::srv::MoveToJointPosition_Request & msg)
{
  return moveit_wrapper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_wrapper::srv::MoveToJointPosition_Request>()
{
  return "moveit_wrapper::srv::MoveToJointPosition_Request";
}

template<>
inline const char * name<moveit_wrapper::srv::MoveToJointPosition_Request>()
{
  return "moveit_wrapper/srv/MoveToJointPosition_Request";
}

template<>
struct has_fixed_size<moveit_wrapper::srv::MoveToJointPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_wrapper::srv::MoveToJointPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_wrapper::srv::MoveToJointPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_wrapper
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToJointPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToJointPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToJointPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace moveit_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use moveit_wrapper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_wrapper::srv::MoveToJointPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_wrapper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_wrapper::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_wrapper::srv::MoveToJointPosition_Response & msg)
{
  return moveit_wrapper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_wrapper::srv::MoveToJointPosition_Response>()
{
  return "moveit_wrapper::srv::MoveToJointPosition_Response";
}

template<>
inline const char * name<moveit_wrapper::srv::MoveToJointPosition_Response>()
{
  return "moveit_wrapper/srv/MoveToJointPosition_Response";
}

template<>
struct has_fixed_size<moveit_wrapper::srv::MoveToJointPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_wrapper::srv::MoveToJointPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_wrapper::srv::MoveToJointPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_wrapper::srv::MoveToJointPosition>()
{
  return "moveit_wrapper::srv::MoveToJointPosition";
}

template<>
inline const char * name<moveit_wrapper::srv::MoveToJointPosition>()
{
  return "moveit_wrapper/srv/MoveToJointPosition";
}

template<>
struct has_fixed_size<moveit_wrapper::srv::MoveToJointPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_wrapper::srv::MoveToJointPosition_Request>::value &&
    has_fixed_size<moveit_wrapper::srv::MoveToJointPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_wrapper::srv::MoveToJointPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_wrapper::srv::MoveToJointPosition_Request>::value &&
    has_bounded_size<moveit_wrapper::srv::MoveToJointPosition_Response>::value
  >
{
};

template<>
struct is_service<moveit_wrapper::srv::MoveToJointPosition>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_wrapper::srv::MoveToJointPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_wrapper::srv::MoveToJointPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__TRAITS_HPP_
