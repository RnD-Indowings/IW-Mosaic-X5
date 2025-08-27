// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/BlockHeader.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__BlockHeader __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__BlockHeader __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockHeader_
{
  using Type = BlockHeader_<ContainerAllocator>;

  explicit BlockHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->sync_1 = 36;
      this->sync_2 = 64;
      this->tow = 4294967295ul;
      this->wnc = 65535;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sync_1 = 0;
      this->sync_2 = 0;
      this->crc = 0;
      this->id = 0;
      this->revision = 0;
      this->length = 0;
      this->tow = 0ul;
      this->wnc = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->id = 0;
      this->revision = 0;
      this->length = 0;
    }
  }

  explicit BlockHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->sync_1 = 36;
      this->sync_2 = 64;
      this->tow = 4294967295ul;
      this->wnc = 65535;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sync_1 = 0;
      this->sync_2 = 0;
      this->crc = 0;
      this->id = 0;
      this->revision = 0;
      this->length = 0;
      this->tow = 0ul;
      this->wnc = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->id = 0;
      this->revision = 0;
      this->length = 0;
    }
  }

  // field types and members
  using _sync_1_type =
    uint8_t;
  _sync_1_type sync_1;
  using _sync_2_type =
    uint8_t;
  _sync_2_type sync_2;
  using _crc_type =
    uint16_t;
  _crc_type crc;
  using _id_type =
    uint16_t;
  _id_type id;
  using _revision_type =
    uint8_t;
  _revision_type revision;
  using _length_type =
    uint16_t;
  _length_type length;
  using _tow_type =
    uint32_t;
  _tow_type tow;
  using _wnc_type =
    uint16_t;
  _wnc_type wnc;

  // setters for named parameter idiom
  Type & set__sync_1(
    const uint8_t & _arg)
  {
    this->sync_1 = _arg;
    return *this;
  }
  Type & set__sync_2(
    const uint8_t & _arg)
  {
    this->sync_2 = _arg;
    return *this;
  }
  Type & set__crc(
    const uint16_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__revision(
    const uint8_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }
  Type & set__length(
    const uint16_t & _arg)
  {
    this->length = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__BlockHeader
    std::shared_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__BlockHeader
    std::shared_ptr<septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockHeader_ & other) const
  {
    if (this->sync_1 != other.sync_1) {
      return false;
    }
    if (this->sync_2 != other.sync_2) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->wnc != other.wnc) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockHeader_

// alias to use template instance with default allocator
using BlockHeader =
  septentrio_gnss_driver::msg::BlockHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_HPP_
