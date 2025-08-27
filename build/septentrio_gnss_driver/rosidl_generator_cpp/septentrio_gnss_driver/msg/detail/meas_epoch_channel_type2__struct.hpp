// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType2 __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType2 __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeasEpochChannelType2_
{
  using Type = MeasEpochChannelType2_<ContainerAllocator>;

  explicit MeasEpochChannelType2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->lock_time = 0;
      this->cn0 = 0;
      this->offsets_msb = 0;
      this->carrier_msb = 0;
      this->obs_info = 0;
      this->code_offset_lsb = 0;
      this->carrier_lsb = 0;
      this->doppler_offset_lsb = 0;
    }
  }

  explicit MeasEpochChannelType2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->lock_time = 0;
      this->cn0 = 0;
      this->offsets_msb = 0;
      this->carrier_msb = 0;
      this->obs_info = 0;
      this->code_offset_lsb = 0;
      this->carrier_lsb = 0;
      this->doppler_offset_lsb = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _lock_time_type =
    uint8_t;
  _lock_time_type lock_time;
  using _cn0_type =
    uint8_t;
  _cn0_type cn0;
  using _offsets_msb_type =
    uint8_t;
  _offsets_msb_type offsets_msb;
  using _carrier_msb_type =
    int8_t;
  _carrier_msb_type carrier_msb;
  using _obs_info_type =
    uint8_t;
  _obs_info_type obs_info;
  using _code_offset_lsb_type =
    uint16_t;
  _code_offset_lsb_type code_offset_lsb;
  using _carrier_lsb_type =
    uint16_t;
  _carrier_lsb_type carrier_lsb;
  using _doppler_offset_lsb_type =
    uint16_t;
  _doppler_offset_lsb_type doppler_offset_lsb;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__lock_time(
    const uint8_t & _arg)
  {
    this->lock_time = _arg;
    return *this;
  }
  Type & set__cn0(
    const uint8_t & _arg)
  {
    this->cn0 = _arg;
    return *this;
  }
  Type & set__offsets_msb(
    const uint8_t & _arg)
  {
    this->offsets_msb = _arg;
    return *this;
  }
  Type & set__carrier_msb(
    const int8_t & _arg)
  {
    this->carrier_msb = _arg;
    return *this;
  }
  Type & set__obs_info(
    const uint8_t & _arg)
  {
    this->obs_info = _arg;
    return *this;
  }
  Type & set__code_offset_lsb(
    const uint16_t & _arg)
  {
    this->code_offset_lsb = _arg;
    return *this;
  }
  Type & set__carrier_lsb(
    const uint16_t & _arg)
  {
    this->carrier_lsb = _arg;
    return *this;
  }
  Type & set__doppler_offset_lsb(
    const uint16_t & _arg)
  {
    this->doppler_offset_lsb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType2
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType2
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeasEpochChannelType2_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->lock_time != other.lock_time) {
      return false;
    }
    if (this->cn0 != other.cn0) {
      return false;
    }
    if (this->offsets_msb != other.offsets_msb) {
      return false;
    }
    if (this->carrier_msb != other.carrier_msb) {
      return false;
    }
    if (this->obs_info != other.obs_info) {
      return false;
    }
    if (this->code_offset_lsb != other.code_offset_lsb) {
      return false;
    }
    if (this->carrier_lsb != other.carrier_lsb) {
      return false;
    }
    if (this->doppler_offset_lsb != other.doppler_offset_lsb) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeasEpochChannelType2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeasEpochChannelType2_

// alias to use template instance with default allocator
using MeasEpochChannelType2 =
  septentrio_gnss_driver::msg::MeasEpochChannelType2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__STRUCT_HPP_
