// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/IMUSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__IMUSetup __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__IMUSetup __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMUSetup_
{
  using Type = IMUSetup_<ContainerAllocator>;

  explicit IMUSetup_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_port = 0;
      this->ant_lever_arm_x = 0.0f;
      this->ant_lever_arm_y = 0.0f;
      this->ant_lever_arm_z = 0.0f;
      this->theta_x = 0.0f;
      this->theta_y = 0.0f;
      this->theta_z = 0.0f;
    }
  }

  explicit IMUSetup_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_port = 0;
      this->ant_lever_arm_x = 0.0f;
      this->ant_lever_arm_y = 0.0f;
      this->ant_lever_arm_z = 0.0f;
      this->theta_x = 0.0f;
      this->theta_y = 0.0f;
      this->theta_z = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _serial_port_type =
    uint8_t;
  _serial_port_type serial_port;
  using _ant_lever_arm_x_type =
    float;
  _ant_lever_arm_x_type ant_lever_arm_x;
  using _ant_lever_arm_y_type =
    float;
  _ant_lever_arm_y_type ant_lever_arm_y;
  using _ant_lever_arm_z_type =
    float;
  _ant_lever_arm_z_type ant_lever_arm_z;
  using _theta_x_type =
    float;
  _theta_x_type theta_x;
  using _theta_y_type =
    float;
  _theta_y_type theta_y;
  using _theta_z_type =
    float;
  _theta_z_type theta_z;

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
  Type & set__serial_port(
    const uint8_t & _arg)
  {
    this->serial_port = _arg;
    return *this;
  }
  Type & set__ant_lever_arm_x(
    const float & _arg)
  {
    this->ant_lever_arm_x = _arg;
    return *this;
  }
  Type & set__ant_lever_arm_y(
    const float & _arg)
  {
    this->ant_lever_arm_y = _arg;
    return *this;
  }
  Type & set__ant_lever_arm_z(
    const float & _arg)
  {
    this->ant_lever_arm_z = _arg;
    return *this;
  }
  Type & set__theta_x(
    const float & _arg)
  {
    this->theta_x = _arg;
    return *this;
  }
  Type & set__theta_y(
    const float & _arg)
  {
    this->theta_y = _arg;
    return *this;
  }
  Type & set__theta_z(
    const float & _arg)
  {
    this->theta_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__IMUSetup
    std::shared_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__IMUSetup
    std::shared_ptr<septentrio_gnss_driver::msg::IMUSetup_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUSetup_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->serial_port != other.serial_port) {
      return false;
    }
    if (this->ant_lever_arm_x != other.ant_lever_arm_x) {
      return false;
    }
    if (this->ant_lever_arm_y != other.ant_lever_arm_y) {
      return false;
    }
    if (this->ant_lever_arm_z != other.ant_lever_arm_z) {
      return false;
    }
    if (this->theta_x != other.theta_x) {
      return false;
    }
    if (this->theta_y != other.theta_y) {
      return false;
    }
    if (this->theta_z != other.theta_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUSetup_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUSetup_

// alias to use template instance with default allocator
using IMUSetup =
  septentrio_gnss_driver::msg::IMUSetup_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__STRUCT_HPP_
