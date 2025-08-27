// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/VectorInfoCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VectorInfoCart in the package septentrio_gnss_driver.
/**
  * VectorInfoCart block
 */
typedef struct septentrio_gnss_driver__msg__VectorInfoCart
{
  uint8_t nr_sv;
  uint8_t error;
  uint8_t mode;
  uint8_t misc;
  /// m
  double delta_x;
  /// m
  double delta_y;
  /// m
  double delta_z;
  /// m
  float delta_vx;
  /// m
  float delta_vy;
  /// m
  float delta_vz;
  /// 0.01 deg
  uint16_t azimuth;
  /// 0.01 deg
  int16_t elevation;
  uint16_t reference_id;
  /// 0.01 s
  uint16_t corr_age;
  uint32_t signal_info;
} septentrio_gnss_driver__msg__VectorInfoCart;

// Struct for a sequence of septentrio_gnss_driver__msg__VectorInfoCart.
typedef struct septentrio_gnss_driver__msg__VectorInfoCart__Sequence
{
  septentrio_gnss_driver__msg__VectorInfoCart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__VectorInfoCart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__STRUCT_H_
