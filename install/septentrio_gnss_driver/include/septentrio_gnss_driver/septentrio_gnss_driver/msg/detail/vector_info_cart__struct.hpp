// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/VectorInfoCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__VectorInfoCart __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__VectorInfoCart __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VectorInfoCart_
{
  using Type = VectorInfoCart_<ContainerAllocator>;

  explicit VectorInfoCart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_sv = 0;
      this->error = 0;
      this->mode = 0;
      this->misc = 0;
      this->delta_x = 0.0;
      this->delta_y = 0.0;
      this->delta_z = 0.0;
      this->delta_vx = 0.0f;
      this->delta_vy = 0.0f;
      this->delta_vz = 0.0f;
      this->azimuth = 0;
      this->elevation = 0;
      this->reference_id = 0;
      this->corr_age = 0;
      this->signal_info = 0ul;
    }
  }

  explicit VectorInfoCart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_sv = 0;
      this->error = 0;
      this->mode = 0;
      this->misc = 0;
      this->delta_x = 0.0;
      this->delta_y = 0.0;
      this->delta_z = 0.0;
      this->delta_vx = 0.0f;
      this->delta_vy = 0.0f;
      this->delta_vz = 0.0f;
      this->azimuth = 0;
      this->elevation = 0;
      this->reference_id = 0;
      this->corr_age = 0;
      this->signal_info = 0ul;
    }
  }

  // field types and members
  using _nr_sv_type =
    uint8_t;
  _nr_sv_type nr_sv;
  using _error_type =
    uint8_t;
  _error_type error;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _misc_type =
    uint8_t;
  _misc_type misc;
  using _delta_x_type =
    double;
  _delta_x_type delta_x;
  using _delta_y_type =
    double;
  _delta_y_type delta_y;
  using _delta_z_type =
    double;
  _delta_z_type delta_z;
  using _delta_vx_type =
    float;
  _delta_vx_type delta_vx;
  using _delta_vy_type =
    float;
  _delta_vy_type delta_vy;
  using _delta_vz_type =
    float;
  _delta_vz_type delta_vz;
  using _azimuth_type =
    uint16_t;
  _azimuth_type azimuth;
  using _elevation_type =
    int16_t;
  _elevation_type elevation;
  using _reference_id_type =
    uint16_t;
  _reference_id_type reference_id;
  using _corr_age_type =
    uint16_t;
  _corr_age_type corr_age;
  using _signal_info_type =
    uint32_t;
  _signal_info_type signal_info;

  // setters for named parameter idiom
  Type & set__nr_sv(
    const uint8_t & _arg)
  {
    this->nr_sv = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__misc(
    const uint8_t & _arg)
  {
    this->misc = _arg;
    return *this;
  }
  Type & set__delta_x(
    const double & _arg)
  {
    this->delta_x = _arg;
    return *this;
  }
  Type & set__delta_y(
    const double & _arg)
  {
    this->delta_y = _arg;
    return *this;
  }
  Type & set__delta_z(
    const double & _arg)
  {
    this->delta_z = _arg;
    return *this;
  }
  Type & set__delta_vx(
    const float & _arg)
  {
    this->delta_vx = _arg;
    return *this;
  }
  Type & set__delta_vy(
    const float & _arg)
  {
    this->delta_vy = _arg;
    return *this;
  }
  Type & set__delta_vz(
    const float & _arg)
  {
    this->delta_vz = _arg;
    return *this;
  }
  Type & set__azimuth(
    const uint16_t & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__elevation(
    const int16_t & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__reference_id(
    const uint16_t & _arg)
  {
    this->reference_id = _arg;
    return *this;
  }
  Type & set__corr_age(
    const uint16_t & _arg)
  {
    this->corr_age = _arg;
    return *this;
  }
  Type & set__signal_info(
    const uint32_t & _arg)
  {
    this->signal_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__VectorInfoCart
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__VectorInfoCart
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoCart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VectorInfoCart_ & other) const
  {
    if (this->nr_sv != other.nr_sv) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->misc != other.misc) {
      return false;
    }
    if (this->delta_x != other.delta_x) {
      return false;
    }
    if (this->delta_y != other.delta_y) {
      return false;
    }
    if (this->delta_z != other.delta_z) {
      return false;
    }
    if (this->delta_vx != other.delta_vx) {
      return false;
    }
    if (this->delta_vy != other.delta_vy) {
      return false;
    }
    if (this->delta_vz != other.delta_vz) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->reference_id != other.reference_id) {
      return false;
    }
    if (this->corr_age != other.corr_age) {
      return false;
    }
    if (this->signal_info != other.signal_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const VectorInfoCart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VectorInfoCart_

// alias to use template instance with default allocator
using VectorInfoCart =
  septentrio_gnss_driver::msg::VectorInfoCart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__STRUCT_HPP_
