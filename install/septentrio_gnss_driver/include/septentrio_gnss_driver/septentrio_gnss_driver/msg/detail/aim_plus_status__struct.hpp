// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/AIMPlusStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__AIMPlusStatus __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__AIMPlusStatus __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AIMPlusStatus_
{
  using Type = AIMPlusStatus_<ContainerAllocator>;

  explicit AIMPlusStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0ul;
      this->wnc = 0;
      this->interference = 0;
      this->spoofing = 0;
      this->osnma_authenticating = false;
      this->galileo_authentic = 0;
      this->galileo_spoofed = 0;
      this->gps_authentic = 0;
      this->gps_spoofed = 0;
    }
  }

  explicit AIMPlusStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0ul;
      this->wnc = 0;
      this->interference = 0;
      this->spoofing = 0;
      this->osnma_authenticating = false;
      this->galileo_authentic = 0;
      this->galileo_spoofed = 0;
      this->gps_authentic = 0;
      this->gps_spoofed = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tow_type =
    uint32_t;
  _tow_type tow;
  using _wnc_type =
    uint16_t;
  _wnc_type wnc;
  using _interference_type =
    uint8_t;
  _interference_type interference;
  using _spoofing_type =
    uint8_t;
  _spoofing_type spoofing;
  using _osnma_authenticating_type =
    bool;
  _osnma_authenticating_type osnma_authenticating;
  using _galileo_authentic_type =
    uint8_t;
  _galileo_authentic_type galileo_authentic;
  using _galileo_spoofed_type =
    uint8_t;
  _galileo_spoofed_type galileo_spoofed;
  using _gps_authentic_type =
    uint8_t;
  _gps_authentic_type gps_authentic;
  using _gps_spoofed_type =
    uint8_t;
  _gps_spoofed_type gps_spoofed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tow(
    const uint32_t & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__wnc(
    const uint16_t & _arg)
  {
    this->wnc = _arg;
    return *this;
  }
  Type & set__interference(
    const uint8_t & _arg)
  {
    this->interference = _arg;
    return *this;
  }
  Type & set__spoofing(
    const uint8_t & _arg)
  {
    this->spoofing = _arg;
    return *this;
  }
  Type & set__osnma_authenticating(
    const bool & _arg)
  {
    this->osnma_authenticating = _arg;
    return *this;
  }
  Type & set__galileo_authentic(
    const uint8_t & _arg)
  {
    this->galileo_authentic = _arg;
    return *this;
  }
  Type & set__galileo_spoofed(
    const uint8_t & _arg)
  {
    this->galileo_spoofed = _arg;
    return *this;
  }
  Type & set__gps_authentic(
    const uint8_t & _arg)
  {
    this->gps_authentic = _arg;
    return *this;
  }
  Type & set__gps_spoofed(
    const uint8_t & _arg)
  {
    this->gps_spoofed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SPECTRUM_CLEAN =
    0u;
  static constexpr uint8_t INTERFERENCE_MITIGATED =
    1u;
  static constexpr uint8_t INTERFERENCE_PRESENT =
    2u;
  static constexpr uint8_t NONE_DETECTED =
    0u;
  static constexpr uint8_t SPOOFING_DETECTED_BY_OSNMA =
    1u;
  static constexpr uint8_t SPOOFING_DETECTED_BY_AUTHENTCITY_TEST =
    2u;
  static constexpr uint8_t SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST =
    3u;

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__AIMPlusStatus
    std::shared_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__AIMPlusStatus
    std::shared_ptr<septentrio_gnss_driver::msg::AIMPlusStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AIMPlusStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->wnc != other.wnc) {
      return false;
    }
    if (this->interference != other.interference) {
      return false;
    }
    if (this->spoofing != other.spoofing) {
      return false;
    }
    if (this->osnma_authenticating != other.osnma_authenticating) {
      return false;
    }
    if (this->galileo_authentic != other.galileo_authentic) {
      return false;
    }
    if (this->galileo_spoofed != other.galileo_spoofed) {
      return false;
    }
    if (this->gps_authentic != other.gps_authentic) {
      return false;
    }
    if (this->gps_spoofed != other.gps_spoofed) {
      return false;
    }
    return true;
  }
  bool operator!=(const AIMPlusStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AIMPlusStatus_

// alias to use template instance with default allocator
using AIMPlusStatus =
  septentrio_gnss_driver::msg::AIMPlusStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AIMPlusStatus_<ContainerAllocator>::SPECTRUM_CLEAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AIMPlusStatus_<ContainerAllocator>::INTERFERENCE_MITIGATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AIMPlusStatus_<ContainerAllocator>::INTERFERENCE_PRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AIMPlusStatus_<ContainerAllocator>::NONE_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AIMPlusStatus_<ContainerAllocator>::SPOOFING_DETECTED_BY_OSNMA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AIMPlusStatus_<ContainerAllocator>::SPOOFING_DETECTED_BY_AUTHENTCITY_TEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AIMPlusStatus_<ContainerAllocator>::SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__STRUCT_HPP_
