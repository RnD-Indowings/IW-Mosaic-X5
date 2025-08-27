// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type2'
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType1 __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType1 __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeasEpochChannelType1_
{
  using Type = MeasEpochChannelType1_<ContainerAllocator>;

  explicit MeasEpochChannelType1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rx_channel = 0;
      this->type = 0;
      this->sv_id = 0;
      this->misc = 0;
      this->code_lsb = 0ul;
      this->doppler = 0l;
      this->carrier_lsb = 0;
      this->carrier_msb = 0;
      this->cn0 = 0;
      this->lock_time = 0;
      this->obs_info = 0;
      this->n2 = 0;
    }
  }

  explicit MeasEpochChannelType1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rx_channel = 0;
      this->type = 0;
      this->sv_id = 0;
      this->misc = 0;
      this->code_lsb = 0ul;
      this->doppler = 0l;
      this->carrier_lsb = 0;
      this->carrier_msb = 0;
      this->cn0 = 0;
      this->lock_time = 0;
      this->obs_info = 0;
      this->n2 = 0;
    }
  }

  // field types and members
  using _rx_channel_type =
    uint8_t;
  _rx_channel_type rx_channel;
  using _type_type =
    uint8_t;
  _type_type type;
  using _sv_id_type =
    uint8_t;
  _sv_id_type sv_id;
  using _misc_type =
    uint8_t;
  _misc_type misc;
  using _code_lsb_type =
    uint32_t;
  _code_lsb_type code_lsb;
  using _doppler_type =
    int32_t;
  _doppler_type doppler;
  using _carrier_lsb_type =
    uint16_t;
  _carrier_lsb_type carrier_lsb;
  using _carrier_msb_type =
    int8_t;
  _carrier_msb_type carrier_msb;
  using _cn0_type =
    uint8_t;
  _cn0_type cn0;
  using _lock_time_type =
    uint16_t;
  _lock_time_type lock_time;
  using _obs_info_type =
    uint8_t;
  _obs_info_type obs_info;
  using _n2_type =
    uint8_t;
  _n2_type n2;
  using _type2_type =
    std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>>>;
  _type2_type type2;

  // setters for named parameter idiom
  Type & set__rx_channel(
    const uint8_t & _arg)
  {
    this->rx_channel = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__sv_id(
    const uint8_t & _arg)
  {
    this->sv_id = _arg;
    return *this;
  }
  Type & set__misc(
    const uint8_t & _arg)
  {
    this->misc = _arg;
    return *this;
  }
  Type & set__code_lsb(
    const uint32_t & _arg)
  {
    this->code_lsb = _arg;
    return *this;
  }
  Type & set__doppler(
    const int32_t & _arg)
  {
    this->doppler = _arg;
    return *this;
  }
  Type & set__carrier_lsb(
    const uint16_t & _arg)
  {
    this->carrier_lsb = _arg;
    return *this;
  }
  Type & set__carrier_msb(
    const int8_t & _arg)
  {
    this->carrier_msb = _arg;
    return *this;
  }
  Type & set__cn0(
    const uint8_t & _arg)
  {
    this->cn0 = _arg;
    return *this;
  }
  Type & set__lock_time(
    const uint16_t & _arg)
  {
    this->lock_time = _arg;
    return *this;
  }
  Type & set__obs_info(
    const uint8_t & _arg)
  {
    this->obs_info = _arg;
    return *this;
  }
  Type & set__n2(
    const uint8_t & _arg)
  {
    this->n2 = _arg;
    return *this;
  }
  Type & set__type2(
    const std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<septentrio_gnss_driver::msg::MeasEpochChannelType2_<ContainerAllocator>>> & _arg)
  {
    this->type2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType1
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__MeasEpochChannelType1
    std::shared_ptr<septentrio_gnss_driver::msg::MeasEpochChannelType1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeasEpochChannelType1_ & other) const
  {
    if (this->rx_channel != other.rx_channel) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->sv_id != other.sv_id) {
      return false;
    }
    if (this->misc != other.misc) {
      return false;
    }
    if (this->code_lsb != other.code_lsb) {
      return false;
    }
    if (this->doppler != other.doppler) {
      return false;
    }
    if (this->carrier_lsb != other.carrier_lsb) {
      return false;
    }
    if (this->carrier_msb != other.carrier_msb) {
      return false;
    }
    if (this->cn0 != other.cn0) {
      return false;
    }
    if (this->lock_time != other.lock_time) {
      return false;
    }
    if (this->obs_info != other.obs_info) {
      return false;
    }
    if (this->n2 != other.n2) {
      return false;
    }
    if (this->type2 != other.type2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeasEpochChannelType1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeasEpochChannelType1_

// alias to use template instance with default allocator
using MeasEpochChannelType1 =
  septentrio_gnss_driver::msg::MeasEpochChannelType1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__STRUCT_HPP_
