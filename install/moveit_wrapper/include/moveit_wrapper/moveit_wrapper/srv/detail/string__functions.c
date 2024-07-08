// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_wrapper:srv/String.idl
// generated code does not contain a copyright notice
#include "moveit_wrapper/srv/detail/string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_wrapper__srv__String_Request__init(moveit_wrapper__srv__String_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    moveit_wrapper__srv__String_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_wrapper__srv__String_Request__fini(moveit_wrapper__srv__String_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
moveit_wrapper__srv__String_Request__are_equal(const moveit_wrapper__srv__String_Request * lhs, const moveit_wrapper__srv__String_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
moveit_wrapper__srv__String_Request__copy(
  const moveit_wrapper__srv__String_Request * input,
  moveit_wrapper__srv__String_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

moveit_wrapper__srv__String_Request *
moveit_wrapper__srv__String_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_wrapper__srv__String_Request * msg = (moveit_wrapper__srv__String_Request *)allocator.allocate(sizeof(moveit_wrapper__srv__String_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_wrapper__srv__String_Request));
  bool success = moveit_wrapper__srv__String_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_wrapper__srv__String_Request__destroy(moveit_wrapper__srv__String_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_wrapper__srv__String_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_wrapper__srv__String_Request__Sequence__init(moveit_wrapper__srv__String_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_wrapper__srv__String_Request * data = NULL;

  if (size) {
    data = (moveit_wrapper__srv__String_Request *)allocator.zero_allocate(size, sizeof(moveit_wrapper__srv__String_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_wrapper__srv__String_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_wrapper__srv__String_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_wrapper__srv__String_Request__Sequence__fini(moveit_wrapper__srv__String_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_wrapper__srv__String_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_wrapper__srv__String_Request__Sequence *
moveit_wrapper__srv__String_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_wrapper__srv__String_Request__Sequence * array = (moveit_wrapper__srv__String_Request__Sequence *)allocator.allocate(sizeof(moveit_wrapper__srv__String_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_wrapper__srv__String_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_wrapper__srv__String_Request__Sequence__destroy(moveit_wrapper__srv__String_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_wrapper__srv__String_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_wrapper__srv__String_Request__Sequence__are_equal(const moveit_wrapper__srv__String_Request__Sequence * lhs, const moveit_wrapper__srv__String_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_wrapper__srv__String_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_wrapper__srv__String_Request__Sequence__copy(
  const moveit_wrapper__srv__String_Request__Sequence * input,
  moveit_wrapper__srv__String_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_wrapper__srv__String_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_wrapper__srv__String_Request * data =
      (moveit_wrapper__srv__String_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_wrapper__srv__String_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_wrapper__srv__String_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_wrapper__srv__String_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
moveit_wrapper__srv__String_Response__init(moveit_wrapper__srv__String_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
moveit_wrapper__srv__String_Response__fini(moveit_wrapper__srv__String_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
moveit_wrapper__srv__String_Response__are_equal(const moveit_wrapper__srv__String_Response * lhs, const moveit_wrapper__srv__String_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
moveit_wrapper__srv__String_Response__copy(
  const moveit_wrapper__srv__String_Response * input,
  moveit_wrapper__srv__String_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

moveit_wrapper__srv__String_Response *
moveit_wrapper__srv__String_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_wrapper__srv__String_Response * msg = (moveit_wrapper__srv__String_Response *)allocator.allocate(sizeof(moveit_wrapper__srv__String_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_wrapper__srv__String_Response));
  bool success = moveit_wrapper__srv__String_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_wrapper__srv__String_Response__destroy(moveit_wrapper__srv__String_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_wrapper__srv__String_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_wrapper__srv__String_Response__Sequence__init(moveit_wrapper__srv__String_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_wrapper__srv__String_Response * data = NULL;

  if (size) {
    data = (moveit_wrapper__srv__String_Response *)allocator.zero_allocate(size, sizeof(moveit_wrapper__srv__String_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_wrapper__srv__String_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_wrapper__srv__String_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_wrapper__srv__String_Response__Sequence__fini(moveit_wrapper__srv__String_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_wrapper__srv__String_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_wrapper__srv__String_Response__Sequence *
moveit_wrapper__srv__String_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_wrapper__srv__String_Response__Sequence * array = (moveit_wrapper__srv__String_Response__Sequence *)allocator.allocate(sizeof(moveit_wrapper__srv__String_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_wrapper__srv__String_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_wrapper__srv__String_Response__Sequence__destroy(moveit_wrapper__srv__String_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_wrapper__srv__String_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_wrapper__srv__String_Response__Sequence__are_equal(const moveit_wrapper__srv__String_Response__Sequence * lhs, const moveit_wrapper__srv__String_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_wrapper__srv__String_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_wrapper__srv__String_Response__Sequence__copy(
  const moveit_wrapper__srv__String_Response__Sequence * input,
  moveit_wrapper__srv__String_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_wrapper__srv__String_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_wrapper__srv__String_Response * data =
      (moveit_wrapper__srv__String_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_wrapper__srv__String_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_wrapper__srv__String_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_wrapper__srv__String_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
