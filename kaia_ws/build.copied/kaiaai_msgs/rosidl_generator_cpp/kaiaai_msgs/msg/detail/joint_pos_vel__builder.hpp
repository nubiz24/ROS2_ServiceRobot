// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kaiaai_msgs:msg/JointPosVel.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__BUILDER_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kaiaai_msgs/msg/detail/joint_pos_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kaiaai_msgs
{

namespace msg
{

namespace builder
{

class Init_JointPosVel_vel
{
public:
  explicit Init_JointPosVel_vel(::kaiaai_msgs::msg::JointPosVel & msg)
  : msg_(msg)
  {}
  ::kaiaai_msgs::msg::JointPosVel vel(::kaiaai_msgs::msg::JointPosVel::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kaiaai_msgs::msg::JointPosVel msg_;
};

class Init_JointPosVel_pos
{
public:
  Init_JointPosVel_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPosVel_vel pos(::kaiaai_msgs::msg::JointPosVel::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_JointPosVel_vel(msg_);
  }

private:
  ::kaiaai_msgs::msg::JointPosVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kaiaai_msgs::msg::JointPosVel>()
{
  return kaiaai_msgs::msg::builder::Init_JointPosVel_pos();
}

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__BUILDER_HPP_
