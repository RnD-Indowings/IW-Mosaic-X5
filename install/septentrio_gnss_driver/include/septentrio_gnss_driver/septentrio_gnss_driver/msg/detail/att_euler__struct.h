// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/AttEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__STRUCT_H_

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

/// Struct defined in msg/AttEuler in the package septentrio_gnss_driver.
/**
  * AttEuler block
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__AttEuler
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t nr_sv;
  uint8_t error;
  uint16_t mode;
  /// deg
  float heading;
  /// deg
  float pitch;
  /// deg
  float roll;
  /// deg/s
  float pitch_dot;
  /// deg/s
  float roll_dot;
  /// deg/s
  float heading_dot;
} septentrio_gnss_driver__msg__AttEuler;

// Struct for a sequence of septentrio_gnss_driver__msg__AttEuler.
typedef struct septentrio_gnss_driver__msg__AttEuler__Sequence
{
  septentrio_gnss_driver__msg__AttEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__AttEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__STRUCT_H_
