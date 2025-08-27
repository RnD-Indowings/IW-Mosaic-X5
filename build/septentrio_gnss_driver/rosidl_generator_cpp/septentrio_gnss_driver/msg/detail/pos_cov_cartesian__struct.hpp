// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__PosCovCartesian __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__PosCovCartesian __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PosCovCartesian_
{
  using Type = PosCovCartesian_<ContainerAllocator>;

  explicit PosCovCartesian_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_xx = 0.0f;
      this->cov_yy = 0.0f;
      this->cov_zz = 0.0f;
      this->cov_bb = 0.0f;
      this->cov_xy = 0.0f;
      this->cov_xz = 0.0f;
      this->cov_xb = 0.0f;
      this->cov_yz = 0.0f;
      this->cov_yb = 0.0f;
      this->cov_zb = 0.0f;
    }
  }

  explicit PosCovCartesian_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_xx = 0.0f;
      this->cov_yy = 0.0f;
      this->cov_zz = 0.0f;
      this->cov_bb = 0.0f;
      this->cov_xy = 0.0f;
      this->cov_xz = 0.0f;
      this->cov_xb = 0.0f;
      this->cov_yz = 0.0f;
      this->cov_yb = 0.0f;
      this->cov_zb = 0.0f;
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
  using _cov_xx_type =
    float;
  _cov_xx_type cov_xx;
  using _cov_yy_type =
    float;
  _cov_yy_type cov_yy;
  using _cov_zz_type =
    float;
  _cov_zz_type cov_zz;
  using _cov_bb_type =
    float;
  _cov_bb_type cov_bb;
  using _cov_xy_type =
    float;
  _cov_xy_type cov_xy;
  using _cov_xz_type =
    float;
  _cov_xz_type cov_xz;
  using _cov_xb_type =
    float;
  _cov_xb_type cov_xb;
  using _cov_yz_type =
    float;
  _cov_yz_type cov_yz;
  using _cov_yb_type =
    float;
  _cov_yb_type cov_yb;
  using _cov_zb_type =
    float;
  _cov_zb_type cov_zb;

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
  Type & set__cov_xx(
    const float & _arg)
  {
    this->cov_xx = _arg;
    return *this;
  }
  Type & set__cov_yy(
    const float & _arg)
  {
    this->cov_yy = _arg;
    return *this;
  }
  Type & set__cov_zz(
    const float & _arg)
  {
    this->cov_zz = _arg;
    return *this;
  }
  Type & set__cov_bb(
    const float & _arg)
  {
    this->cov_bb = _arg;
    return *this;
  }
  Type & set__cov_xy(
    const float & _arg)
  {
    this->cov_xy = _arg;
    return *this;
  }
  Type & set__cov_xz(
    const float & _arg)
  {
    this->cov_xz = _arg;
    return *this;
  }
  Type & set__cov_xb(
    const float & _arg)
  {
    this->cov_xb = _arg;
    return *this;
  }
  Type & set__cov_yz(
    const float & _arg)
  {
    this->cov_yz = _arg;
    return *this;
  }
  Type & set__cov_yb(
    const float & _arg)
  {
    this->cov_yb = _arg;
    return *this;
  }
  Type & set__cov_zb(
    const float & _arg)
  {
    this->cov_zb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__PosCovCartesian
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__PosCovCartesian
    std::shared_ptr<septentrio_gnss_driver::msg::PosCovCartesian_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosCovCartesian_ & other) const
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
    if (this->cov_xx != other.cov_xx) {
      return false;
    }
    if (this->cov_yy != other.cov_yy) {
      return false;
    }
    if (this->cov_zz != other.cov_zz) {
      return false;
    }
    if (this->cov_bb != other.cov_bb) {
      return false;
    }
    if (this->cov_xy != other.cov_xy) {
      return false;
    }
    if (this->cov_xz != other.cov_xz) {
      return false;
    }
    if (this->cov_xb != other.cov_xb) {
      return false;
    }
    if (this->cov_yz != other.cov_yz) {
      return false;
    }
    if (this->cov_yb != other.cov_yb) {
      return false;
    }
    if (this->cov_zb != other.cov_zb) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosCovCartesian_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosCovCartesian_

// alias to use template instance with default allocator
using PosCovCartesian =
  septentrio_gnss_driver::msg::PosCovCartesian_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__STRUCT_HPP_
