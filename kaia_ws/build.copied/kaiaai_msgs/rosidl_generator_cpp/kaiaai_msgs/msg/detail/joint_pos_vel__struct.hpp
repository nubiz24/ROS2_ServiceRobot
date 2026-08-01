// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kaiaai_msgs:msg/JointPosVel.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__STRUCT_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kaiaai_msgs__msg__JointPosVel __attribute__((deprecated))
#else
# define DEPRECATED__kaiaai_msgs__msg__JointPosVel __declspec(deprecated)
#endif

namespace kaiaai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointPosVel_
{
  using Type = JointPosVel_<ContainerAllocator>;

  explicit JointPosVel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0.0f;
      this->vel = 0.0f;
    }
  }

  explicit JointPosVel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0.0f;
      this->vel = 0.0f;
    }
  }

  // field types and members
  using _pos_type =
    float;
  _pos_type pos;
  using _vel_type =
    float;
  _vel_type vel;

  // setters for named parameter idiom
  Type & set__pos(
    const float & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kaiaai_msgs::msg::JointPosVel_<ContainerAllocator> *;
  using ConstRawPtr =
    const kaiaai_msgs::msg::JointPosVel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kaiaai_msgs__msg__JointPosVel
    std::shared_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kaiaai_msgs__msg__JointPosVel
    std::shared_ptr<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointPosVel_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointPosVel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointPosVel_

// alias to use template instance with default allocator
using JointPosVel =
  kaiaai_msgs::msg::JointPosVel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__STRUCT_HPP_
