// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__TRAITS_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'joint'
#include "kaiaai_msgs/msg/detail/joint_pos_vel__traits.hpp"

namespace kaiaai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KaiaaiTelemetry2 & msg,
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

  // member: joint
  {
    if (msg.joint.size() == 0) {
      out << "joint: []";
    } else {
      out << "joint: [";
      size_t pending_items = msg.joint.size();
      for (auto item : msg.joint) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wifi_rssi_dbm
  {
    out << "wifi_rssi_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.wifi_rssi_dbm, out);
    out << ", ";
  }

  // member: battery_mv
  {
    out << "battery_mv: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_mv, out);
    out << ", ";
  }

  // member: distance_mm
  {
    if (msg.distance_mm.size() == 0) {
      out << "distance_mm: []";
    } else {
      out << "distance_mm: [";
      size_t pending_items = msg.distance_mm.size();
      for (auto item : msg.distance_mm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bumper
  {
    if (msg.bumper.size() == 0) {
      out << "bumper: []";
    } else {
      out << "bumper: [";
      size_t pending_items = msg.bumper.size();
      for (auto item : msg.bumper) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cliff
  {
    if (msg.cliff.size() == 0) {
      out << "cliff: []";
    } else {
      out << "cliff: [";
      size_t pending_items = msg.cliff.size();
      for (auto item : msg.cliff) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: touch
  {
    if (msg.touch.size() == 0) {
      out << "touch: []";
    } else {
      out << "touch: [";
      size_t pending_items = msg.touch.size();
      for (auto item : msg.touch) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scan_start_hint
  {
    out << "scan_start_hint: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_start_hint, out);
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
  const KaiaaiTelemetry2 & msg,
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

  // member: joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint.size() == 0) {
      out << "joint: []\n";
    } else {
      out << "joint:\n";
      for (auto item : msg.joint) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: wifi_rssi_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wifi_rssi_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.wifi_rssi_dbm, out);
    out << "\n";
  }

  // member: battery_mv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_mv: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_mv, out);
    out << "\n";
  }

  // member: distance_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distance_mm.size() == 0) {
      out << "distance_mm: []\n";
    } else {
      out << "distance_mm:\n";
      for (auto item : msg.distance_mm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bumper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bumper.size() == 0) {
      out << "bumper: []\n";
    } else {
      out << "bumper:\n";
      for (auto item : msg.bumper) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cliff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cliff.size() == 0) {
      out << "cliff: []\n";
    } else {
      out << "cliff:\n";
      for (auto item : msg.cliff) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: touch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.touch.size() == 0) {
      out << "touch: []\n";
    } else {
      out << "touch:\n";
      for (auto item : msg.touch) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: scan_start_hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_start_hint: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_start_hint, out);
    out << "\n";
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

inline std::string to_yaml(const KaiaaiTelemetry2 & msg, bool use_flow_style = false)
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
  const kaiaai_msgs::msg::KaiaaiTelemetry2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  kaiaai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kaiaai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
{
  return kaiaai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kaiaai_msgs::msg::KaiaaiTelemetry2>()
{
  return "kaiaai_msgs::msg::KaiaaiTelemetry2";
}

template<>
inline const char * name<kaiaai_msgs::msg::KaiaaiTelemetry2>()
{
  return "kaiaai_msgs/msg/KaiaaiTelemetry2";
}

template<>
struct has_fixed_size<kaiaai_msgs::msg::KaiaaiTelemetry2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kaiaai_msgs::msg::KaiaaiTelemetry2>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<kaiaai_msgs::msg::JointPosVel>::value> {};

template<>
struct is_message<kaiaai_msgs::msg::KaiaaiTelemetry2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__TRAITS_HPP_
