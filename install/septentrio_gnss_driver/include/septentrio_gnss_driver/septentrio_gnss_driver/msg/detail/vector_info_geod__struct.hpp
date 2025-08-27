// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/VectorInfoGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__VectorInfoGeod __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__VectorInfoGeod __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VectorInfoGeod_
{
  using Type = VectorInfoGeod_<ContainerAllocator>;

  explicit VectorInfoGeod_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_sv = 0;
      this->error = 0;
      this->mode = 0;
      this->misc = 0;
      this->delta_east = 0.0;
      this->delta_north = 0.0;
      this->delta_up = 0.0;
      this->delta_ve = 0.0f;
      this->delta_vn = 0.0f;
      this->delta_vu = 0.0f;
      this->azimuth = 0;
      this->elevation = 0;
      this->reference_id = 0;
      this->corr_age = 0;
      this->signal_info = 0ul;
    }
  }

  explicit VectorInfoGeod_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_sv = 0;
      this->error = 0;
      this->mode = 0;
      this->misc = 0;
      this->delta_east = 0.0;
      this->delta_north = 0.0;
      this->delta_up = 0.0;
      this->delta_ve = 0.0f;
      this->delta_vn = 0.0f;
      this->delta_vu = 0.0f;
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
  using _delta_east_type =
    double;
  _delta_east_type delta_east;
  using _delta_north_type =
    double;
  _delta_north_type delta_north;
  using _delta_up_type =
    double;
  _delta_up_type delta_up;
  using _delta_ve_type =
    float;
  _delta_ve_type delta_ve;
  using _delta_vn_type =
    float;
  _delta_vn_type delta_vn;
  using _delta_vu_type =
    float;
  _delta_vu_type delta_vu;
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
  Type & set__delta_east(
    const double & _arg)
  {
    this->delta_east = _arg;
    return *this;
  }
  Type & set__delta_north(
    const double & _arg)
  {
    this->delta_north = _arg;
    return *this;
  }
  Type & set__delta_up(
    const double & _arg)
  {
    this->delta_up = _arg;
    return *this;
  }
  Type & set__delta_ve(
    const float & _arg)
  {
    this->delta_ve = _arg;
    return *this;
  }
  Type & set__delta_vn(
    const float & _arg)
  {
    this->delta_vn = _arg;
    return *this;
  }
  Type & set__delta_vu(
    const float & _arg)
  {
    this->delta_vu = _arg;
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
    septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__VectorInfoGeod
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__VectorInfoGeod
    std::shared_ptr<septentrio_gnss_driver::msg::VectorInfoGeod_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VectorInfoGeod_ & other) const
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
    if (this->delta_east != other.delta_east) {
      return false;
    }
    if (this->delta_north != other.delta_north) {
      return false;
    }
    if (this->delta_up != other.delta_up) {
      return false;
    }
    if (this->delta_ve != other.delta_ve) {
      return false;
    }
    if (this->delta_vn != other.delta_vn) {
      return false;
    }
    if (this->delta_vu != other.delta_vu) {
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
  bool operator!=(const VectorInfoGeod_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VectorInfoGeod_

// alias to use template instance with default allocator
using VectorInfoGeod =
  septentrio_gnss_driver::msg::VectorInfoGeod_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__STRUCT_HPP_
