// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__STRUCT_H_

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

/// Struct defined in msg/VelCovCartesian in the package septentrio_gnss_driver.
/**
  * VelCovCartesian block
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__VelCovCartesian
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t mode;
  uint8_t error;
  /// m^2/s^2
  float cov_vxvx;
  /// m^2/s^2
  float cov_vyvy;
  /// m^2/s^2
  float cov_vzvz;
  /// m^2/s^2
  float cov_dtdt;
  /// m^2/s^2
  float cov_vxvy;
  /// m^2/s^2
  float cov_vxvz;
  /// m^2/s^2
  float cov_vxdt;
  /// m^2/s^2
  float cov_vyvz;
  /// m^2/s^2
  float cov_vydt;
  /// m^2/s^2
  float cov_vzdt;
} septentrio_gnss_driver__msg__VelCovCartesian;

// Struct for a sequence of septentrio_gnss_driver__msg__VelCovCartesian.
typedef struct septentrio_gnss_driver__msg__VelCovCartesian__Sequence
{
  septentrio_gnss_driver__msg__VelCovCartesian * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__VelCovCartesian__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__STRUCT_H_
