// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kaiaai_msgs:msg/WifiState.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__WIFI_STATE__TRAITS_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__WIFI_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kaiaai_msgs/msg/detail/wifi_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace kaiaai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WifiState & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: rssi_dbm
  {
    out << "rssi_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_dbm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WifiState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: rssi_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_dbm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WifiState & msg, bool use_flow_style = false)
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
  const kaiaai_msgs::msg::WifiState & msg,
  std::ostream & out, size_t indentation = 0)
{
  kaiaai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kaiaai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kaiaai_msgs::msg::WifiState & msg)
{
  return kaiaai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kaiaai_msgs::msg::WifiState>()
{
  return "kaiaai_msgs::msg::WifiState";
}

template<>
inline const char * name<kaiaai_msgs::msg::WifiState>()
{
  return "kaiaai_msgs/msg/WifiState";
}

template<>
struct has_fixed_size<kaiaai_msgs::msg::WifiState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<kaiaai_msgs::msg::WifiState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<kaiaai_msgs::msg::WifiState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KAIAAI_MSGS__MSG__DETAIL__WIFI_STATE__TRAITS_HPP_
