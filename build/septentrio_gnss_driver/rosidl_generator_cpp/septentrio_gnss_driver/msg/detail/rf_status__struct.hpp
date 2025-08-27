// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/RFStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__STRUCT_HPP_

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
// Member 'rfband'
#include "septentrio_gnss_driver/msg/detail/rf_band__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__RFStatus __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__RFStatus __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RFStatus_
{
  using Type = RFStatus_<ContainerAllocator>;

  explicit RFStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0;
      this->sb_length = 0;
      this->flags = 0;
    }
  }

  explicit RFStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0;
      this->sb_length = 0;
      this->flags = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _n_type =
    uint8_t;
  _n_type n;
  using _sb_length_type =
    uint8_t;
  _sb_length_type sb_length;
  using _flags_type =
    uint8_t;
  _flags_type flags;
  using _rfband_type =
    std::vector<septentrio_gnss_driver::msg::RFBand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<septentrio_gnss_driver::msg::RFBand_<ContainerAllocator>>>;
  _rfband_type rfband;

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
  Type & set__n(
    const uint8_t & _arg)
  {
    this->n = _arg;
    return *this;
  }
  Type & set__sb_length(
    const uint8_t & _arg)
  {
    this->sb_length = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__rfband(
    const std::vector<septentrio_gnss_driver::msg::RFBand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<septentrio_gnss_driver::msg::RFBand_<ContainerAllocator>>> & _arg)
  {
    this->rfband = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__RFStatus
    std::shared_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__RFStatus
    std::shared_ptr<septentrio_gnss_driver::msg::RFStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RFStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->n != other.n) {
      return false;
    }
    if (this->sb_length != other.sb_length) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->rfband != other.rfband) {
      return false;
    }
    return true;
  }
  bool operator!=(const RFStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RFStatus_

// alias to use template instance with default allocator
using RFStatus =
  septentrio_gnss_driver::msg::RFStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__STRUCT_HPP_
