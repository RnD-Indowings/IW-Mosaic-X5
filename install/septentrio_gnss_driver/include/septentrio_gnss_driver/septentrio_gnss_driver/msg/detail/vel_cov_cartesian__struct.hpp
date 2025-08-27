// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__VelCovCartesian __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__VelCovCartesian __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelCovCartesian_
{
  using Type = VelCovCartesian_<ContainerAllocator>;

  explicit VelCovCartesian_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_vxvx = 0.0f;
      this->cov_vyvy = 0.0f;
      this->cov_vzvz = 0.0f;
      this->cov_dtdt = 0.0f;
      this->cov_vxvy = 0.0f;
      this->cov_vxvz = 0.0f;
      this->cov_vxdt = 0.0f;
      this->cov_vyvz = 0.0f;
      this->cov_vydt = 0.0f;
      this->cov_vzdt = 0.0f;
    }
  }

  explicit VelCovCartesian_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_vxvx = 0.0f;
      this->cov_vyvy = 0.0f;
      this->cov_vzvz = 0.0f;
      this->cov_dtdt = 0.0f;
      this->cov_vxvy = 0.0f;
      this->cov_vxvz = 0.0f;
      this->cov_vxdt = 0.0f;
      this->cov_vyvz = 0.0f;
      this->cov_vydt = 0.0f;
      this->cov_vzdt = 0.0f;
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
  using _cov_vxvx_type =
    float;
  _cov_vxvx_type cov_vxvx;
  using _cov_vyvy_type =
    float;
  _cov_vyvy_type cov_vyvy;
  using _cov_vzvz_type =
    float;
  _cov_vzvz_type cov_vzvz;
  using _cov_dtdt_type =
    float;
  _cov_dtdt_type cov_dtdt;
  using _cov_vxvy_type =
    float;
  _cov_vxvy_type cov_vxvy;
  using _cov_vxvz_type =
    float;
  _cov_vxvz_type cov_vxvz;
  using _cov_vxdt_type =
    float;
  _cov_vxdt_type cov_vxdt;
  using _cov_vyvz_type =
    float;
  _cov_vyvz_type cov_vyvz;
  using _cov_vydt_type =
    float;
  _cov_vydt_type cov_vydt;
  using _cov_vzdt_type =
    float;
  _cov_vzdt_type cov_vzdt;

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
  Type & set__cov_vxvx(
    const float & _arg)
  {
    this->cov_vxvx = _arg;
    return *this;
  }
  Type & set__cov_vyvy(
    const float & _arg)
  {
    this->cov_vyvy = _arg;
    return *this;
  }
  Type & set__cov_vzvz(
    const float & _arg)
  {
    this->cov_vzvz = _arg;
    return *this;
  }
  Type & set__cov_dtdt(
    const float & _arg)
  {
    this->cov_dtdt = _arg;
    return *this;
  }
  Type & set__cov_vxvy(
    const float & _arg)
  {
    this->cov_vxvy = _arg;
    return *this;
  }
  Type & set__cov_vxvz(
    const float & _arg)
  {
    this->cov_vxvz = _arg;
    return *this;
  }
  Type & set__cov_vxdt(
    const float & _arg)
  {
    this->cov_vxdt = _arg;
    return *this;
  }
  Type & set__cov_vyvz(
    const float & _arg)
  {
    this->cov_vyvz = _arg;
    return *this;
  }
  Type & set__cov_vydt(
    const float & _arg)
  {
    this->cov_vydt = _arg;
    return *this;
  }
  Type & set__cov_vzdt(
    const float & _arg)
  {
    this->cov_vzdt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__VelCovCartesian
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__VelCovCartesian
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovCartesian_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelCovCartesian_ & other) const
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
    if (this->cov_vxvx != other.cov_vxvx) {
      return false;
    }
    if (this->cov_vyvy != other.cov_vyvy) {
      return false;
    }
    if (this->cov_vzvz != other.cov_vzvz) {
      return false;
    }
    if (this->cov_dtdt != other.cov_dtdt) {
      return false;
    }
    if (this->cov_vxvy != other.cov_vxvy) {
      return false;
    }
    if (this->cov_vxvz != other.cov_vxvz) {
      return false;
    }
    if (this->cov_vxdt != other.cov_vxdt) {
      return false;
    }
    if (this->cov_vyvz != other.cov_vyvz) {
      return false;
    }
    if (this->cov_vydt != other.cov_vydt) {
      return false;
    }
    if (this->cov_vzdt != other.cov_vzdt) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelCovCartesian_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelCovCartesian_

// alias to use template instance with default allocator
using VelCovCartesian =
  septentrio_gnss_driver::msg::VelCovCartesian_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__STRUCT_HPP_
