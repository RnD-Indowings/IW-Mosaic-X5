// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__ExtSensorMeas __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__ExtSensorMeas __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExtSensorMeas_
{
  using Type = ExtSensorMeas_<ContainerAllocator>;

  explicit ExtSensorMeas_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0;
      this->sb_length = 0;
      this->acceleration_x = 0.0;
      this->acceleration_y = 0.0;
      this->acceleration_z = 0.0;
      this->angular_rate_x = 0.0;
      this->angular_rate_y = 0.0;
      this->angular_rate_z = 0.0;
      this->velocity_x = 0.0f;
      this->velocity_y = 0.0f;
      this->velocity_z = 0.0f;
      this->std_dev_x = 0.0f;
      this->std_dev_y = 0.0f;
      this->std_dev_z = 0.0f;
      this->sensor_temperature = 0.0f;
      this->zero_velocity_flag = 0.0;
    }
  }

  explicit ExtSensorMeas_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0;
      this->sb_length = 0;
      this->acceleration_x = 0.0;
      this->acceleration_y = 0.0;
      this->acceleration_z = 0.0;
      this->angular_rate_x = 0.0;
      this->angular_rate_y = 0.0;
      this->angular_rate_z = 0.0;
      this->velocity_x = 0.0f;
      this->velocity_y = 0.0f;
      this->velocity_z = 0.0f;
      this->std_dev_x = 0.0f;
      this->std_dev_y = 0.0f;
      this->std_dev_z = 0.0f;
      this->sensor_temperature = 0.0f;
      this->zero_velocity_flag = 0.0;
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
  using _source_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _source_type source;
  using _sensor_model_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _sensor_model_type sensor_model;
  using _type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _type_type type;
  using _obs_info_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _obs_info_type obs_info;
  using _acceleration_x_type =
    double;
  _acceleration_x_type acceleration_x;
  using _acceleration_y_type =
    double;
  _acceleration_y_type acceleration_y;
  using _acceleration_z_type =
    double;
  _acceleration_z_type acceleration_z;
  using _angular_rate_x_type =
    double;
  _angular_rate_x_type angular_rate_x;
  using _angular_rate_y_type =
    double;
  _angular_rate_y_type angular_rate_y;
  using _angular_rate_z_type =
    double;
  _angular_rate_z_type angular_rate_z;
  using _velocity_x_type =
    float;
  _velocity_x_type velocity_x;
  using _velocity_y_type =
    float;
  _velocity_y_type velocity_y;
  using _velocity_z_type =
    float;
  _velocity_z_type velocity_z;
  using _std_dev_x_type =
    float;
  _std_dev_x_type std_dev_x;
  using _std_dev_y_type =
    float;
  _std_dev_y_type std_dev_y;
  using _std_dev_z_type =
    float;
  _std_dev_z_type std_dev_z;
  using _sensor_temperature_type =
    float;
  _sensor_temperature_type sensor_temperature;
  using _zero_velocity_flag_type =
    double;
  _zero_velocity_flag_type zero_velocity_flag;

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
  Type & set__source(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__sensor_model(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->sensor_model = _arg;
    return *this;
  }
  Type & set__type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__obs_info(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->obs_info = _arg;
    return *this;
  }
  Type & set__acceleration_x(
    const double & _arg)
  {
    this->acceleration_x = _arg;
    return *this;
  }
  Type & set__acceleration_y(
    const double & _arg)
  {
    this->acceleration_y = _arg;
    return *this;
  }
  Type & set__acceleration_z(
    const double & _arg)
  {
    this->acceleration_z = _arg;
    return *this;
  }
  Type & set__angular_rate_x(
    const double & _arg)
  {
    this->angular_rate_x = _arg;
    return *this;
  }
  Type & set__angular_rate_y(
    const double & _arg)
  {
    this->angular_rate_y = _arg;
    return *this;
  }
  Type & set__angular_rate_z(
    const double & _arg)
  {
    this->angular_rate_z = _arg;
    return *this;
  }
  Type & set__velocity_x(
    const float & _arg)
  {
    this->velocity_x = _arg;
    return *this;
  }
  Type & set__velocity_y(
    const float & _arg)
  {
    this->velocity_y = _arg;
    return *this;
  }
  Type & set__velocity_z(
    const float & _arg)
  {
    this->velocity_z = _arg;
    return *this;
  }
  Type & set__std_dev_x(
    const float & _arg)
  {
    this->std_dev_x = _arg;
    return *this;
  }
  Type & set__std_dev_y(
    const float & _arg)
  {
    this->std_dev_y = _arg;
    return *this;
  }
  Type & set__std_dev_z(
    const float & _arg)
  {
    this->std_dev_z = _arg;
    return *this;
  }
  Type & set__sensor_temperature(
    const float & _arg)
  {
    this->sensor_temperature = _arg;
    return *this;
  }
  Type & set__zero_velocity_flag(
    const double & _arg)
  {
    this->zero_velocity_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__ExtSensorMeas
    std::shared_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__ExtSensorMeas
    std::shared_ptr<septentrio_gnss_driver::msg::ExtSensorMeas_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExtSensorMeas_ & other) const
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
    if (this->source != other.source) {
      return false;
    }
    if (this->sensor_model != other.sensor_model) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->obs_info != other.obs_info) {
      return false;
    }
    if (this->acceleration_x != other.acceleration_x) {
      return false;
    }
    if (this->acceleration_y != other.acceleration_y) {
      return false;
    }
    if (this->acceleration_z != other.acceleration_z) {
      return false;
    }
    if (this->angular_rate_x != other.angular_rate_x) {
      return false;
    }
    if (this->angular_rate_y != other.angular_rate_y) {
      return false;
    }
    if (this->angular_rate_z != other.angular_rate_z) {
      return false;
    }
    if (this->velocity_x != other.velocity_x) {
      return false;
    }
    if (this->velocity_y != other.velocity_y) {
      return false;
    }
    if (this->velocity_z != other.velocity_z) {
      return false;
    }
    if (this->std_dev_x != other.std_dev_x) {
      return false;
    }
    if (this->std_dev_y != other.std_dev_y) {
      return false;
    }
    if (this->std_dev_z != other.std_dev_z) {
      return false;
    }
    if (this->sensor_temperature != other.sensor_temperature) {
      return false;
    }
    if (this->zero_velocity_flag != other.zero_velocity_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExtSensorMeas_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExtSensorMeas_

// alias to use template instance with default allocator
using ExtSensorMeas =
  septentrio_gnss_driver::msg::ExtSensorMeas_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_HPP_
