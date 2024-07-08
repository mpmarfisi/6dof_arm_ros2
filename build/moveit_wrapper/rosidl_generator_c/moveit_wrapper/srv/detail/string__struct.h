// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_wrapper:srv/String.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_WRAPPER__SRV__DETAIL__STRING__STRUCT_H_
#define MOVEIT_WRAPPER__SRV__DETAIL__STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/String in the package moveit_wrapper.
typedef struct moveit_wrapper__srv__String_Request
{
  rosidl_runtime_c__String data;
} moveit_wrapper__srv__String_Request;

// Struct for a sequence of moveit_wrapper__srv__String_Request.
typedef struct moveit_wrapper__srv__String_Request__Sequence
{
  moveit_wrapper__srv__String_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_wrapper__srv__String_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/String in the package moveit_wrapper.
typedef struct moveit_wrapper__srv__String_Response
{
  bool success;
} moveit_wrapper__srv__String_Response;

// Struct for a sequence of moveit_wrapper__srv__String_Response.
typedef struct moveit_wrapper__srv__String_Response__Sequence
{
  moveit_wrapper__srv__String_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_wrapper__srv__String_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_WRAPPER__SRV__DETAIL__STRING__STRUCT_H_
