// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/ReceiverTime.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__STRUCT_H_

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

/// Struct defined in msg/ReceiverTime in the package septentrio_gnss_driver.
/**
  * ReceiverTime block
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__ReceiverTime
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  /// year
  int8_t utc_year;
  /// month
  int8_t utc_month;
  /// day
  int8_t utc_day;
  /// hour
  int8_t utc_hour;
  /// minute
  int8_t utc_min;
  /// s
  int8_t utc_second;
  /// s
  int8_t delta_ls;
  uint8_t sync_level;
} septentrio_gnss_driver__msg__ReceiverTime;

// Struct for a sequence of septentrio_gnss_driver__msg__ReceiverTime.
typedef struct septentrio_gnss_driver__msg__ReceiverTime__Sequence
{
  septentrio_gnss_driver__msg__ReceiverTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__ReceiverTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__STRUCT_H_
