// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/AIMPlusStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPECTRUM_CLEAN'.
/**
  * -------------------------------
 */
enum
{
  septentrio_gnss_driver__msg__AIMPlusStatus__SPECTRUM_CLEAN = 0
};

/// Constant 'INTERFERENCE_MITIGATED'.
enum
{
  septentrio_gnss_driver__msg__AIMPlusStatus__INTERFERENCE_MITIGATED = 1
};

/// Constant 'INTERFERENCE_PRESENT'.
enum
{
  septentrio_gnss_driver__msg__AIMPlusStatus__INTERFERENCE_PRESENT = 2
};

/// Constant 'NONE_DETECTED'.
/**
  * --------------------------------------------------------
 */
enum
{
  septentrio_gnss_driver__msg__AIMPlusStatus__NONE_DETECTED = 0
};

/// Constant 'SPOOFING_DETECTED_BY_OSNMA'.
enum
{
  septentrio_gnss_driver__msg__AIMPlusStatus__SPOOFING_DETECTED_BY_OSNMA = 1
};

/// Constant 'SPOOFING_DETECTED_BY_AUTHENTCITY_TEST'.
enum
{
  septentrio_gnss_driver__msg__AIMPlusStatus__SPOOFING_DETECTED_BY_AUTHENTCITY_TEST = 2
};

/// Constant 'SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST'.
enum
{
  septentrio_gnss_driver__msg__AIMPlusStatus__SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/AIMPlusStatus in the package septentrio_gnss_driver.
/**
  * AIMPlusStatus message
  * ROS message header
 */
typedef struct septentrio_gnss_driver__msg__AIMPlusStatus
{
  std_msgs__msg__Header header;
  /// ms since week start
  uint32_t tow;
  /// weeks since Jan 06, 1980 at 00:00:00 UTC
  uint16_t wnc;
  uint8_t interference;
  /// -------------------------------
  uint8_t spoofing;
  /// --------------------------------------------------------
  bool osnma_authenticating;
  uint8_t galileo_authentic;
  uint8_t galileo_spoofed;
  uint8_t gps_authentic;
  uint8_t gps_spoofed;
} septentrio_gnss_driver__msg__AIMPlusStatus;

// Struct for a sequence of septentrio_gnss_driver__msg__AIMPlusStatus.
typedef struct septentrio_gnss_driver__msg__AIMPlusStatus__Sequence
{
  septentrio_gnss_driver__msg__AIMPlusStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__AIMPlusStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__STRUCT_H_
