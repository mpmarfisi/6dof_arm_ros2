// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_wrapper:srv/MoveToJointPosition.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__STRUCT_HPP_
#define MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Request __declspec(deprecated)
#endif

namespace moveit_wrapper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToJointPosition_Request_
{
  using Type = MoveToJointPosition_Request_<ContainerAllocator>;

  explicit MoveToJointPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MoveToJointPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_position_type joint_position;

  // setters for named parameter idiom
  Type & set__joint_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Request
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Request
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToJointPosition_Request_ & other) const
  {
    if (this->joint_position != other.joint_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToJointPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToJointPosition_Request_

// alias to use template instance with default allocator
using MoveToJointPosition_Request =
  moveit_wrapper::srv::MoveToJointPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_wrapper


#ifndef _WIN32
# define DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Response __declspec(deprecated)
#endif

namespace moveit_wrapper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToJointPosition_Response_
{
  using Type = MoveToJointPosition_Response_<ContainerAllocator>;

  explicit MoveToJointPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveToJointPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Response
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_wrapper__srv__MoveToJointPosition_Response
    std::shared_ptr<moveit_wrapper::srv::MoveToJointPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToJointPosition_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToJointPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToJointPosition_Response_

// alias to use template instance with default allocator
using MoveToJointPosition_Response =
  moveit_wrapper::srv::MoveToJointPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_wrapper

namespace moveit_wrapper
{

namespace srv
{

struct MoveToJointPosition
{
  using Request = moveit_wrapper::srv::MoveToJointPosition_Request;
  using Response = moveit_wrapper::srv::MoveToJointPosition_Response;
};

}  // namespace srv

}  // namespace moveit_wrapper

#endif  // MOVEIT_WRAPPER__SRV__DETAIL__MOVE_TO_JOINT_POSITION__STRUCT_HPP_
