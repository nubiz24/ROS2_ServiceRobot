// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__functions.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace kaiaai_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const kaiaai_msgs::msg::JointPosVel &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  kaiaai_msgs::msg::JointPosVel &);
size_t get_serialized_size(
  const kaiaai_msgs::msg::JointPosVel &,
  size_t current_alignment);
size_t
max_serialized_size_JointPosVel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace kaiaai_msgs


namespace kaiaai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
cdr_serialize(
  const kaiaai_msgs::msg::KaiaaiTelemetry2 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: seq
  cdr << ros_message.seq;
  // Member: odom_pos_x
  cdr << ros_message.odom_pos_x;
  // Member: odom_pos_y
  cdr << ros_message.odom_pos_y;
  // Member: odom_pos_yaw
  cdr << ros_message.odom_pos_yaw;
  // Member: odom_vel_x
  cdr << ros_message.odom_vel_x;
  // Member: odom_vel_yaw
  cdr << ros_message.odom_vel_yaw;
  // Member: joint
  {
    size_t size = ros_message.joint.size();
    if (size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      kaiaai_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.joint[i],
        cdr);
    }
  }
  // Member: wifi_rssi_dbm
  cdr << ros_message.wifi_rssi_dbm;
  // Member: battery_mv
  cdr << ros_message.battery_mv;
  // Member: distance_mm
  {
    size_t size = ros_message.distance_mm.size();
    if (size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.distance_mm[0]), size);
    }
  }
  // Member: bumper
  {
    size_t size = ros_message.bumper.size();
    if (size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << (ros_message.bumper[i] ? true : false);
    }
  }
  // Member: cliff
  {
    size_t size = ros_message.cliff.size();
    if (size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << (ros_message.cliff[i] ? true : false);
    }
  }
  // Member: touch
  {
    size_t size = ros_message.touch.size();
    if (size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.touch[0]), size);
    }
  }
  // Member: scan_start_hint
  cdr << (ros_message.scan_start_hint ? true : false);
  // Member: lds
  {
    size_t size = ros_message.lds.size();
    if (size > 511) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.lds[0]), size);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kaiaai_msgs::msg::KaiaaiTelemetry2 & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: seq
  cdr >> ros_message.seq;

  // Member: odom_pos_x
  cdr >> ros_message.odom_pos_x;

  // Member: odom_pos_y
  cdr >> ros_message.odom_pos_y;

  // Member: odom_pos_yaw
  cdr >> ros_message.odom_pos_yaw;

  // Member: odom_vel_x
  cdr >> ros_message.odom_vel_x;

  // Member: odom_vel_yaw
  cdr >> ros_message.odom_vel_yaw;

  // Member: joint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.joint.resize(size);
    for (size_t i = 0; i < size; i++) {
      kaiaai_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.joint[i]);
    }
  }

  // Member: wifi_rssi_dbm
  cdr >> ros_message.wifi_rssi_dbm;

  // Member: battery_mv
  cdr >> ros_message.battery_mv;

  // Member: distance_mm
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.distance_mm.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.distance_mm[0]), size);
    }
  }

  // Member: bumper
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bumper.resize(size);
    for (size_t i = 0; i < size; i++) {
      uint8_t tmp;
      cdr >> tmp;
      ros_message.bumper[i] = tmp ? true : false;
    }
  }

  // Member: cliff
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cliff.resize(size);
    for (size_t i = 0; i < size; i++) {
      uint8_t tmp;
      cdr >> tmp;
      ros_message.cliff[i] = tmp ? true : false;
    }
  }

  // Member: touch
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.touch.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.touch[0]), size);
    }
  }

  // Member: scan_start_hint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.scan_start_hint = tmp ? true : false;
  }

  // Member: lds
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.lds.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.lds[0]), size);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
get_serialized_size(
  const kaiaai_msgs::msg::KaiaaiTelemetry2 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: seq
  {
    size_t item_size = sizeof(ros_message.seq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odom_pos_x
  {
    size_t item_size = sizeof(ros_message.odom_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odom_pos_y
  {
    size_t item_size = sizeof(ros_message.odom_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odom_pos_yaw
  {
    size_t item_size = sizeof(ros_message.odom_pos_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odom_vel_x
  {
    size_t item_size = sizeof(ros_message.odom_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odom_vel_yaw
  {
    size_t item_size = sizeof(ros_message.odom_vel_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint
  {
    size_t array_size = ros_message.joint.size();
    if (array_size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        kaiaai_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.joint[index], current_alignment);
    }
  }
  // Member: wifi_rssi_dbm
  {
    size_t item_size = sizeof(ros_message.wifi_rssi_dbm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_mv
  {
    size_t item_size = sizeof(ros_message.battery_mv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_mm
  {
    size_t array_size = ros_message.distance_mm.size();
    if (array_size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.distance_mm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bumper
  {
    size_t array_size = ros_message.bumper.size();
    if (array_size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.bumper[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cliff
  {
    size_t array_size = ros_message.cliff.size();
    if (array_size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cliff[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: touch
  {
    size_t array_size = ros_message.touch.size();
    if (array_size > 15) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.touch[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_start_hint
  {
    size_t item_size = sizeof(ros_message.scan_start_hint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lds
  {
    size_t array_size = ros_message.lds.size();
    if (array_size > 511) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.lds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
max_serialized_size_KaiaaiTelemetry2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: seq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_pos_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_pos_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_pos_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_vel_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        kaiaai_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointPosVel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: wifi_rssi_dbm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_mv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: distance_mm
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: bumper
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cliff
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: touch
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scan_start_hint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lds
  {
    size_t array_size = 511;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kaiaai_msgs::msg::KaiaaiTelemetry2;
    is_plain =
      (
      offsetof(DataType, lds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _KaiaaiTelemetry2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kaiaai_msgs::msg::KaiaaiTelemetry2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KaiaaiTelemetry2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kaiaai_msgs::msg::KaiaaiTelemetry2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KaiaaiTelemetry2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kaiaai_msgs::msg::KaiaaiTelemetry2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KaiaaiTelemetry2__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KaiaaiTelemetry2(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KaiaaiTelemetry2__callbacks = {
  "kaiaai_msgs::msg",
  "KaiaaiTelemetry2",
  _KaiaaiTelemetry2__cdr_serialize,
  _KaiaaiTelemetry2__cdr_deserialize,
  _KaiaaiTelemetry2__get_serialized_size,
  _KaiaaiTelemetry2__max_serialized_size
};

static rosidl_message_type_support_t _KaiaaiTelemetry2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KaiaaiTelemetry2__callbacks,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_hash,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kaiaai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kaiaai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<kaiaai_msgs::msg::KaiaaiTelemetry2>()
{
  return &kaiaai_msgs::msg::typesupport_fastrtps_cpp::_KaiaaiTelemetry2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kaiaai_msgs, msg, KaiaaiTelemetry2)() {
  return &kaiaai_msgs::msg::typesupport_fastrtps_cpp::_KaiaaiTelemetry2__handle;
}

#ifdef __cplusplus
}
#endif
