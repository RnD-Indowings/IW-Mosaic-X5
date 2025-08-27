// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_H_

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

/// Struct defined in msg/VelCovGeodetic in the package septentrio_gnss_driver.
/**
  * VelCovGeodetic block
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__VelCovGeodetic
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t mode;
  uint8_t error;
  /// m^2/s^2
  float cov_vnvn;
  /// m^2/s^2
  float cov_veve;
  /// m^2/s^2
  float cov_vuvu;
  /// m^2/s^2
  float cov_dtdt;
  /// m^2/s^2
  float cov_vnve;
  /// m^2/s^2
  float cov_vnvu;
  /// m^2/s^2
  float cov_vndt;
  /// m^2/s^2
  float cov_vevu;
  /// m^2/s^2
  float cov_vedt;
  /// m^2/s^2
  float cov_vudt;
} septentrio_gnss_driver__msg__VelCovGeodetic;

// Struct for a sequence of septentrio_gnss_driver__msg__VelCovGeodetic.
typedef struct septentrio_gnss_driver__msg__VelCovGeodetic__Sequence
{
  septentrio_gnss_driver__msg__VelCovGeodetic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__VelCovGeodetic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_H_
