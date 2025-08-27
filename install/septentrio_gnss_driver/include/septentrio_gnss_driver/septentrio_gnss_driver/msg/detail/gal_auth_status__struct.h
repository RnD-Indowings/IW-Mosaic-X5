// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/GALAuthStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__STRUCT_H_

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

/// Struct defined in msg/GALAuthStatus in the package septentrio_gnss_driver.
/**
  * GALAuthStatus block 
  * Block_Number 4245
 */
typedef struct septentrio_gnss_driver__msg__GALAuthStatus
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint16_t osnma_status;
  /// s
  float trusted_time_delta;
  uint64_t gal_active_mask;
  uint64_t gal_authentic_mask;
  uint64_t gps_active_mask;
  uint64_t gps_authentic_mask;
} septentrio_gnss_driver__msg__GALAuthStatus;

// Struct for a sequence of septentrio_gnss_driver__msg__GALAuthStatus.
typedef struct septentrio_gnss_driver__msg__GALAuthStatus__Sequence
{
  septentrio_gnss_driver__msg__GALAuthStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__GALAuthStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__STRUCT_H_
