// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/GALAuthStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__GALAuthStatus __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__GALAuthStatus __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GALAuthStatus_
{
  using Type = GALAuthStatus_<ContainerAllocator>;

  explicit GALAuthStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->osnma_status = 0;
      this->trusted_time_delta = 0.0f;
      this->gal_active_mask = 0ull;
      this->gal_authentic_mask = 0ull;
      this->gps_active_mask = 0ull;
      this->gps_authentic_mask = 0ull;
    }
  }

  explicit GALAuthStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->osnma_status = 0;
      this->trusted_time_delta = 0.0f;
      this->gal_active_mask = 0ull;
      this->gal_authentic_mask = 0ull;
      this->gps_active_mask = 0ull;
      this->gps_authentic_mask = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _osnma_status_type =
    uint16_t;
  _osnma_status_type osnma_status;
  using _trusted_time_delta_type =
    float;
  _trusted_time_delta_type trusted_time_delta;
  using _gal_active_mask_type =
    uint64_t;
  _gal_active_mask_type gal_active_mask;
  using _gal_authentic_mask_type =
    uint64_t;
  _gal_authentic_mask_type gal_authentic_mask;
  using _gps_active_mask_type =
    uint64_t;
  _gps_active_mask_type gps_active_mask;
  using _gps_authentic_mask_type =
    uint64_t;
  _gps_authentic_mask_type gps_authentic_mask;

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
  Type & set__osnma_status(
    const uint16_t & _arg)
  {
    this->osnma_status = _arg;
    return *this;
  }
  Type & set__trusted_time_delta(
    const float & _arg)
  {
    this->trusted_time_delta = _arg;
    return *this;
  }
  Type & set__gal_active_mask(
    const uint64_t & _arg)
  {
    this->gal_active_mask = _arg;
    return *this;
  }
  Type & set__gal_authentic_mask(
    const uint64_t & _arg)
  {
    this->gal_authentic_mask = _arg;
    return *this;
  }
  Type & set__gps_active_mask(
    const uint64_t & _arg)
  {
    this->gps_active_mask = _arg;
    return *this;
  }
  Type & set__gps_authentic_mask(
    const uint64_t & _arg)
  {
    this->gps_authentic_mask = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__GALAuthStatus
    std::shared_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__GALAuthStatus
    std::shared_ptr<septentrio_gnss_driver::msg::GALAuthStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GALAuthStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->osnma_status != other.osnma_status) {
      return false;
    }
    if (this->trusted_time_delta != other.trusted_time_delta) {
      return false;
    }
    if (this->gal_active_mask != other.gal_active_mask) {
      return false;
    }
    if (this->gal_authentic_mask != other.gal_authentic_mask) {
      return false;
    }
    if (this->gps_active_mask != other.gps_active_mask) {
      return false;
    }
    if (this->gps_authentic_mask != other.gps_authentic_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const GALAuthStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GALAuthStatus_

// alias to use template instance with default allocator
using GALAuthStatus =
  septentrio_gnss_driver::msg::GALAuthStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__STRUCT_HPP_
