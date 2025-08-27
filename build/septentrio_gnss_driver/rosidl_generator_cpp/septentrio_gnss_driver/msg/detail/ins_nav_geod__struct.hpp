// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/INSNavGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_HPP_

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
# define DEPRECATED__septentrio_gnss_driver__msg__INSNavGeod __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__INSNavGeod __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSNavGeod_
{
  using Type = INSNavGeod_<ContainerAllocator>;

  explicit INSNavGeod_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_mode = 0;
      this->error = 0;
      this->info = 0;
      this->gnss_age = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->accuracy = 0;
      this->latency = 0;
      this->datum = 0;
      this->sb_list = 0;
      this->latitude_std_dev = 0.0f;
      this->longitude_std_dev = 0.0f;
      this->height_std_dev = 0.0f;
      this->latitude_longitude_cov = 0.0f;
      this->latitude_height_cov = 0.0f;
      this->longitude_height_cov = 0.0f;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->heading_std_dev = 0.0f;
      this->pitch_std_dev = 0.0f;
      this->roll_std_dev = 0.0f;
      this->heading_pitch_cov = 0.0f;
      this->heading_roll_cov = 0.0f;
      this->pitch_roll_cov = 0.0f;
      this->ve = 0.0f;
      this->vn = 0.0f;
      this->vu = 0.0f;
      this->ve_std_dev = 0.0f;
      this->vn_std_dev = 0.0f;
      this->vu_std_dev = 0.0f;
      this->ve_vn_cov = 0.0f;
      this->ve_vu_cov = 0.0f;
      this->vn_vu_cov = 0.0f;
    }
  }

  explicit INSNavGeod_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_mode = 0;
      this->error = 0;
      this->info = 0;
      this->gnss_age = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->accuracy = 0;
      this->latency = 0;
      this->datum = 0;
      this->sb_list = 0;
      this->latitude_std_dev = 0.0f;
      this->longitude_std_dev = 0.0f;
      this->height_std_dev = 0.0f;
      this->latitude_longitude_cov = 0.0f;
      this->latitude_height_cov = 0.0f;
      this->longitude_height_cov = 0.0f;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->heading_std_dev = 0.0f;
      this->pitch_std_dev = 0.0f;
      this->roll_std_dev = 0.0f;
      this->heading_pitch_cov = 0.0f;
      this->heading_roll_cov = 0.0f;
      this->pitch_roll_cov = 0.0f;
      this->ve = 0.0f;
      this->vn = 0.0f;
      this->vu = 0.0f;
      this->ve_std_dev = 0.0f;
      this->vn_std_dev = 0.0f;
      this->vu_std_dev = 0.0f;
      this->ve_vn_cov = 0.0f;
      this->ve_vu_cov = 0.0f;
      this->vn_vu_cov = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _gnss_mode_type =
    uint8_t;
  _gnss_mode_type gnss_mode;
  using _error_type =
    uint8_t;
  _error_type error;
  using _info_type =
    uint16_t;
  _info_type info;
  using _gnss_age_type =
    uint16_t;
  _gnss_age_type gnss_age;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _height_type =
    double;
  _height_type height;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _accuracy_type =
    uint16_t;
  _accuracy_type accuracy;
  using _latency_type =
    uint16_t;
  _latency_type latency;
  using _datum_type =
    uint8_t;
  _datum_type datum;
  using _sb_list_type =
    uint16_t;
  _sb_list_type sb_list;
  using _latitude_std_dev_type =
    float;
  _latitude_std_dev_type latitude_std_dev;
  using _longitude_std_dev_type =
    float;
  _longitude_std_dev_type longitude_std_dev;
  using _height_std_dev_type =
    float;
  _height_std_dev_type height_std_dev;
  using _latitude_longitude_cov_type =
    float;
  _latitude_longitude_cov_type latitude_longitude_cov;
  using _latitude_height_cov_type =
    float;
  _latitude_height_cov_type latitude_height_cov;
  using _longitude_height_cov_type =
    float;
  _longitude_height_cov_type longitude_height_cov;
  using _heading_type =
    float;
  _heading_type heading;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _heading_std_dev_type =
    float;
  _heading_std_dev_type heading_std_dev;
  using _pitch_std_dev_type =
    float;
  _pitch_std_dev_type pitch_std_dev;
  using _roll_std_dev_type =
    float;
  _roll_std_dev_type roll_std_dev;
  using _heading_pitch_cov_type =
    float;
  _heading_pitch_cov_type heading_pitch_cov;
  using _heading_roll_cov_type =
    float;
  _heading_roll_cov_type heading_roll_cov;
  using _pitch_roll_cov_type =
    float;
  _pitch_roll_cov_type pitch_roll_cov;
  using _ve_type =
    float;
  _ve_type ve;
  using _vn_type =
    float;
  _vn_type vn;
  using _vu_type =
    float;
  _vu_type vu;
  using _ve_std_dev_type =
    float;
  _ve_std_dev_type ve_std_dev;
  using _vn_std_dev_type =
    float;
  _vn_std_dev_type vn_std_dev;
  using _vu_std_dev_type =
    float;
  _vu_std_dev_type vu_std_dev;
  using _ve_vn_cov_type =
    float;
  _ve_vn_cov_type ve_vn_cov;
  using _ve_vu_cov_type =
    float;
  _ve_vu_cov_type ve_vu_cov;
  using _vn_vu_cov_type =
    float;
  _vn_vu_cov_type vn_vu_cov;

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
  Type & set__gnss_mode(
    const uint8_t & _arg)
  {
    this->gnss_mode = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__info(
    const uint16_t & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__gnss_age(
    const uint16_t & _arg)
  {
    this->gnss_age = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__accuracy(
    const uint16_t & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__latency(
    const uint16_t & _arg)
  {
    this->latency = _arg;
    return *this;
  }
  Type & set__datum(
    const uint8_t & _arg)
  {
    this->datum = _arg;
    return *this;
  }
  Type & set__sb_list(
    const uint16_t & _arg)
  {
    this->sb_list = _arg;
    return *this;
  }
  Type & set__latitude_std_dev(
    const float & _arg)
  {
    this->latitude_std_dev = _arg;
    return *this;
  }
  Type & set__longitude_std_dev(
    const float & _arg)
  {
    this->longitude_std_dev = _arg;
    return *this;
  }
  Type & set__height_std_dev(
    const float & _arg)
  {
    this->height_std_dev = _arg;
    return *this;
  }
  Type & set__latitude_longitude_cov(
    const float & _arg)
  {
    this->latitude_longitude_cov = _arg;
    return *this;
  }
  Type & set__latitude_height_cov(
    const float & _arg)
  {
    this->latitude_height_cov = _arg;
    return *this;
  }
  Type & set__longitude_height_cov(
    const float & _arg)
  {
    this->longitude_height_cov = _arg;
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
  Type & set__heading_std_dev(
    const float & _arg)
  {
    this->heading_std_dev = _arg;
    return *this;
  }
  Type & set__pitch_std_dev(
    const float & _arg)
  {
    this->pitch_std_dev = _arg;
    return *this;
  }
  Type & set__roll_std_dev(
    const float & _arg)
  {
    this->roll_std_dev = _arg;
    return *this;
  }
  Type & set__heading_pitch_cov(
    const float & _arg)
  {
    this->heading_pitch_cov = _arg;
    return *this;
  }
  Type & set__heading_roll_cov(
    const float & _arg)
  {
    this->heading_roll_cov = _arg;
    return *this;
  }
  Type & set__pitch_roll_cov(
    const float & _arg)
  {
    this->pitch_roll_cov = _arg;
    return *this;
  }
  Type & set__ve(
    const float & _arg)
  {
    this->ve = _arg;
    return *this;
  }
  Type & set__vn(
    const float & _arg)
  {
    this->vn = _arg;
    return *this;
  }
  Type & set__vu(
    const float & _arg)
  {
    this->vu = _arg;
    return *this;
  }
  Type & set__ve_std_dev(
    const float & _arg)
  {
    this->ve_std_dev = _arg;
    return *this;
  }
  Type & set__vn_std_dev(
    const float & _arg)
  {
    this->vn_std_dev = _arg;
    return *this;
  }
  Type & set__vu_std_dev(
    const float & _arg)
  {
    this->vu_std_dev = _arg;
    return *this;
  }
  Type & set__ve_vn_cov(
    const float & _arg)
  {
    this->ve_vn_cov = _arg;
    return *this;
  }
  Type & set__ve_vu_cov(
    const float & _arg)
  {
    this->ve_vu_cov = _arg;
    return *this;
  }
  Type & set__vn_vu_cov(
    const float & _arg)
  {
    this->vn_vu_cov = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__INSNavGeod
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__INSNavGeod
    std::shared_ptr<septentrio_gnss_driver::msg::INSNavGeod_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSNavGeod_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->gnss_mode != other.gnss_mode) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->gnss_age != other.gnss_age) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->latency != other.latency) {
      return false;
    }
    if (this->datum != other.datum) {
      return false;
    }
    if (this->sb_list != other.sb_list) {
      return false;
    }
    if (this->latitude_std_dev != other.latitude_std_dev) {
      return false;
    }
    if (this->longitude_std_dev != other.longitude_std_dev) {
      return false;
    }
    if (this->height_std_dev != other.height_std_dev) {
      return false;
    }
    if (this->latitude_longitude_cov != other.latitude_longitude_cov) {
      return false;
    }
    if (this->latitude_height_cov != other.latitude_height_cov) {
      return false;
    }
    if (this->longitude_height_cov != other.longitude_height_cov) {
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
    if (this->heading_std_dev != other.heading_std_dev) {
      return false;
    }
    if (this->pitch_std_dev != other.pitch_std_dev) {
      return false;
    }
    if (this->roll_std_dev != other.roll_std_dev) {
      return false;
    }
    if (this->heading_pitch_cov != other.heading_pitch_cov) {
      return false;
    }
    if (this->heading_roll_cov != other.heading_roll_cov) {
      return false;
    }
    if (this->pitch_roll_cov != other.pitch_roll_cov) {
      return false;
    }
    if (this->ve != other.ve) {
      return false;
    }
    if (this->vn != other.vn) {
      return false;
    }
    if (this->vu != other.vu) {
      return false;
    }
    if (this->ve_std_dev != other.ve_std_dev) {
      return false;
    }
    if (this->vn_std_dev != other.vn_std_dev) {
      return false;
    }
    if (this->vu_std_dev != other.vu_std_dev) {
      return false;
    }
    if (this->ve_vn_cov != other.ve_vn_cov) {
      return false;
    }
    if (this->ve_vu_cov != other.ve_vu_cov) {
      return false;
    }
    if (this->vn_vu_cov != other.vn_vu_cov) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSNavGeod_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSNavGeod_

// alias to use template instance with default allocator
using INSNavGeod =
  septentrio_gnss_driver::msg::INSNavGeod_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_HPP_
