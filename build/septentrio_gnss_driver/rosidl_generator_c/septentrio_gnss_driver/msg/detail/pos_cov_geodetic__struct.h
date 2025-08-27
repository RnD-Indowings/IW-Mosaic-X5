// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/PosCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__STRUCT_H_

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

/// Struct defined in msg/PosCovGeodetic in the package septentrio_gnss_driver.
/**
  * PVTGeodetic block
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__PosCovGeodetic
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t mode;
  uint8_t error;
  /// m^2
  float cov_latlat;
  /// m^2
  float cov_lonlon;
  /// m^2
  float cov_hgthgt;
  /// m^2
  float cov_bb;
  /// m^2
  float cov_latlon;
  /// m^2
  float cov_lathgt;
  /// m^2
  float cov_latb;
  /// m^2
  float cov_lonhgt;
  /// m^2
  float cov_lonb;
  /// m^2
  float cov_hb;
} septentrio_gnss_driver__msg__PosCovGeodetic;

// Struct for a sequence of septentrio_gnss_driver__msg__PosCovGeodetic.
typedef struct septentrio_gnss_driver__msg__PosCovGeodetic__Sequence
{
  septentrio_gnss_driver__msg__PosCovGeodetic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__PosCovGeodetic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__STRUCT_H_
