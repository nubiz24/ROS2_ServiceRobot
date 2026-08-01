// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kaiaai_msgs:msg/OnlineEvent.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__TRAITS_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kaiaai_msgs/msg/detail/online_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'diag'
#include "diagnostic_msgs/msg/detail/diagnostic_array__traits.hpp"

namespace kaiaai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OnlineEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: event
  {
    out << "event: ";
    rosidl_generator_traits::character_value_to_yaml(msg.event, out);
    out << ", ";
  }

  // member: comment
  {
    out << "comment: ";
    rosidl_generator_traits::value_to_yaml(msg.comment, out);
    out << ", ";
  }

  // member: diag
  {
    out << "diag: ";
    to_flow_style_yaml(msg.diag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OnlineEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event: ";
    rosidl_generator_traits::character_value_to_yaml(msg.event, out);
    out << "\n";
  }

  // member: comment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comment: ";
    rosidl_generator_traits::value_to_yaml(msg.comment, out);
    out << "\n";
  }

  // member: diag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag:\n";
    to_block_style_yaml(msg.diag, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OnlineEvent & msg, bool use_flow_style = false)
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
  const kaiaai_msgs::msg::OnlineEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  kaiaai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kaiaai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kaiaai_msgs::msg::OnlineEvent & msg)
{
  return kaiaai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kaiaai_msgs::msg::OnlineEvent>()
{
  return "kaiaai_msgs::msg::OnlineEvent";
}

template<>
inline const char * name<kaiaai_msgs::msg::OnlineEvent>()
{
  return "kaiaai_msgs/msg/OnlineEvent";
}

template<>
struct has_fixed_size<kaiaai_msgs::msg::OnlineEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kaiaai_msgs::msg::OnlineEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kaiaai_msgs::msg::OnlineEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__TRAITS_HPP_
