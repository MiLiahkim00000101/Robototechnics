// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sum_full_name_service/srv/detail/sum_full_name__rosidl_typesupport_introspection_c.h"
#include "sum_full_name_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sum_full_name_service/srv/detail/sum_full_name__functions.h"
#include "sum_full_name_service/srv/detail/sum_full_name__struct.h"


// Include directives for member types
// Member `f_name`
// Member `s_name`
// Member `patronymic`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sum_full_name_service__srv__SumFullName_Request__init(message_memory);
}

void sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_fini_function(void * message_memory)
{
  sum_full_name_service__srv__SumFullName_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_member_array[3] = {
  {
    "f_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sum_full_name_service__srv__SumFullName_Request, f_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "s_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sum_full_name_service__srv__SumFullName_Request, s_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "patronymic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sum_full_name_service__srv__SumFullName_Request, patronymic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_members = {
  "sum_full_name_service__srv",  // message namespace
  "SumFullName_Request",  // message name
  3,  // number of fields
  sizeof(sum_full_name_service__srv__SumFullName_Request),
  false,  // has_any_key_member_
  sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_member_array,  // message members
  sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_type_support_handle = {
  0,
  &sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_members,
  get_message_typesupport_handle_function,
  &sum_full_name_service__srv__SumFullName_Request__get_type_hash,
  &sum_full_name_service__srv__SumFullName_Request__get_type_description,
  &sum_full_name_service__srv__SumFullName_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sum_full_name_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Request)() {
  if (!sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_type_support_handle.typesupport_identifier) {
    sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sum_full_name_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__functions.h"
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__struct.h"


// Include directives for member types
// Member `full_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sum_full_name_service__srv__SumFullName_Response__init(message_memory);
}

void sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_fini_function(void * message_memory)
{
  sum_full_name_service__srv__SumFullName_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_member_array[1] = {
  {
    "full_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sum_full_name_service__srv__SumFullName_Response, full_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_members = {
  "sum_full_name_service__srv",  // message namespace
  "SumFullName_Response",  // message name
  1,  // number of fields
  sizeof(sum_full_name_service__srv__SumFullName_Response),
  false,  // has_any_key_member_
  sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_member_array,  // message members
  sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_type_support_handle = {
  0,
  &sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_members,
  get_message_typesupport_handle_function,
  &sum_full_name_service__srv__SumFullName_Response__get_type_hash,
  &sum_full_name_service__srv__SumFullName_Response__get_type_description,
  &sum_full_name_service__srv__SumFullName_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sum_full_name_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Response)() {
  if (!sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_type_support_handle.typesupport_identifier) {
    sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sum_full_name_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__functions.h"
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "sum_full_name_service/srv/sum_full_name.h"
// Member `request`
// Member `response`
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sum_full_name_service__srv__SumFullName_Event__init(message_memory);
}

void sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_fini_function(void * message_memory)
{
  sum_full_name_service__srv__SumFullName_Event__fini(message_memory);
}

size_t sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__size_function__SumFullName_Event__request(
  const void * untyped_member)
{
  const sum_full_name_service__srv__SumFullName_Request__Sequence * member =
    (const sum_full_name_service__srv__SumFullName_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_const_function__SumFullName_Event__request(
  const void * untyped_member, size_t index)
{
  const sum_full_name_service__srv__SumFullName_Request__Sequence * member =
    (const sum_full_name_service__srv__SumFullName_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_function__SumFullName_Event__request(
  void * untyped_member, size_t index)
{
  sum_full_name_service__srv__SumFullName_Request__Sequence * member =
    (sum_full_name_service__srv__SumFullName_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__fetch_function__SumFullName_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sum_full_name_service__srv__SumFullName_Request * item =
    ((const sum_full_name_service__srv__SumFullName_Request *)
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_const_function__SumFullName_Event__request(untyped_member, index));
  sum_full_name_service__srv__SumFullName_Request * value =
    (sum_full_name_service__srv__SumFullName_Request *)(untyped_value);
  *value = *item;
}

void sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__assign_function__SumFullName_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sum_full_name_service__srv__SumFullName_Request * item =
    ((sum_full_name_service__srv__SumFullName_Request *)
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_function__SumFullName_Event__request(untyped_member, index));
  const sum_full_name_service__srv__SumFullName_Request * value =
    (const sum_full_name_service__srv__SumFullName_Request *)(untyped_value);
  *item = *value;
}

bool sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__resize_function__SumFullName_Event__request(
  void * untyped_member, size_t size)
{
  sum_full_name_service__srv__SumFullName_Request__Sequence * member =
    (sum_full_name_service__srv__SumFullName_Request__Sequence *)(untyped_member);
  sum_full_name_service__srv__SumFullName_Request__Sequence__fini(member);
  return sum_full_name_service__srv__SumFullName_Request__Sequence__init(member, size);
}

size_t sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__size_function__SumFullName_Event__response(
  const void * untyped_member)
{
  const sum_full_name_service__srv__SumFullName_Response__Sequence * member =
    (const sum_full_name_service__srv__SumFullName_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_const_function__SumFullName_Event__response(
  const void * untyped_member, size_t index)
{
  const sum_full_name_service__srv__SumFullName_Response__Sequence * member =
    (const sum_full_name_service__srv__SumFullName_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_function__SumFullName_Event__response(
  void * untyped_member, size_t index)
{
  sum_full_name_service__srv__SumFullName_Response__Sequence * member =
    (sum_full_name_service__srv__SumFullName_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__fetch_function__SumFullName_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sum_full_name_service__srv__SumFullName_Response * item =
    ((const sum_full_name_service__srv__SumFullName_Response *)
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_const_function__SumFullName_Event__response(untyped_member, index));
  sum_full_name_service__srv__SumFullName_Response * value =
    (sum_full_name_service__srv__SumFullName_Response *)(untyped_value);
  *value = *item;
}

void sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__assign_function__SumFullName_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sum_full_name_service__srv__SumFullName_Response * item =
    ((sum_full_name_service__srv__SumFullName_Response *)
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_function__SumFullName_Event__response(untyped_member, index));
  const sum_full_name_service__srv__SumFullName_Response * value =
    (const sum_full_name_service__srv__SumFullName_Response *)(untyped_value);
  *item = *value;
}

bool sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__resize_function__SumFullName_Event__response(
  void * untyped_member, size_t size)
{
  sum_full_name_service__srv__SumFullName_Response__Sequence * member =
    (sum_full_name_service__srv__SumFullName_Response__Sequence *)(untyped_member);
  sum_full_name_service__srv__SumFullName_Response__Sequence__fini(member);
  return sum_full_name_service__srv__SumFullName_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sum_full_name_service__srv__SumFullName_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(sum_full_name_service__srv__SumFullName_Event, request),  // bytes offset in struct
    NULL,  // default value
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__size_function__SumFullName_Event__request,  // size() function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_const_function__SumFullName_Event__request,  // get_const(index) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_function__SumFullName_Event__request,  // get(index) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__fetch_function__SumFullName_Event__request,  // fetch(index, &value) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__assign_function__SumFullName_Event__request,  // assign(index, value) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__resize_function__SumFullName_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(sum_full_name_service__srv__SumFullName_Event, response),  // bytes offset in struct
    NULL,  // default value
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__size_function__SumFullName_Event__response,  // size() function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_const_function__SumFullName_Event__response,  // get_const(index) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__get_function__SumFullName_Event__response,  // get(index) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__fetch_function__SumFullName_Event__response,  // fetch(index, &value) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__assign_function__SumFullName_Event__response,  // assign(index, value) function pointer
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__resize_function__SumFullName_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_members = {
  "sum_full_name_service__srv",  // message namespace
  "SumFullName_Event",  // message name
  3,  // number of fields
  sizeof(sum_full_name_service__srv__SumFullName_Event),
  false,  // has_any_key_member_
  sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_member_array,  // message members
  sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_type_support_handle = {
  0,
  &sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_members,
  get_message_typesupport_handle_function,
  &sum_full_name_service__srv__SumFullName_Event__get_type_hash,
  &sum_full_name_service__srv__SumFullName_Event__get_type_description,
  &sum_full_name_service__srv__SumFullName_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sum_full_name_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Event)() {
  sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Request)();
  sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Response)();
  if (!sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_type_support_handle.typesupport_identifier) {
    sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sum_full_name_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sum_full_name_service/srv/detail/sum_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_service_members = {
  "sum_full_name_service__srv",  // service namespace
  "SumFullName",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_Request_message_type_support_handle,
  NULL,  // response message
  // sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_Response_message_type_support_handle
  NULL  // event_message
  // sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_Response_message_type_support_handle
};


static rosidl_service_type_support_t sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_service_type_support_handle = {
  0,
  &sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_service_members,
  get_service_typesupport_handle_function,
  &sum_full_name_service__srv__SumFullName_Request__rosidl_typesupport_introspection_c__SumFullName_Request_message_type_support_handle,
  &sum_full_name_service__srv__SumFullName_Response__rosidl_typesupport_introspection_c__SumFullName_Response_message_type_support_handle,
  &sum_full_name_service__srv__SumFullName_Event__rosidl_typesupport_introspection_c__SumFullName_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sum_full_name_service,
    srv,
    SumFullName
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sum_full_name_service,
    srv,
    SumFullName
  ),
  &sum_full_name_service__srv__SumFullName__get_type_hash,
  &sum_full_name_service__srv__SumFullName__get_type_description,
  &sum_full_name_service__srv__SumFullName__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sum_full_name_service
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName)(void) {
  if (!sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_service_type_support_handle.typesupport_identifier) {
    sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sum_full_name_service, srv, SumFullName_Event)()->data;
  }

  return &sum_full_name_service__srv__detail__sum_full_name__rosidl_typesupport_introspection_c__SumFullName_service_type_support_handle;
}
