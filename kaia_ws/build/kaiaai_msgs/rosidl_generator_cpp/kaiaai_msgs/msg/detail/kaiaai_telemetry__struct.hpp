// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__STRUCT_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry __attribute__((deprecated))
#else
# define DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry __declspec(deprecated)
#endif

namespace kaiaai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KaiaaiTelemetry_
{
  using Type = KaiaaiTelemetry_<ContainerAllocator>;

  explicit KaiaaiTelemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->odom_pos_x = 0.0f;
      this->odom_pos_y = 0.0f;
      this->odom_pos_yaw = 0.0f;
      this->odom_vel_x = 0.0f;
      this->odom_vel_yaw = 0.0f;
    }
  }

  explicit KaiaaiTelemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->odom_pos_x = 0.0f;
      this->odom_pos_y = 0.0f;
      this->odom_pos_yaw = 0.0f;
      this->odom_vel_x = 0.0f;
      this->odom_vel_yaw = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _odom_pos_x_type =
    float;
  _odom_pos_x_type odom_pos_x;
  using _odom_pos_y_type =
    float;
  _odom_pos_y_type odom_pos_y;
  using _odom_pos_yaw_type =
    float;
  _odom_pos_yaw_type odom_pos_yaw;
  using _odom_vel_x_type =
    float;
  _odom_vel_x_type odom_vel_x;
  using _odom_vel_yaw_type =
    float;
  _odom_vel_yaw_type odom_vel_yaw;
  using _joint_pos_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_pos_type joint_pos;
  using _joint_vel_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_vel_type joint_vel;
  using _lds_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _lds_type lds;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__odom_pos_x(
    const float & _arg)
  {
    this->odom_pos_x = _arg;
    return *this;
  }
  Type & set__odom_pos_y(
    const float & _arg)
  {
    this->odom_pos_y = _arg;
    return *this;
  }
  Type & set__odom_pos_yaw(
    const float & _arg)
  {
    this->odom_pos_yaw = _arg;
    return *this;
  }
  Type & set__odom_vel_x(
    const float & _arg)
  {
    this->odom_vel_x = _arg;
    return *this;
  }
  Type & set__odom_vel_yaw(
    const float & _arg)
  {
    this->odom_vel_yaw = _arg;
    return *this;
  }
  Type & set__joint_pos(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_pos = _arg;
    return *this;
  }
  Type & set__joint_vel(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_vel = _arg;
    return *this;
  }
  Type & set__lds(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->lds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KaiaaiTelemetry_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->odom_pos_x != other.odom_pos_x) {
      return false;
    }
    if (this->odom_pos_y != other.odom_pos_y) {
      return false;
    }
    if (this->odom_pos_yaw != other.odom_pos_yaw) {
      return false;
    }
    if (this->odom_vel_x != other.odom_vel_x) {
      return false;
    }
    if (this->odom_vel_yaw != other.odom_vel_yaw) {
      return false;
    }
    if (this->joint_pos != other.joint_pos) {
      return false;
    }
    if (this->joint_vel != other.joint_vel) {
      return false;
    }
    if (this->lds != other.lds) {
      return false;
    }
    return true;
  }
  bool operator!=(const KaiaaiTelemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KaiaaiTelemetry_

// alias to use template instance with default allocator
using KaiaaiTelemetry =
  kaiaai_msgs::msg::KaiaaiTelemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__STRUCT_HPP_
