// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/ReceiverTime.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__ReceiverTime __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__ReceiverTime __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReceiverTime_
{
  using Type = ReceiverTime_<ContainerAllocator>;

  explicit ReceiverTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->utc_year = 0;
      this->utc_month = 0;
      this->utc_day = 0;
      this->utc_hour = 0;
      this->utc_min = 0;
      this->utc_second = 0;
      this->delta_ls = 0;
      this->sync_level = 0;
    }
  }

  explicit ReceiverTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->utc_year = 0;
      this->utc_month = 0;
      this->utc_day = 0;
      this->utc_hour = 0;
      this->utc_min = 0;
      this->utc_second = 0;
      this->delta_ls = 0;
      this->sync_level = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _utc_year_type =
    int8_t;
  _utc_year_type utc_year;
  using _utc_month_type =
    int8_t;
  _utc_month_type utc_month;
  using _utc_day_type =
    int8_t;
  _utc_day_type utc_day;
  using _utc_hour_type =
    int8_t;
  _utc_hour_type utc_hour;
  using _utc_min_type =
    int8_t;
  _utc_min_type utc_min;
  using _utc_second_type =
    int8_t;
  _utc_second_type utc_second;
  using _delta_ls_type =
    int8_t;
  _delta_ls_type delta_ls;
  using _sync_level_type =
    uint8_t;
  _sync_level_type sync_level;

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
  Type & set__utc_year(
    const int8_t & _arg)
  {
    this->utc_year = _arg;
    return *this;
  }
  Type & set__utc_month(
    const int8_t & _arg)
  {
    this->utc_month = _arg;
    return *this;
  }
  Type & set__utc_day(
    const int8_t & _arg)
  {
    this->utc_day = _arg;
    return *this;
  }
  Type & set__utc_hour(
    const int8_t & _arg)
  {
    this->utc_hour = _arg;
    return *this;
  }
  Type & set__utc_min(
    const int8_t & _arg)
  {
    this->utc_min = _arg;
    return *this;
  }
  Type & set__utc_second(
    const int8_t & _arg)
  {
    this->utc_second = _arg;
    return *this;
  }
  Type & set__delta_ls(
    const int8_t & _arg)
  {
    this->delta_ls = _arg;
    return *this;
  }
  Type & set__sync_level(
    const uint8_t & _arg)
  {
    this->sync_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__ReceiverTime
    std::shared_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__ReceiverTime
    std::shared_ptr<septentrio_gnss_driver::msg::ReceiverTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReceiverTime_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->utc_year != other.utc_year) {
      return false;
    }
    if (this->utc_month != other.utc_month) {
      return false;
    }
    if (this->utc_day != other.utc_day) {
      return false;
    }
    if (this->utc_hour != other.utc_hour) {
      return false;
    }
    if (this->utc_min != other.utc_min) {
      return false;
    }
    if (this->utc_second != other.utc_second) {
      return false;
    }
    if (this->delta_ls != other.delta_ls) {
      return false;
    }
    if (this->sync_level != other.sync_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReceiverTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReceiverTime_

// alias to use template instance with default allocator
using ReceiverTime =
  septentrio_gnss_driver::msg::ReceiverTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__STRUCT_HPP_
