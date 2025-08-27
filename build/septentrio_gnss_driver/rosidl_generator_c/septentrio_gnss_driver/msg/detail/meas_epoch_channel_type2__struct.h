// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MeasEpochChannelType2 in the package septentrio_gnss_driver.
/**
  * MeasEpochChannelType2 block
 */
typedef struct septentrio_gnss_driver__msg__MeasEpochChannelType2
{
  uint8_t type;
  /// s
  uint8_t lock_time;
  /// 0.25 dB-Hz
  uint8_t cn0;
  /// 65.536 m or 65.536 Hz
  uint8_t offsets_msb;
  /// 65.536 cycles
  int8_t carrier_msb;
  uint8_t obs_info;
  /// 0.001 m
  uint16_t code_offset_lsb;
  /// 0.001 cycles
  uint16_t carrier_lsb;
  /// 0.0001 Hz
  uint16_t doppler_offset_lsb;
} septentrio_gnss_driver__msg__MeasEpochChannelType2;

// Struct for a sequence of septentrio_gnss_driver__msg__MeasEpochChannelType2.
typedef struct septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence
{
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__STRUCT_H_
