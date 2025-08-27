// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__VelCovGeodetic __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__VelCovGeodetic __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelCovGeodetic_
{
  using Type = VelCovGeodetic_<ContainerAllocator>;

  explicit VelCovGeodetic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_vnvn = 0.0f;
      this->cov_veve = 0.0f;
      this->cov_vuvu = 0.0f;
      this->cov_dtdt = 0.0f;
      this->cov_vnve = 0.0f;
      this->cov_vnvu = 0.0f;
      this->cov_vndt = 0.0f;
      this->cov_vevu = 0.0f;
      this->cov_vedt = 0.0f;
      this->cov_vudt = 0.0f;
    }
  }

  explicit VelCovGeodetic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->cov_vnvn = 0.0f;
      this->cov_veve = 0.0f;
      this->cov_vuvu = 0.0f;
      this->cov_dtdt = 0.0f;
      this->cov_vnve = 0.0f;
      this->cov_vnvu = 0.0f;
      this->cov_vndt = 0.0f;
      this->cov_vevu = 0.0f;
      this->cov_vedt = 0.0f;
      this->cov_vudt = 0.0f;
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
  using _cov_vnvn_type =
    float;
  _cov_vnvn_type cov_vnvn;
  using _cov_veve_type =
    float;
  _cov_veve_type cov_veve;
  using _cov_vuvu_type =
    float;
  _cov_vuvu_type cov_vuvu;
  using _cov_dtdt_type =
    float;
  _cov_dtdt_type cov_dtdt;
  using _cov_vnve_type =
    float;
  _cov_vnve_type cov_vnve;
  using _cov_vnvu_type =
    float;
  _cov_vnvu_type cov_vnvu;
  using _cov_vndt_type =
    float;
  _cov_vndt_type cov_vndt;
  using _cov_vevu_type =
    float;
  _cov_vevu_type cov_vevu;
  using _cov_vedt_type =
    float;
  _cov_vedt_type cov_vedt;
  using _cov_vudt_type =
    float;
  _cov_vudt_type cov_vudt;

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
  Type & set__cov_vnvn(
    const float & _arg)
  {
    this->cov_vnvn = _arg;
    return *this;
  }
  Type & set__cov_veve(
    const float & _arg)
  {
    this->cov_veve = _arg;
    return *this;
  }
  Type & set__cov_vuvu(
    const float & _arg)
  {
    this->cov_vuvu = _arg;
    return *this;
  }
  Type & set__cov_dtdt(
    const float & _arg)
  {
    this->cov_dtdt = _arg;
    return *this;
  }
  Type & set__cov_vnve(
    const float & _arg)
  {
    this->cov_vnve = _arg;
    return *this;
  }
  Type & set__cov_vnvu(
    const float & _arg)
  {
    this->cov_vnvu = _arg;
    return *this;
  }
  Type & set__cov_vndt(
    const float & _arg)
  {
    this->cov_vndt = _arg;
    return *this;
  }
  Type & set__cov_vevu(
    const float & _arg)
  {
    this->cov_vevu = _arg;
    return *this;
  }
  Type & set__cov_vedt(
    const float & _arg)
  {
    this->cov_vedt = _arg;
    return *this;
  }
  Type & set__cov_vudt(
    const float & _arg)
  {
    this->cov_vudt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__VelCovGeodetic
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__VelCovGeodetic
    std::shared_ptr<septentrio_gnss_driver::msg::VelCovGeodetic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelCovGeodetic_ & other) const
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
    if (this->cov_vnvn != other.cov_vnvn) {
      return false;
    }
    if (this->cov_veve != other.cov_veve) {
      return false;
    }
    if (this->cov_vuvu != other.cov_vuvu) {
      return false;
    }
    if (this->cov_dtdt != other.cov_dtdt) {
      return false;
    }
    if (this->cov_vnve != other.cov_vnve) {
      return false;
    }
    if (this->cov_vnvu != other.cov_vnvu) {
      return false;
    }
    if (this->cov_vndt != other.cov_vndt) {
      return false;
    }
    if (this->cov_vevu != other.cov_vevu) {
      return false;
    }
    if (this->cov_vedt != other.cov_vedt) {
      return false;
    }
    if (this->cov_vudt != other.cov_vudt) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelCovGeodetic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelCovGeodetic_

// alias to use template instance with default allocator
using VelCovGeodetic =
  septentrio_gnss_driver::msg::VelCovGeodetic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_HPP_
