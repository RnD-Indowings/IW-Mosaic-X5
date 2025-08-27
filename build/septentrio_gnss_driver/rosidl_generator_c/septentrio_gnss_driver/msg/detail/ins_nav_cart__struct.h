// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/INSNavCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_H_

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

/// Struct defined in msg/INSNavCart in the package septentrio_gnss_driver.
/**
  * INSNavCart block 
  * Block_Number 4225
 */
typedef struct septentrio_gnss_driver__msg__INSNavCart
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t gnss_mode;
  uint8_t error;
  uint16_t info;
  /// 0.01 s
  uint16_t gnss_age;
  /// m
  double x;
  /// m
  double y;
  /// m
  double z;
  /// 0.01 m
  uint16_t accuracy;
  /// 0.1 ms
  uint16_t latency;
  uint8_t datum;
  /// uint8       reserved
  uint16_t sb_list;
  /// INSNavCartPosStdDev sub-block definition:
  /// If the Position StdDev field is 1 then this sub block is available:
  /// m
  float x_std_dev;
  /// m
  float y_std_dev;
  /// m
  float z_std_dev;
  /// INSNavCartPosCov sub-block definition:
  /// If the Position Cov field is 1 then this sub block is available:
  /// m^2
  float xy_cov;
  /// m^2
  float xz_cov;
  /// m^2
  float yz_cov;
  /// INSNavCartAtt sub-block definition:
  /// If the Attitude field is 1 then this sub block is available:
  /// deg
  float heading;
  /// deg
  float pitch;
  /// deg
  float roll;
  /// INSNavCartAttStdDev sub-block definition:
  /// If the Attitude StdDev field is 1 then this sub block is available:
  /// deg
  float heading_std_dev;
  /// deg
  float pitch_std_dev;
  /// deg
  float roll_std_dev;
  /// INSNavCartAttCov sub-block definition:
  /// If the Attitude Cov field is 1 then this sub block is available:
  /// deg^2
  float heading_pitch_cov;
  /// deg^2
  float heading_roll_cov;
  /// deg^2
  float pitch_roll_cov;
  /// INSNavCartVel sub-block definition:
  /// If the Velocity field is 1 then this sub block is available:
  /// m/s
  float vx;
  /// m/S
  float vy;
  /// m/s
  float vz;
  /// INSNavCartVelStdDev sub-block definition:
  /// If the Velocity StdDev field is 1 then this sub block is available:
  /// m/s
  float vx_std_dev;
  /// m/s
  float vy_std_dev;
  /// m/s
  float vz_std_dev;
  /// INSNavCartVelCov sub-block definition:
  /// If the Velocity Cov field is 1 then this sub block is available:
  /// m^2/s^2
  float vx_vy_cov;
  /// m^2/s^2
  float vx_vz_cov;
  /// m^2/s^2
  float vy_vz_cov;
} septentrio_gnss_driver__msg__INSNavCart;

// Struct for a sequence of septentrio_gnss_driver__msg__INSNavCart.
typedef struct septentrio_gnss_driver__msg__INSNavCart__Sequence
{
  septentrio_gnss_driver__msg__INSNavCart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__INSNavCart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_H_
