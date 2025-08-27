// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/VelSensorSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__STRUCT_H_

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

/// Struct defined in msg/VelSensorSetup in the package septentrio_gnss_driver.
/**
  * VelSensorSetup block
  * Block_Number 4244
 */
typedef struct septentrio_gnss_driver__msg__VelSensorSetup
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t port;
  /// m
  float lever_arm_x;
  /// m
  float lever_arm_y;
  /// m
  float lever_arm_z;
} septentrio_gnss_driver__msg__VelSensorSetup;

// Struct for a sequence of septentrio_gnss_driver__msg__VelSensorSetup.
typedef struct septentrio_gnss_driver__msg__VelSensorSetup__Sequence
{
  septentrio_gnss_driver__msg__VelSensorSetup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__VelSensorSetup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__STRUCT_H_
