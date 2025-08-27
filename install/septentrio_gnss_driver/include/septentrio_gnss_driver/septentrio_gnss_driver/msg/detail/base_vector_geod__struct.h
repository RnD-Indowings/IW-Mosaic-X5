// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/BaseVectorGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__struct.h"
// Member 'vector_info_geod'
#include "septentrio_gnss_driver/msg/detail/vector_info_geod__struct.h"

/// Struct defined in msg/BaseVectorGeod in the package septentrio_gnss_driver.
/**
  * BaseVectorGeod block 
  * Block_Number 4028
 */
typedef struct septentrio_gnss_driver__msg__BaseVectorGeod
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t n;
  uint8_t sb_length;
  septentrio_gnss_driver__msg__VectorInfoGeod__Sequence vector_info_geod;
} septentrio_gnss_driver__msg__BaseVectorGeod;

// Struct for a sequence of septentrio_gnss_driver__msg__BaseVectorGeod.
typedef struct septentrio_gnss_driver__msg__BaseVectorGeod__Sequence
{
  septentrio_gnss_driver__msg__BaseVectorGeod * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__BaseVectorGeod__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__STRUCT_H_
