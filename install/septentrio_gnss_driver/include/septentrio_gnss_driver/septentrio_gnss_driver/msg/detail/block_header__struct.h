// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/BlockHeader.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BlockHeader in the package septentrio_gnss_driver.
/**
  * Blockheader including time header for all ROS messages that publish SBF blocks
  * This is the ROS 2 version of the message. The ROS 1 version is at
  * msg/BlockHeader.msg .
 */
typedef struct septentrio_gnss_driver__msg__BlockHeader
{
  /// 0x24
  uint8_t sync_1;
  /// 0x40
  uint8_t sync_2;
  uint16_t crc;
  uint16_t id;
  uint8_t revision;
  uint16_t length;
  /// ms since week start
  uint32_t tow;
  /// weeks since Jan 06, 1980 at 00:00:00 UTC
  uint16_t wnc;
} septentrio_gnss_driver__msg__BlockHeader;

// Struct for a sequence of septentrio_gnss_driver__msg__BlockHeader.
typedef struct septentrio_gnss_driver__msg__BlockHeader__Sequence
{
  septentrio_gnss_driver__msg__BlockHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__BlockHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_H_
