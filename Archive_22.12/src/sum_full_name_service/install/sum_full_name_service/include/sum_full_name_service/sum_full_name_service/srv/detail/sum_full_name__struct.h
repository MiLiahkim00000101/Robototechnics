// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice

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

#ifdef __cplusplus
}
#endif

#endif  // SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__STRUCT_H_
