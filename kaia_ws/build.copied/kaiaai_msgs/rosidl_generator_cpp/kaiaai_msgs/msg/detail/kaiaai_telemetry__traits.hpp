// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__TRAITS_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace kaiaai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KaiaaiTelemetry & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: odom_pos_x
  {
    out << "odom_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_pos_x, out);
    out << ", ";
  }

  // member: odom_pos_y
  {
    out << "odom_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_pos_y, out);
    out << ", ";
  }

  // member: odom_pos_yaw
  {
    out << "odom_pos_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_pos_yaw, out);
    out << ", ";
  }

  // member: odom_vel_x
  {
    out << "odom_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_vel_x, out);
    out << ", ";
  }

  // member: odom_vel_yaw
  {
    out << "odom_vel_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_vel_yaw, out);
    out << ", ";
  }

  // member: joint_pos
  {
    if (msg.joint_pos.size() == 0) {
      out << "joint_pos: []";
    } else {
      out << "joint_pos: [";
      size_t pending_items = msg.joint_pos.size();
      for (auto item : msg.joint_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_vel
  {
    if (msg.joint_vel.size() == 0) {
      out << "joint_vel: []";
    } else {
      out << "joint_vel: [";
      size_t pending_items = msg.joint_vel.size();
      for (auto item : msg.joint_vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lds
  {
    if (msg.lds.size() == 0) {
      out << "lds: []";
    } else {
      out << "lds: [";
      size_t pending_items = msg.lds.size();
      for (auto item : msg.lds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KaiaaiTelemetry & msg,
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

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: odom_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_pos_x, out);
    out << "\n";
  }

  // member: odom_pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_pos_y, out);
    out << "\n";
  }

  // member: odom_pos_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_pos_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_pos_yaw, out);
    out << "\n";
  }

  // member: odom_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_vel_x, out);
    out << "\n";
  }

  // member: odom_vel_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_vel_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_vel_yaw, out);
    out << "\n";
  }

  // member: joint_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_pos.size() == 0) {
      out << "joint_pos: []\n";
    } else {
      out << "joint_pos:\n";
      for (auto item : msg.joint_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_vel.size() == 0) {
      out << "joint_vel: []\n";
    } else {
      out << "joint_vel:\n";
      for (auto item : msg.joint_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lds.size() == 0) {
      out << "lds: []\n";
    } else {
      out << "lds:\n";
      for (auto item : msg.lds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KaiaaiTelemetry & msg, bool use_flow_style = false)
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
  const kaiaai_msgs::msg::KaiaaiTelemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  kaiaai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kaiaai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kaiaai_msgs::msg::KaiaaiTelemetry & msg)
{
  return kaiaai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kaiaai_msgs::msg::KaiaaiTelemetry>()
{
  return "kaiaai_msgs::msg::KaiaaiTelemetry";
}

template<>
inline const char * name<kaiaai_msgs::msg::KaiaaiTelemetry>()
{
  return "kaiaai_msgs/msg/KaiaaiTelemetry";
}

template<>
struct has_fixed_size<kaiaai_msgs::msg::KaiaaiTelemetry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kaiaai_msgs::msg::KaiaaiTelemetry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kaiaai_msgs::msg::KaiaaiTelemetry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__TRAITS_HPP_
