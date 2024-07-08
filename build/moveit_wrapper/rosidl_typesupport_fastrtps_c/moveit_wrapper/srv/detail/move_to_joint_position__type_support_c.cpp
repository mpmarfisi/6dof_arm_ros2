// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_wrapper:srv/MoveToJointPosition.idl
// generated code does not contain a copyright notice
#include "moveit_wrapper/srv/detail/move_to_joint_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_wrapper/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_wrapper/srv/detail/move_to_joint_position__struct.h"
#include "moveit_wrapper/srv/detail/move_to_joint_position__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // joint_position
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_position

// forward declare type support functions


using _MoveToJointPosition_Request__ros_msg_type = moveit_wrapper__srv__MoveToJointPosition_Request;

static bool _MoveToJointPosition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveToJointPosition_Request__ros_msg_type * ros_message = static_cast<const _MoveToJointPosition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_position
  {
    size_t size = ros_message->joint_position.size;
    auto array_ptr = ros_message->joint_position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MoveToJointPosition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveToJointPosition_Request__ros_msg_type * ros_message = static_cast<_MoveToJointPosition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_position.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_position);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_position, size)) {
      fprintf(stderr, "failed to create array for field 'joint_position'");
      return false;
    }
    auto array_ptr = ros_message->joint_position.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_wrapper
size_t get_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveToJointPosition_Request__ros_msg_type * ros_message = static_cast<const _MoveToJointPosition_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_position
  {
    size_t array_size = ros_message->joint_position.size;
    auto array_ptr = ros_message->joint_position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MoveToJointPosition_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_wrapper
size_t max_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint_position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_wrapper__srv__MoveToJointPosition_Request;
    is_plain =
      (
      offsetof(DataType, joint_position) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoveToJointPosition_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveToJointPosition_Request = {
  "moveit_wrapper::srv",
  "MoveToJointPosition_Request",
  _MoveToJointPosition_Request__cdr_serialize,
  _MoveToJointPosition_Request__cdr_deserialize,
  _MoveToJointPosition_Request__get_serialized_size,
  _MoveToJointPosition_Request__max_serialized_size
};

static rosidl_message_type_support_t _MoveToJointPosition_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveToJointPosition_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_wrapper, srv, MoveToJointPosition_Request)() {
  return &_MoveToJointPosition_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "moveit_wrapper/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "moveit_wrapper/srv/detail/move_to_joint_position__struct.h"
// already included above
// #include "moveit_wrapper/srv/detail/move_to_joint_position__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MoveToJointPosition_Response__ros_msg_type = moveit_wrapper__srv__MoveToJointPosition_Response;

static bool _MoveToJointPosition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveToJointPosition_Response__ros_msg_type * ros_message = static_cast<const _MoveToJointPosition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _MoveToJointPosition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveToJointPosition_Response__ros_msg_type * ros_message = static_cast<_MoveToJointPosition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_wrapper
size_t get_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveToJointPosition_Response__ros_msg_type * ros_message = static_cast<const _MoveToJointPosition_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MoveToJointPosition_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_wrapper
size_t max_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_wrapper__srv__MoveToJointPosition_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoveToJointPosition_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_wrapper__srv__MoveToJointPosition_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveToJointPosition_Response = {
  "moveit_wrapper::srv",
  "MoveToJointPosition_Response",
  _MoveToJointPosition_Response__cdr_serialize,
  _MoveToJointPosition_Response__cdr_deserialize,
  _MoveToJointPosition_Response__get_serialized_size,
  _MoveToJointPosition_Response__max_serialized_size
};

static rosidl_message_type_support_t _MoveToJointPosition_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveToJointPosition_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_wrapper, srv, MoveToJointPosition_Response)() {
  return &_MoveToJointPosition_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "moveit_wrapper/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_wrapper/srv/move_to_joint_position.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MoveToJointPosition__callbacks = {
  "moveit_wrapper::srv",
  "MoveToJointPosition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_wrapper, srv, MoveToJointPosition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_wrapper, srv, MoveToJointPosition_Response)(),
};

static rosidl_service_type_support_t MoveToJointPosition__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MoveToJointPosition__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_wrapper, srv, MoveToJointPosition)() {
  return &MoveToJointPosition__handle;
}

#if defined(__cplusplus)
}
#endif
