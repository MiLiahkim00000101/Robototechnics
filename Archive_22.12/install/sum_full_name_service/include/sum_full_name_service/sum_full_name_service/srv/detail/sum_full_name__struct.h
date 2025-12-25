// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sum_full_name_service/srv/sum_full_name.h"


#ifndef SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__STRUCT_H_
#define SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'f_name'
// Member 's_name'
// Member 'patronymic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SumFullName in the package sum_full_name_service.
typedef struct sum_full_name_service__srv__SumFullName_Request
{
  rosidl_runtime_c__String f_name;
  rosidl_runtime_c__String s_name;
  rosidl_runtime_c__String patronymic;
} sum_full_name_service__srv__SumFullName_Request;

// Struct for a sequence of sum_full_name_service__srv__SumFullName_Request.
typedef struct sum_full_name_service__srv__SumFullName_Request__Sequence
{
  sum_full_name_service__srv__SumFullName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sum_full_name_service__srv__SumFullName_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'full_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SumFullName in the package sum_full_name_service.
typedef struct sum_full_name_service__srv__SumFullName_Response
{
  rosidl_runtime_c__String full_name;
} sum_full_name_service__srv__SumFullName_Response;

// Struct for a sequence of sum_full_name_service__srv__SumFullName_Response.
typedef struct sum_full_name_service__srv__SumFullName_Response__Sequence
{
  sum_full_name_service__srv__SumFullName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sum_full_name_service__srv__SumFullName_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sum_full_name_service__srv__SumFullName_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sum_full_name_service__srv__SumFullName_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SumFullName in the package sum_full_name_service.
typedef struct sum_full_name_service__srv__SumFullName_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sum_full_name_service__srv__SumFullName_Request__Sequence request;
  sum_full_name_service__srv__SumFullName_Response__Sequence response;
} sum_full_name_service__srv__SumFullName_Event;

// Struct for a sequence of sum_full_name_service__srv__SumFullName_Event.
typedef struct sum_full_name_service__srv__SumFullName_Event__Sequence
{
  sum_full_name_service__srv__SumFullName_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sum_full_name_service__srv__SumFullName_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__STRUCT_H_
