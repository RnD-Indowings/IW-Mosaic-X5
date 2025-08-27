// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/RFBand.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RFBand in the package septentrio_gnss_driver.
/**
  * RFband block
 */
typedef struct septentrio_gnss_driver__msg__RFBand
{
  /// Hz
  uint32_t frequency;
  /// kHz
  uint16_t bandwidth;
  uint8_t info;
} septentrio_gnss_driver__msg__RFBand;

// Struct for a sequence of septentrio_gnss_driver__msg__RFBand.
typedef struct septentrio_gnss_driver__msg__RFBand__Sequence
{
  septentrio_gnss_driver__msg__RFBand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__RFBand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__STRUCT_H_
