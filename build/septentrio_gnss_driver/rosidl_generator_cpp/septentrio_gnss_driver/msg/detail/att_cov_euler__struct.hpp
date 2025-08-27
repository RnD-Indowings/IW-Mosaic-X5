// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/AttCovEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__AttCovEuler __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__AttCovEuler __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttCovEuler_
{
  using Type = AttCovEuler_<ContainerAllocator>;

  explicit AttCovEuler_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
      this->cov_headhead = 0.0f;
      this->cov_pitchpitch = 0.0f;
      this->cov_rollroll = 0.0f;
      this->cov_headpitch = 0.0f;
      this->cov_headroll = 0.0f;
      this->cov_pitchroll = 0.0f;
    }
  }

  explicit AttCovEuler_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
      this->cov_headhead = 0.0f;
      this->cov_pitchpitch = 0.0f;
      this->cov_rollroll = 0.0f;
      this->cov_headpitch = 0.0f;
      this->cov_headroll = 0.0f;
      this->cov_pitchroll = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _error_type =
    uint8_t;
  _error_type error;
  using _cov_headhead_type =
    float;
  _cov_headhead_type cov_headhead;
  using _cov_pitchpitch_type =
    float;
  _cov_pitchpitch_type cov_pitchpitch;
  using _cov_rollroll_type =
    float;
  _cov_rollroll_type cov_rollroll;
  using _cov_headpitch_type =
    float;
  _cov_headpitch_type cov_headpitch;
  using _cov_headroll_type =
    float;
  _cov_headroll_type cov_headroll;
  using _cov_pitchroll_type =
    float;
  _cov_pitchroll_type cov_pitchroll;

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
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__cov_headhead(
    const float & _arg)
  {
    this->cov_headhead = _arg;
    return *this;
  }
  Type & set__cov_pitchpitch(
    const float & _arg)
  {
    this->cov_pitchpitch = _arg;
    return *this;
  }
  Type & set__cov_rollroll(
    const float & _arg)
  {
    this->cov_rollroll = _arg;
    return *this;
  }
  Type & set__cov_headpitch(
    const float & _arg)
  {
    this->cov_headpitch = _arg;
    return *this;
  }
  Type & set__cov_headroll(
    const float & _arg)
  {
    this->cov_headroll = _arg;
    return *this;
  }
  Type & set__cov_pitchroll(
    const float & _arg)
  {
    this->cov_pitchroll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__AttCovEuler
    std::shared_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__AttCovEuler
    std::shared_ptr<septentrio_gnss_driver::msg::AttCovEuler_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttCovEuler_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->cov_headhead != other.cov_headhead) {
      return false;
    }
    if (this->cov_pitchpitch != other.cov_pitchpitch) {
      return false;
    }
    if (this->cov_rollroll != other.cov_rollroll) {
      return false;
    }
    if (this->cov_headpitch != other.cov_headpitch) {
      return false;
    }
    if (this->cov_headroll != other.cov_headroll) {
      return false;
    }
    if (this->cov_pitchroll != other.cov_pitchroll) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttCovEuler_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttCovEuler_

// alias to use template instance with default allocator
using AttCovEuler =
  septentrio_gnss_driver::msg::AttCovEuler_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__STRUCT_HPP_
