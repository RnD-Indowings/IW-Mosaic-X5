// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/RFStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__STRUCT_H_

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
// Member 'rfband'
#include "septentrio_gnss_driver/msg/detail/rf_band__struct.h"

/// Struct defined in msg/RFStatus in the package septentrio_gnss_driver.
/**
  * RFStatus block
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__RFStatus
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t n;
  uint8_t sb_length;
  uint8_t flags;
  septentrio_gnss_driver__msg__RFBand__Sequence rfband;
} septentrio_gnss_driver__msg__RFStatus;

// Struct for a sequence of septentrio_gnss_driver__msg__RFStatus.
typedef struct septentrio_gnss_driver__msg__RFStatus__Sequence
{
  septentrio_gnss_driver__msg__RFStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__RFStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__STRUCT_H_
