// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpoch.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__STRUCT_HPP_

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
// Member 'type1'
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__MeasEpoch __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__MeasEpoch __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeasEpoch_
{
  using Type = MeasEpoch_<ContainerAllocator>;

  explicit MeasEpoch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0;
      this->sb1_length = 0;
      this->sb2_length = 0;
      this->common_flags = 0;
      this->cum_clk_jumps = 0;
    }
  }

  explicit MeasEpoch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0;
      this->sb1_length = 0;
      this->sb2_length = 0;
      this->common_flags = 0;
      this->cum_clk_jumps = 0;
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
  using _sb1_length_type =
    uint8_t;
  _sb1_length_type sb1_length;
  using _sb2_length_type =
    uint8_t;
  _sb2_length_type sb2_length;
  using _common_flags_type =
    uint8_t;
  _common_flags_type common_flags;
  using _cum_clk_jumps_type =
    uint8_t;
  _cum_clk_jumps_type cum_clk_jumps;
  using _type1_type =
    std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>>>;
  _type1_type type1;

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
  Type & set__sb1_length(
    const uint8_t & _arg)
  {
    this->sb1_length = _arg;
    return *this;
  }
  Type & set__sb2_length(
    const uint8_t & _arg)
  {
    this->sb2_length = _arg;
    return *this;
  }
  Type & set__common_flags(
    const uint8_t & _arg)
  {
    this->common_flags = _arg;
    return *this;
  }
  Type & set__cum_clk_jumps(
    const uint8_t & _arg)
  {
    this->cum_clk_jumps = _arg;
    return *this;
  }
  Type & set__type1(
    const std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>>> & _arg)
  {
    this->type1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__MeasEpoch
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__MeasEpoch
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpoch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeasEpoch_ & other) const
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
    if (this->sb1_length != other.sb1_length) {
      return false;
    }
    if (this->sb2_length != other.sb2_length) {
      return false;
    }
    if (this->common_flags != other.common_flags) {
      return false;
    }
    if (this->cum_clk_jumps != other.cum_clk_jumps) {
      return false;
    }
    if (this->type1 != other.type1) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeasEpoch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeasEpoch_

// alias to use template instance with default allocator
using MeasEpoch =
  septentrio_gnss_driver::msg::MeasEpoch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__STRUCT_HPP_
