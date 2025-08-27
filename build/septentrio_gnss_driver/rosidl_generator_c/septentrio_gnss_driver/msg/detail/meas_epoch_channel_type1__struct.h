// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type2'
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.h"

/// Struct defined in msg/MeasEpochChannelType1 in the package septentrio_gnss_driver.
/**
  * MeasEpochChannelType1 block
 */
typedef struct septentrio_gnss_driver__msg__MeasEpochChannelType1
{
  uint8_t rx_channel;
  uint8_t type;
  uint8_t sv_id;
  /// 4294967.296 m
  uint8_t misc;
  /// 0.001 m
  uint32_t code_lsb;
  /// 0.0001 Hz
  int32_t doppler;
  /// 0.001 cycles
  uint16_t carrier_lsb;
  /// 65.536 cycles
  int8_t carrier_msb;
  /// 0.25 dB-Hz
  uint8_t cn0;
  uint16_t lock_time;
  uint8_t obs_info;
  uint8_t n2;
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence type2;
} septentrio_gnss_driver__msg__MeasEpochChannelType1;

// Struct for a sequence of septentrio_gnss_driver__msg__MeasEpochChannelType1.
typedef struct septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence
{
  septentrio_gnss_driver__msg__MeasEpochChannelType1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__STRUCT_H_
