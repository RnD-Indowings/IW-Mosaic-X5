// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/AttCovEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__STRUCT_H_

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

/// Struct defined in msg/AttCovEuler in the package septentrio_gnss_driver.
/**
  * AttCovEuler block
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__AttCovEuler
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t error;
  /// deg^2
  float cov_headhead;
  /// deg^2
  float cov_pitchpitch;
  /// deg^2
  float cov_rollroll;
  /// deg^2
  float cov_headpitch;
  /// deg^2
  float cov_headroll;
  /// deg^2
  float cov_pitchroll;
} septentrio_gnss_driver__msg__AttCovEuler;

// Struct for a sequence of septentrio_gnss_driver__msg__AttCovEuler.
typedef struct septentrio_gnss_driver__msg__AttCovEuler__Sequence
{
  septentrio_gnss_driver__msg__AttCovEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__AttCovEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__STRUCT_H_
