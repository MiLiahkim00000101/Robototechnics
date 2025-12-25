// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice
#include "sum_full_name_service/srv/detail/sum_full_name__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `f_name`
// Member `s_name`
// Member `patronymic`
#include "rosidl_runtime_c/string_functions.h"

bool
sum_full_name_service__srv__SumFullName_Request__init(sum_full_name_service__srv__SumFullName_Request * msg)
{
  if (!msg) {
    return false;
  }
  // f_name
  if (!rosidl_runtime_c__String__init(&msg->f_name)) {
    sum_full_name_service__srv__SumFullName_Request__fini(msg);
    return false;
  }
  // s_name
  if (!rosidl_runtime_c__String__init(&msg->s_name)) {
    sum_full_name_service__srv__SumFullName_Request__fini(msg);
    return false;
  }
  // patronymic
  if (!rosidl_runtime_c__String__init(&msg->patronymic)) {
    sum_full_name_service__srv__SumFullName_Request__fini(msg);
    return false;
  }
  return true;
}

void
sum_full_name_service__srv__SumFullName_Request__fini(sum_full_name_service__srv__SumFullName_Request * msg)
{
  if (!msg) {
    return;
  }
  // f_name
  rosidl_runtime_c__String__fini(&msg->f_name);
  // s_name
  rosidl_runtime_c__String__fini(&msg->s_name);
  // patronymic
  rosidl_runtime_c__String__fini(&msg->patronymic);
}

bool
sum_full_name_service__srv__SumFullName_Request__are_equal(const sum_full_name_service__srv__SumFullName_Request * lhs, const sum_full_name_service__srv__SumFullName_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->f_name), &(rhs->f_name)))
  {
    return false;
  }
  // s_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->s_name), &(rhs->s_name)))
  {
    return false;
  }
  // patronymic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->patronymic), &(rhs->patronymic)))
  {
    return false;
  }
  return true;
}

bool
sum_full_name_service__srv__SumFullName_Request__copy(
  const sum_full_name_service__srv__SumFullName_Request * input,
  sum_full_name_service__srv__SumFullName_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // f_name
  if (!rosidl_runtime_c__String__copy(
      &(input->f_name), &(output->f_name)))
  {
    return false;
  }
  // s_name
  if (!rosidl_runtime_c__String__copy(
      &(input->s_name), &(output->s_name)))
  {
    return false;
  }
  // patronymic
  if (!rosidl_runtime_c__String__copy(
      &(input->patronymic), &(output->patronymic)))
  {
    return false;
  }
  return true;
}

sum_full_name_service__srv__SumFullName_Request *
sum_full_name_service__srv__SumFullName_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Request * msg = (sum_full_name_service__srv__SumFullName_Request *)allocator.allocate(sizeof(sum_full_name_service__srv__SumFullName_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sum_full_name_service__srv__SumFullName_Request));
  bool success = sum_full_name_service__srv__SumFullName_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sum_full_name_service__srv__SumFullName_Request__destroy(sum_full_name_service__srv__SumFullName_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sum_full_name_service__srv__SumFullName_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sum_full_name_service__srv__SumFullName_Request__Sequence__init(sum_full_name_service__srv__SumFullName_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Request * data = NULL;

  if (size) {
    data = (sum_full_name_service__srv__SumFullName_Request *)allocator.zero_allocate(size, sizeof(sum_full_name_service__srv__SumFullName_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sum_full_name_service__srv__SumFullName_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sum_full_name_service__srv__SumFullName_Request__fini(&data[i - 1]);
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
sum_full_name_service__srv__SumFullName_Request__Sequence__fini(sum_full_name_service__srv__SumFullName_Request__Sequence * array)
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
      sum_full_name_service__srv__SumFullName_Request__fini(&array->data[i]);
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

sum_full_name_service__srv__SumFullName_Request__Sequence *
sum_full_name_service__srv__SumFullName_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Request__Sequence * array = (sum_full_name_service__srv__SumFullName_Request__Sequence *)allocator.allocate(sizeof(sum_full_name_service__srv__SumFullName_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sum_full_name_service__srv__SumFullName_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sum_full_name_service__srv__SumFullName_Request__Sequence__destroy(sum_full_name_service__srv__SumFullName_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sum_full_name_service__srv__SumFullName_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sum_full_name_service__srv__SumFullName_Request__Sequence__are_equal(const sum_full_name_service__srv__SumFullName_Request__Sequence * lhs, const sum_full_name_service__srv__SumFullName_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sum_full_name_service__srv__SumFullName_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sum_full_name_service__srv__SumFullName_Request__Sequence__copy(
  const sum_full_name_service__srv__SumFullName_Request__Sequence * input,
  sum_full_name_service__srv__SumFullName_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sum_full_name_service__srv__SumFullName_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sum_full_name_service__srv__SumFullName_Request * data =
      (sum_full_name_service__srv__SumFullName_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sum_full_name_service__srv__SumFullName_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sum_full_name_service__srv__SumFullName_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sum_full_name_service__srv__SumFullName_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `full_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
sum_full_name_service__srv__SumFullName_Response__init(sum_full_name_service__srv__SumFullName_Response * msg)
{
  if (!msg) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__init(&msg->full_name)) {
    sum_full_name_service__srv__SumFullName_Response__fini(msg);
    return false;
  }
  return true;
}

void
sum_full_name_service__srv__SumFullName_Response__fini(sum_full_name_service__srv__SumFullName_Response * msg)
{
  if (!msg) {
    return;
  }
  // full_name
  rosidl_runtime_c__String__fini(&msg->full_name);
}

bool
sum_full_name_service__srv__SumFullName_Response__are_equal(const sum_full_name_service__srv__SumFullName_Response * lhs, const sum_full_name_service__srv__SumFullName_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->full_name), &(rhs->full_name)))
  {
    return false;
  }
  return true;
}

bool
sum_full_name_service__srv__SumFullName_Response__copy(
  const sum_full_name_service__srv__SumFullName_Response * input,
  sum_full_name_service__srv__SumFullName_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__copy(
      &(input->full_name), &(output->full_name)))
  {
    return false;
  }
  return true;
}

sum_full_name_service__srv__SumFullName_Response *
sum_full_name_service__srv__SumFullName_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Response * msg = (sum_full_name_service__srv__SumFullName_Response *)allocator.allocate(sizeof(sum_full_name_service__srv__SumFullName_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sum_full_name_service__srv__SumFullName_Response));
  bool success = sum_full_name_service__srv__SumFullName_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sum_full_name_service__srv__SumFullName_Response__destroy(sum_full_name_service__srv__SumFullName_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sum_full_name_service__srv__SumFullName_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sum_full_name_service__srv__SumFullName_Response__Sequence__init(sum_full_name_service__srv__SumFullName_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Response * data = NULL;

  if (size) {
    data = (sum_full_name_service__srv__SumFullName_Response *)allocator.zero_allocate(size, sizeof(sum_full_name_service__srv__SumFullName_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sum_full_name_service__srv__SumFullName_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sum_full_name_service__srv__SumFullName_Response__fini(&data[i - 1]);
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
sum_full_name_service__srv__SumFullName_Response__Sequence__fini(sum_full_name_service__srv__SumFullName_Response__Sequence * array)
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
      sum_full_name_service__srv__SumFullName_Response__fini(&array->data[i]);
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

sum_full_name_service__srv__SumFullName_Response__Sequence *
sum_full_name_service__srv__SumFullName_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Response__Sequence * array = (sum_full_name_service__srv__SumFullName_Response__Sequence *)allocator.allocate(sizeof(sum_full_name_service__srv__SumFullName_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sum_full_name_service__srv__SumFullName_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sum_full_name_service__srv__SumFullName_Response__Sequence__destroy(sum_full_name_service__srv__SumFullName_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sum_full_name_service__srv__SumFullName_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sum_full_name_service__srv__SumFullName_Response__Sequence__are_equal(const sum_full_name_service__srv__SumFullName_Response__Sequence * lhs, const sum_full_name_service__srv__SumFullName_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sum_full_name_service__srv__SumFullName_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sum_full_name_service__srv__SumFullName_Response__Sequence__copy(
  const sum_full_name_service__srv__SumFullName_Response__Sequence * input,
  sum_full_name_service__srv__SumFullName_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sum_full_name_service__srv__SumFullName_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sum_full_name_service__srv__SumFullName_Response * data =
      (sum_full_name_service__srv__SumFullName_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sum_full_name_service__srv__SumFullName_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sum_full_name_service__srv__SumFullName_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sum_full_name_service__srv__SumFullName_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__functions.h"

bool
sum_full_name_service__srv__SumFullName_Event__init(sum_full_name_service__srv__SumFullName_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    sum_full_name_service__srv__SumFullName_Event__fini(msg);
    return false;
  }
  // request
  if (!sum_full_name_service__srv__SumFullName_Request__Sequence__init(&msg->request, 0)) {
    sum_full_name_service__srv__SumFullName_Event__fini(msg);
    return false;
  }
  // response
  if (!sum_full_name_service__srv__SumFullName_Response__Sequence__init(&msg->response, 0)) {
    sum_full_name_service__srv__SumFullName_Event__fini(msg);
    return false;
  }
  return true;
}

void
sum_full_name_service__srv__SumFullName_Event__fini(sum_full_name_service__srv__SumFullName_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  sum_full_name_service__srv__SumFullName_Request__Sequence__fini(&msg->request);
  // response
  sum_full_name_service__srv__SumFullName_Response__Sequence__fini(&msg->response);
}

bool
sum_full_name_service__srv__SumFullName_Event__are_equal(const sum_full_name_service__srv__SumFullName_Event * lhs, const sum_full_name_service__srv__SumFullName_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!sum_full_name_service__srv__SumFullName_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!sum_full_name_service__srv__SumFullName_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
sum_full_name_service__srv__SumFullName_Event__copy(
  const sum_full_name_service__srv__SumFullName_Event * input,
  sum_full_name_service__srv__SumFullName_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!sum_full_name_service__srv__SumFullName_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!sum_full_name_service__srv__SumFullName_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

sum_full_name_service__srv__SumFullName_Event *
sum_full_name_service__srv__SumFullName_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Event * msg = (sum_full_name_service__srv__SumFullName_Event *)allocator.allocate(sizeof(sum_full_name_service__srv__SumFullName_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sum_full_name_service__srv__SumFullName_Event));
  bool success = sum_full_name_service__srv__SumFullName_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sum_full_name_service__srv__SumFullName_Event__destroy(sum_full_name_service__srv__SumFullName_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sum_full_name_service__srv__SumFullName_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sum_full_name_service__srv__SumFullName_Event__Sequence__init(sum_full_name_service__srv__SumFullName_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Event * data = NULL;

  if (size) {
    data = (sum_full_name_service__srv__SumFullName_Event *)allocator.zero_allocate(size, sizeof(sum_full_name_service__srv__SumFullName_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sum_full_name_service__srv__SumFullName_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sum_full_name_service__srv__SumFullName_Event__fini(&data[i - 1]);
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
sum_full_name_service__srv__SumFullName_Event__Sequence__fini(sum_full_name_service__srv__SumFullName_Event__Sequence * array)
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
      sum_full_name_service__srv__SumFullName_Event__fini(&array->data[i]);
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

sum_full_name_service__srv__SumFullName_Event__Sequence *
sum_full_name_service__srv__SumFullName_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sum_full_name_service__srv__SumFullName_Event__Sequence * array = (sum_full_name_service__srv__SumFullName_Event__Sequence *)allocator.allocate(sizeof(sum_full_name_service__srv__SumFullName_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sum_full_name_service__srv__SumFullName_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sum_full_name_service__srv__SumFullName_Event__Sequence__destroy(sum_full_name_service__srv__SumFullName_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sum_full_name_service__srv__SumFullName_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sum_full_name_service__srv__SumFullName_Event__Sequence__are_equal(const sum_full_name_service__srv__SumFullName_Event__Sequence * lhs, const sum_full_name_service__srv__SumFullName_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sum_full_name_service__srv__SumFullName_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sum_full_name_service__srv__SumFullName_Event__Sequence__copy(
  const sum_full_name_service__srv__SumFullName_Event__Sequence * input,
  sum_full_name_service__srv__SumFullName_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sum_full_name_service__srv__SumFullName_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sum_full_name_service__srv__SumFullName_Event * data =
      (sum_full_name_service__srv__SumFullName_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sum_full_name_service__srv__SumFullName_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sum_full_name_service__srv__SumFullName_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sum_full_name_service__srv__SumFullName_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
