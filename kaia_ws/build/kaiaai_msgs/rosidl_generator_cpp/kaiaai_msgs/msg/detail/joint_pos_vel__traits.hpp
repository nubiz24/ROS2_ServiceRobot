// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kaiaai_msgs:msg/JointPosVel.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__TRAITS_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kaiaai_msgs/msg/detail/joint_pos_vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kaiaai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointPosVel & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPosVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPosVel & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kaiaai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kaiaai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kaiaai_msgs::msg::JointPosVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  kaiaai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kaiaai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kaiaai_msgs::msg::JointPosVel & msg)
{
  return kaiaai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kaiaai_msgs::msg::JointPosVel>()
{
  return "kaiaai_msgs::msg::JointPosVel";
}

template<>
inline const char * name<kaiaai_msgs::msg::JointPosVel>()
{
  return "kaiaai_msgs/msg/JointPosVel";
}

template<>
struct has_fixed_size<kaiaai_msgs::msg::JointPosVel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kaiaai_msgs::msg::JointPosVel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kaiaai_msgs::msg::JointPosVel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KAIAAI_MSGS__MSG__DETAIL__JOINT_POS_VEL__TRAITS_HPP_
