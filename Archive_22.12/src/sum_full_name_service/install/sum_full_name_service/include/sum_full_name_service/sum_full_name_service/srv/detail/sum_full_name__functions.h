// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice

#ifndef SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__FUNCTIONS_H_
#define SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sum_full_name_service/msg/rosidl_generator_c__visibility_control.h"

#include "sum_full_name_service/srv/detail/sum_full_name__struct.h"

/// Initialize srv/SumFullName message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sum_full_name_service__srv__SumFullName_Request
 * )) before or use
 * sum_full_name_service__srv__SumFullName_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Request__init(sum_full_name_service__srv__SumFullName_Request * msg);

/// Finalize srv/SumFullName message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Request__fini(sum_full_name_service__srv__SumFullName_Request * msg);

/// Create srv/SumFullName message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sum_full_name_service__srv__SumFullName_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
sum_full_name_service__srv__SumFullName_Request *
sum_full_name_service__srv__SumFullName_Request__create();

/// Destroy srv/SumFullName message.
/**
 * It calls
 * sum_full_name_service__srv__SumFullName_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Request__destroy(sum_full_name_service__srv__SumFullName_Request * msg);

/// Check for srv/SumFullName message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Request__are_equal(const sum_full_name_service__srv__SumFullName_Request * lhs, const sum_full_name_service__srv__SumFullName_Request * rhs);

/// Copy a srv/SumFullName message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Request__copy(
  const sum_full_name_service__srv__SumFullName_Request * input,
  sum_full_name_service__srv__SumFullName_Request * output);

/// Initialize array of srv/SumFullName messages.
/**
 * It allocates the memory for the number of elements and calls
 * sum_full_name_service__srv__SumFullName_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Request__Sequence__init(sum_full_name_service__srv__SumFullName_Request__Sequence * array, size_t size);

/// Finalize array of srv/SumFullName messages.
/**
 * It calls
 * sum_full_name_service__srv__SumFullName_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Request__Sequence__fini(sum_full_name_service__srv__SumFullName_Request__Sequence * array);

/// Create array of srv/SumFullName messages.
/**
 * It allocates the memory for the array and calls
 * sum_full_name_service__srv__SumFullName_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
sum_full_name_service__srv__SumFullName_Request__Sequence *
sum_full_name_service__srv__SumFullName_Request__Sequence__create(size_t size);

/// Destroy array of srv/SumFullName messages.
/**
 * It calls
 * sum_full_name_service__srv__SumFullName_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Request__Sequence__destroy(sum_full_name_service__srv__SumFullName_Request__Sequence * array);

/// Check for srv/SumFullName message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Request__Sequence__are_equal(const sum_full_name_service__srv__SumFullName_Request__Sequence * lhs, const sum_full_name_service__srv__SumFullName_Request__Sequence * rhs);

/// Copy an array of srv/SumFullName messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Request__Sequence__copy(
  const sum_full_name_service__srv__SumFullName_Request__Sequence * input,
  sum_full_name_service__srv__SumFullName_Request__Sequence * output);

/// Initialize srv/SumFullName message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sum_full_name_service__srv__SumFullName_Response
 * )) before or use
 * sum_full_name_service__srv__SumFullName_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Response__init(sum_full_name_service__srv__SumFullName_Response * msg);

/// Finalize srv/SumFullName message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Response__fini(sum_full_name_service__srv__SumFullName_Response * msg);

/// Create srv/SumFullName message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sum_full_name_service__srv__SumFullName_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
sum_full_name_service__srv__SumFullName_Response *
sum_full_name_service__srv__SumFullName_Response__create();

/// Destroy srv/SumFullName message.
/**
 * It calls
 * sum_full_name_service__srv__SumFullName_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Response__destroy(sum_full_name_service__srv__SumFullName_Response * msg);

/// Check for srv/SumFullName message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Response__are_equal(const sum_full_name_service__srv__SumFullName_Response * lhs, const sum_full_name_service__srv__SumFullName_Response * rhs);

/// Copy a srv/SumFullName message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Response__copy(
  const sum_full_name_service__srv__SumFullName_Response * input,
  sum_full_name_service__srv__SumFullName_Response * output);

/// Initialize array of srv/SumFullName messages.
/**
 * It allocates the memory for the number of elements and calls
 * sum_full_name_service__srv__SumFullName_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Response__Sequence__init(sum_full_name_service__srv__SumFullName_Response__Sequence * array, size_t size);

/// Finalize array of srv/SumFullName messages.
/**
 * It calls
 * sum_full_name_service__srv__SumFullName_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Response__Sequence__fini(sum_full_name_service__srv__SumFullName_Response__Sequence * array);

/// Create array of srv/SumFullName messages.
/**
 * It allocates the memory for the array and calls
 * sum_full_name_service__srv__SumFullName_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
sum_full_name_service__srv__SumFullName_Response__Sequence *
sum_full_name_service__srv__SumFullName_Response__Sequence__create(size_t size);

/// Destroy array of srv/SumFullName messages.
/**
 * It calls
 * sum_full_name_service__srv__SumFullName_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
void
sum_full_name_service__srv__SumFullName_Response__Sequence__destroy(sum_full_name_service__srv__SumFullName_Response__Sequence * array);

/// Check for srv/SumFullName message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Response__Sequence__are_equal(const sum_full_name_service__srv__SumFullName_Response__Sequence * lhs, const sum_full_name_service__srv__SumFullName_Response__Sequence * rhs);

/// Copy an array of srv/SumFullName messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sum_full_name_service
bool
sum_full_name_service__srv__SumFullName_Response__Sequence__copy(
  const sum_full_name_service__srv__SumFullName_Response__Sequence * input,
  sum_full_name_service__srv__SumFullName_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__FUNCTIONS_H_
