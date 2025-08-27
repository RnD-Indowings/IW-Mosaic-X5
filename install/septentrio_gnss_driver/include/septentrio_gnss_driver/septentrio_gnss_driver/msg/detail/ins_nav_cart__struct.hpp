// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/INSNavCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__INSNavCart __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__INSNavCart __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSNavCart_
{
  using Type = INSNavCart_<ContainerAllocator>;

  explicit INSNavCart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_mode = 0;
      this->error = 0;
      this->info = 0;
      this->gnss_age = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->accuracy = 0;
      this->latency = 0;
      this->datum = 0;
      this->sb_list = 0;
      this->x_std_dev = 0.0f;
      this->y_std_dev = 0.0f;
      this->z_std_dev = 0.0f;
      this->xy_cov = 0.0f;
      this->xz_cov = 0.0f;
      this->yz_cov = 0.0f;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->heading_std_dev = 0.0f;
      this->pitch_std_dev = 0.0f;
      this->roll_std_dev = 0.0f;
      this->heading_pitch_cov = 0.0f;
      this->heading_roll_cov = 0.0f;
      this->pitch_roll_cov = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->vx_std_dev = 0.0f;
      this->vy_std_dev = 0.0f;
      this->vz_std_dev = 0.0f;
      this->vx_vy_cov = 0.0f;
      this->vx_vz_cov = 0.0f;
      this->vy_vz_cov = 0.0f;
    }
  }

  explicit INSNavCart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_mode = 0;
      this->error = 0;
      this->info = 0;
      this->gnss_age = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->accuracy = 0;
      this->latency = 0;
      this->datum = 0;
      this->sb_list = 0;
      this->x_std_dev = 0.0f;
      this->y_std_dev = 0.0f;
      this->z_std_dev = 0.0f;
      this->xy_cov = 0.0f;
      this->xz_cov = 0.0f;
      this->yz_cov = 0.0f;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->heading_std_dev = 0.0f;
      this->pitch_std_dev = 0.0f;
      this->roll_std_dev = 0.0f;
      this->heading_pitch_cov = 0.0f;
      this->heading_roll_cov = 0.0f;
      this->pitch_roll_cov = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->vx_std_dev = 0.0f;
      this->vy_std_dev = 0.0f;
      this->vz_std_dev = 0.0f;
      this->vx_vy_cov = 0.0f;
      this->vx_vz_cov = 0.0f;
      this->vy_vz_cov = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _gnss_mode_type =
    uint8_t;
  _gnss_mode_type gnss_mode;
  using _error_type =
    uint8_t;
  _error_type error;
  using _info_type =
    uint16_t;
  _info_type info;
  using _gnss_age_type =
    uint16_t;
  _gnss_age_type gnss_age;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _accuracy_type =
    uint16_t;
  _accuracy_type accuracy;
  using _latency_type =
    uint16_t;
  _latency_type latency;
  using _datum_type =
    uint8_t;
  _datum_type datum;
  using _sb_list_type =
    uint16_t;
  _sb_list_type sb_list;
  using _x_std_dev_type =
    float;
  _x_std_dev_type x_std_dev;
  using _y_std_dev_type =
    float;
  _y_std_dev_type y_std_dev;
  using _z_std_dev_type =
    float;
  _z_std_dev_type z_std_dev;
  using _xy_cov_type =
    float;
  _xy_cov_type xy_cov;
  using _xz_cov_type =
    float;
  _xz_cov_type xz_cov;
  using _yz_cov_type =
    float;
  _yz_cov_type yz_cov;
  using _heading_type =
    float;
  _heading_type heading;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _heading_std_dev_type =
    float;
  _heading_std_dev_type heading_std_dev;
  using _pitch_std_dev_type =
    float;
  _pitch_std_dev_type pitch_std_dev;
  using _roll_std_dev_type =
    float;
  _roll_std_dev_type roll_std_dev;
  using _heading_pitch_cov_type =
    float;
  _heading_pitch_cov_type heading_pitch_cov;
  using _heading_roll_cov_type =
    float;
  _heading_roll_cov_type heading_roll_cov;
  using _pitch_roll_cov_type =
    float;
  _pitch_roll_cov_type pitch_roll_cov;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _vx_std_dev_type =
    float;
  _vx_std_dev_type vx_std_dev;
  using _vy_std_dev_type =
    float;
  _vy_std_dev_type vy_std_dev;
  using _vz_std_dev_type =
    float;
  _vz_std_dev_type vz_std_dev;
  using _vx_vy_cov_type =
    float;
  _vx_vy_cov_type vx_vy_cov;
  using _vx_vz_cov_type =
    float;
  _vx_vz_cov_type vx_vz_cov;
  using _vy_vz_cov_type =
    float;
  _vy_vz_cov_type vy_vz_cov;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__block_header(
    const septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> & _arg)
  {
    this->block_header = _arg;
    return *this;
  }
  Type & set__gnss_mode(
    const uint8_t & _arg)
  {
    this->gnss_mode = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__info(
    const uint16_t & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__gnss_age(
    const uint16_t & _arg)
  {
    this->gnss_age = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__accuracy(
    const uint16_t & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__latency(
    const uint16_t & _arg)
  {
    this->latency = _arg;
    return *this;
  }
  Type & set__datum(
    const uint8_t & _arg)
  {
    this->datum = _arg;
    return *this;
  }
  Type & set__sb_list(
    const uint16_t & _arg)
  {
    this->sb_list = _arg;
    return *this;
  }
  Type & set__x_std_dev(
    const float & _arg)
  {
    this->x_std_dev = _arg;
    return *this;
  }
  Type & set__y_std_dev(
    const float & _arg)
  {
    this->y_std_dev = _arg;
    return *this;
  }
  Type & set__z_std_dev(
    const float & _arg)
  {
    this->z_std_dev = _arg;
    return *this;
  }
  Type & set__xy_cov(
    const float & _arg)
  {
    this->xy_cov = _arg;
    return *this;
  }
  Type & set__xz_cov(
    const float & _arg)
  {
    this->xz_cov = _arg;
    return *this;
  }
  Type & set__yz_cov(
    const float & _arg)
  {
    this->yz_cov = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__heading_std_dev(
    const float & _arg)
  {
    this->heading_std_dev = _arg;
    return *this;
  }
  Type & set__pitch_std_dev(
    const float & _arg)
  {
    this->pitch_std_dev = _arg;
    return *this;
  }
  Type & set__roll_std_dev(
    const float & _arg)
  {
    this->roll_std_dev = _arg;
    return *this;
  }
  Type & set__heading_pitch_cov(
    const float & _arg)
  {
    this->heading_pitch_cov = _arg;
    return *this;
  }
  Type & set__heading_roll_cov(
    const float & _arg)
  {
    this->heading_roll_cov = _arg;
    return *this;
  }
  Type & set__pitch_roll_cov(
    const float & _arg)
  {
    this->pitch_roll_cov = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__vx_std_dev(
    const float & _arg)
  {
    this->vx_std_dev = _arg;
    return *this;
  }
  Type & set__vy_std_dev(
    const float & _arg)
  {
    this->vy_std_dev = _arg;
    return *this;
  }
  Type & set__vz_std_dev(
    const float & _arg)
  {
    this->vz_std_dev = _arg;
    return *this;
  }
  Type & set__vx_vy_cov(
    const float & _arg)
  {
    this->vx_vy_cov = _arg;
    return *this;
  }
  Type & set__vx_vz_cov(
    const float & _arg)
  {
    this->vx_vz_cov = _arg;
    return *this;
  }
  Type & set__vy_vz_cov(
    const float & _arg)
  {
    this->vy_vz_cov = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__INSNavCart
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__INSNavCart
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavCart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSNavCart_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->gnss_mode != other.gnss_mode) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->gnss_age != other.gnss_age) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->latency != other.latency) {
      return false;
    }
    if (this->datum != other.datum) {
      return false;
    }
    if (this->sb_list != other.sb_list) {
      return false;
    }
    if (this->x_std_dev != other.x_std_dev) {
      return false;
    }
    if (this->y_std_dev != other.y_std_dev) {
      return false;
    }
    if (this->z_std_dev != other.z_std_dev) {
      return false;
    }
    if (this->xy_cov != other.xy_cov) {
      return false;
    }
    if (this->xz_cov != other.xz_cov) {
      return false;
    }
    if (this->yz_cov != other.yz_cov) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->heading_std_dev != other.heading_std_dev) {
      return false;
    }
    if (this->pitch_std_dev != other.pitch_std_dev) {
      return false;
    }
    if (this->roll_std_dev != other.roll_std_dev) {
      return false;
    }
    if (this->heading_pitch_cov != other.heading_pitch_cov) {
      return false;
    }
    if (this->heading_roll_cov != other.heading_roll_cov) {
      return false;
    }
    if (this->pitch_roll_cov != other.pitch_roll_cov) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->vx_std_dev != other.vx_std_dev) {
      return false;
    }
    if (this->vy_std_dev != other.vy_std_dev) {
      return false;
    }
    if (this->vz_std_dev != other.vz_std_dev) {
      return false;
    }
    if (this->vx_vy_cov != other.vx_vy_cov) {
      return false;
    }
    if (this->vx_vz_cov != other.vx_vz_cov) {
      return false;
    }
    if (this->vy_vz_cov != other.vy_vz_cov) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSNavCart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSNavCart_

// alias to use template instance with default allocator
using INSNavCart =
  septentrio_gnss_driver::msg::INSNavCart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_HPP_
