// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/PosCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__PosCovGeodetic __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__PosCovGeodetic __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PosCovGeodetic_
{
  using Type = PosCovGeodetic_<ContainerAllocator>;

  explicit PosCovGeodetic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_latlat = 0.0f;
      this->cov_lonlon = 0.0f;
      this->cov_hgthgt = 0.0f;
      this->cov_bb = 0.0f;
      this->cov_latlon = 0.0f;
      this->cov_lathgt = 0.0f;
      this->cov_latb = 0.0f;
      this->cov_lonhgt = 0.0f;
      this->cov_lonb = 0.0f;
      this->cov_hb = 0.0f;
    }
  }

  explicit PosCovGeodetic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_latlat = 0.0f;
      this->cov_lonlon = 0.0f;
      this->cov_hgthgt = 0.0f;
      this->cov_bb = 0.0f;
      this->cov_latlon = 0.0f;
      this->cov_lathgt = 0.0f;
      this->cov_latb = 0.0f;
      this->cov_lonhgt = 0.0f;
      this->cov_lonb = 0.0f;
      this->cov_hb = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _error_type =
    uint8_t;
  _error_type error;
  using _cov_latlat_type =
    float;
  _cov_latlat_type cov_latlat;
  using _cov_lonlon_type =
    float;
  _cov_lonlon_type cov_lonlon;
  using _cov_hgthgt_type =
    float;
  _cov_hgthgt_type cov_hgthgt;
  using _cov_bb_type =
    float;
  _cov_bb_type cov_bb;
  using _cov_latlon_type =
    float;
  _cov_latlon_type cov_latlon;
  using _cov_lathgt_type =
    float;
  _cov_lathgt_type cov_lathgt;
  using _cov_latb_type =
    float;
  _cov_latb_type cov_latb;
  using _cov_lonhgt_type =
    float;
  _cov_lonhgt_type cov_lonhgt;
  using _cov_lonb_type =
    float;
  _cov_lonb_type cov_lonb;
  using _cov_hb_type =
    float;
  _cov_hb_type cov_hb;

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
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__cov_latlat(
    const float & _arg)
  {
    this->cov_latlat = _arg;
    return *this;
  }
  Type & set__cov_lonlon(
    const float & _arg)
  {
    this->cov_lonlon = _arg;
    return *this;
  }
  Type & set__cov_hgthgt(
    const float & _arg)
  {
    this->cov_hgthgt = _arg;
    return *this;
  }
  Type & set__cov_bb(
    const float & _arg)
  {
    this->cov_bb = _arg;
    return *this;
  }
  Type & set__cov_latlon(
    const float & _arg)
  {
    this->cov_latlon = _arg;
    return *this;
  }
  Type & set__cov_lathgt(
    const float & _arg)
  {
    this->cov_lathgt = _arg;
    return *this;
  }
  Type & set__cov_latb(
    const float & _arg)
  {
    this->cov_latb = _arg;
    return *this;
  }
  Type & set__cov_lonhgt(
    const float & _arg)
  {
    this->cov_lonhgt = _arg;
    return *this;
  }
  Type & set__cov_lonb(
    const float & _arg)
  {
    this->cov_lonb = _arg;
    return *this;
  }
  Type & set__cov_hb(
    const float & _arg)
  {
    this->cov_hb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__PosCovGeodetic
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__PosCovGeodetic
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovGeodetic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosCovGeodetic_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->cov_latlat != other.cov_latlat) {
      return false;
    }
    if (this->cov_lonlon != other.cov_lonlon) {
      return false;
    }
    if (this->cov_hgthgt != other.cov_hgthgt) {
      return false;
    }
    if (this->cov_bb != other.cov_bb) {
      return false;
    }
    if (this->cov_latlon != other.cov_latlon) {
      return false;
    }
    if (this->cov_lathgt != other.cov_lathgt) {
      return false;
    }
    if (this->cov_latb != other.cov_latb) {
      return false;
    }
    if (this->cov_lonhgt != other.cov_lonhgt) {
      return false;
    }
    if (this->cov_lonb != other.cov_lonb) {
      return false;
    }
    if (this->cov_hb != other.cov_hb) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosCovGeodetic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosCovGeodetic_

// alias to use template instance with default allocator
using PosCovGeodetic =
  septentrio_gnss_driver::msg::PosCovGeodetic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__STRUCT_HPP_
