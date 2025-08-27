// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/AttEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__AttEuler __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__AttEuler __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttEuler_
{
  using Type = AttEuler_<ContainerAllocator>;

  explicit AttEuler_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_sv = 0;
      this->error = 0;
      this->mode = 0;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->pitch_dot = 0.0f;
      this->roll_dot = 0.0f;
      this->heading_dot = 0.0f;
    }
  }

  explicit AttEuler_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_sv = 0;
      this->error = 0;
      this->mode = 0;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->pitch_dot = 0.0f;
      this->roll_dot = 0.0f;
      this->heading_dot = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _nr_sv_type =
    uint8_t;
  _nr_sv_type nr_sv;
  using _error_type =
    uint8_t;
  _error_type error;
  using _mode_type =
    uint16_t;
  _mode_type mode;
  using _heading_type =
    float;
  _heading_type heading;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_dot_type =
    float;
  _pitch_dot_type pitch_dot;
  using _roll_dot_type =
    float;
  _roll_dot_type roll_dot;
  using _heading_dot_type =
    float;
  _heading_dot_type heading_dot;

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
    const uint16_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch_dot(
    const float & _arg)
  {
    this->pitch_dot = _arg;
    return *this;
  }
  Type & set__roll_dot(
    const float & _arg)
  {
    this->roll_dot = _arg;
    return *this;
  }
  Type & set__heading_dot(
    const float & _arg)
  {
    this->heading_dot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__AttEuler
    std::shared_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__AttEuler
    std::shared_ptr<septentrio_gnss_driver::msg::AttEuler_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttEuler_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->nr_sv != other.nr_sv) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch_dot != other.pitch_dot) {
      return false;
    }
    if (this->roll_dot != other.roll_dot) {
      return false;
    }
    if (this->heading_dot != other.heading_dot) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttEuler_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttEuler_

// alias to use template instance with default allocator
using AttEuler =
  septentrio_gnss_driver::msg::AttEuler_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__STRUCT_HPP_
