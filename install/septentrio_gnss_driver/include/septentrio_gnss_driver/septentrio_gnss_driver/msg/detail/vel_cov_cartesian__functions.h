// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__FUNCTIONS_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "septentrio_gnss_driver/msg/rosidl_generator_c__visibility_control.h"

#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__struct.h"

/// Initialize msg/VelCovCartesian message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * septentrio_gnss_driver__msg__VelCovCartesian
 * )) before or use
 * septentrio_gnss_driver__msg__VelCovCartesian__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__VelCovCartesian__init(septentrio_gnss_driver__msg__VelCovCartesian * msg);

/// Finalize msg/VelCovCartesian message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__VelCovCartesian__fini(septentrio_gnss_driver__msg__VelCovCartesian * msg);

/// Create msg/VelCovCartesian message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * septentrio_gnss_driver__msg__VelCovCartesian__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
septentrio_gnss_driver__msg__VelCovCartesian *
septentrio_gnss_driver__msg__VelCovCartesian__create();

/// Destroy msg/VelCovCartesian message.
/**
 * It calls
 * septentrio_gnss_driver__msg__VelCovCartesian__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__VelCovCartesian__destroy(septentrio_gnss_driver__msg__VelCovCartesian * msg);

/// Check for msg/VelCovCartesian message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__VelCovCartesian__are_equal(const septentrio_gnss_driver__msg__VelCovCartesian * lhs, const septentrio_gnss_driver__msg__VelCovCartesian * rhs);

/// Copy a msg/VelCovCartesian message.
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
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__VelCovCartesian__copy(
  const septentrio_gnss_driver__msg__VelCovCartesian * input,
  septentrio_gnss_driver__msg__VelCovCartesian * output);

/// Initialize array of msg/VelCovCartesian messages.
/**
 * It allocates the memory for the number of elements and calls
 * septentrio_gnss_driver__msg__VelCovCartesian__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__init(septentrio_gnss_driver__msg__VelCovCartesian__Sequence * array, size_t size);

/// Finalize array of msg/VelCovCartesian messages.
/**
 * It calls
 * septentrio_gnss_driver__msg__VelCovCartesian__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__fini(septentrio_gnss_driver__msg__VelCovCartesian__Sequence * array);

/// Create array of msg/VelCovCartesian messages.
/**
 * It allocates the memory for the array and calls
 * septentrio_gnss_driver__msg__VelCovCartesian__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
septentrio_gnss_driver__msg__VelCovCartesian__Sequence *
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__create(size_t size);

/// Destroy array of msg/VelCovCartesian messages.
/**
 * It calls
 * septentrio_gnss_driver__msg__VelCovCartesian__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__destroy(septentrio_gnss_driver__msg__VelCovCartesian__Sequence * array);

/// Check for msg/VelCovCartesian message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__are_equal(const septentrio_gnss_driver__msg__VelCovCartesian__Sequence * lhs, const septentrio_gnss_driver__msg__VelCovCartesian__Sequence * rhs);

/// Copy an array of msg/VelCovCartesian messages.
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
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__copy(
  const septentrio_gnss_driver__msg__VelCovCartesian__Sequence * input,
  septentrio_gnss_driver__msg__VelCovCartesian__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__FUNCTIONS_H_
