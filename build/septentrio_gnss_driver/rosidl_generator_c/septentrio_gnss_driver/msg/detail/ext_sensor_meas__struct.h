// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_H_

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
// Member 'source'
// Member 'sensor_model'
// Member 'type'
// Member 'obs_info'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ExtSensorMeas in the package septentrio_gnss_driver.
/**
  * ExtSensorMeas block 
  * Block_Number 4050
 */
typedef struct septentrio_gnss_driver__msg__ExtSensorMeas
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t n;
  uint8_t sb_length;
  /// ExtSensorMeasSet
  rosidl_runtime_c__uint8__Sequence source;
  rosidl_runtime_c__uint8__Sequence sensor_model;
  rosidl_runtime_c__uint8__Sequence type;
  rosidl_runtime_c__uint8__Sequence obs_info;
  /// ExtSensorMeasAcceleration
  ///  m/s^2
  double acceleration_x;
  /// m/s^2
  double acceleration_y;
  /// m/s^2
  double acceleration_z;
  /// ExtSensorMeasAngularRate
  ///  deg/s
  double angular_rate_x;
  /// deg/s
  double angular_rate_y;
  /// deg/s
  double angular_rate_z;
  /// ExtSensorMeasVelocity
  ///  m/s
  float velocity_x;
  /// m/s
  float velocity_y;
  /// m/s
  float velocity_z;
  /// m/s
  float std_dev_x;
  /// m/s
  float std_dev_y;
  /// m/s
  float std_dev_z;
  /// ExtSensorMeasInfo
  ///  deg C
  float sensor_temperature;
  /// ExtSensorMeasZeroVelocityFlag
  double zero_velocity_flag;
} septentrio_gnss_driver__msg__ExtSensorMeas;

// Struct for a sequence of septentrio_gnss_driver__msg__ExtSensorMeas.
typedef struct septentrio_gnss_driver__msg__ExtSensorMeas__Sequence
{
  septentrio_gnss_driver__msg__ExtSensorMeas * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__ExtSensorMeas__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_H_
