// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/INSNavGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_H_

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

/// Struct defined in msg/INSNavGeod in the package septentrio_gnss_driver.
/**
  * INSNavGeod block 
  * Block_Number 4226
 */
typedef struct septentrio_gnss_driver__msg__INSNavGeod
{
  std_msgs__msg__Header header;
  /// SBF block header including time header
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t gnss_mode;
  uint8_t error;
  uint16_t info;
  /// 0.01 s
  uint16_t gnss_age;
  /// rad
  double latitude;
  /// rad
  double longitude;
  /// m (ellipsoidal)
  double height;
  /// m
  float undulation;
  /// 0.01 m
  uint16_t accuracy;
  /// 0.0001 s
  uint16_t latency;
  uint8_t datum;
  /// uint8       reserved
  uint16_t sb_list;
  /// INSNavGeodPosStdDev sub-block definition:
  /// If the Position StdDev field is 1 then this sub block is available:
  /// m
  float latitude_std_dev;
  /// m
  float longitude_std_dev;
  /// m
  float height_std_dev;
  /// INSNavGeodPosCov sub-block definition:
  /// If the Position Cov field is 1 then this sub block is available:
  /// m^2
  float latitude_longitude_cov;
  /// m^2
  float latitude_height_cov;
  /// m^2
  float longitude_height_cov;
  /// INSNavGeodAtt sub-block definition:
  /// If the Attitude field is 1 then this sub block is available:
  /// deg
  float heading;
  /// deg
  float pitch;
  /// deg
  float roll;
  /// INSNavGeodAttStdDev sub-block definition:
  /// If the Attitude StdDev field is 1 then this sub block is available:
  /// deg
  float heading_std_dev;
  /// deg
  float pitch_std_dev;
  /// deg
  float roll_std_dev;
  /// INSNavGeodAttCov sub-block definition:
  /// If the Attitude Cov field is 1 then this sub block is available:
  /// deg^2
  float heading_pitch_cov;
  /// deg^2
  float heading_roll_cov;
  /// deg^2
  float pitch_roll_cov;
  /// INSNavGeodVel sub-block definition:
  /// If the Velocity field is 1 then this sub block is available:
  /// m/s
  float ve;
  /// m/s
  float vn;
  /// m/s
  float vu;
  /// INSNavGeodVelStdDev sub-block definition:
  /// If the Velocity StdDev field is 1 then this sub block is available:
  /// m/s
  float ve_std_dev;
  /// m/s
  float vn_std_dev;
  /// m/s
  float vu_std_dev;
  /// INSNavGeodVelCov sub-block definition:
  /// If the Velocity Cov field is 1 then this sub block is available:
  /// m^2/s^2
  float ve_vn_cov;
  /// m^2/s^2
  float ve_vu_cov;
  /// m^2/s^2
  float vn_vu_cov;
} septentrio_gnss_driver__msg__INSNavGeod;

// Struct for a sequence of septentrio_gnss_driver__msg__INSNavGeod.
typedef struct septentrio_gnss_driver__msg__INSNavGeod__Sequence
{
  septentrio_gnss_driver__msg__INSNavGeod * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__INSNavGeod__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_H_
