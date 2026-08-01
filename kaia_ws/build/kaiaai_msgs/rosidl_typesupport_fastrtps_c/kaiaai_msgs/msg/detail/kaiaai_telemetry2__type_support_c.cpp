// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kaiaai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__struct.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "kaiaai_msgs/msg/detail/joint_pos_vel__functions.h"  // joint
#include "rosidl_runtime_c/primitives_sequence.h"  // bumper, cliff, distance_mm, lds, touch
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bumper, cliff, distance_mm, lds, touch

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kaiaai_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kaiaai_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kaiaai_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_kaiaai_msgs__msg__JointPosVel(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_kaiaai_msgs__msg__JointPosVel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kaiaai_msgs, msg, JointPosVel)();


using _KaiaaiTelemetry2__ros_msg_type = kaiaai_msgs__msg__KaiaaiTelemetry2;

static bool _KaiaaiTelemetry2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KaiaaiTelemetry2__ros_msg_type * ros_message = static_cast<const _KaiaaiTelemetry2__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: seq
  {
    cdr << ros_message->seq;
  }

  // Field name: odom_pos_x
  {
    cdr << ros_message->odom_pos_x;
  }

  // Field name: odom_pos_y
  {
    cdr << ros_message->odom_pos_y;
  }

  // Field name: odom_pos_yaw
  {
    cdr << ros_message->odom_pos_yaw;
  }

  // Field name: odom_vel_x
  {
    cdr << ros_message->odom_vel_x;
  }

  // Field name: odom_vel_yaw
  {
    cdr << ros_message->odom_vel_yaw;
  }

  // Field name: joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kaiaai_msgs, msg, JointPosVel
      )()->data);
    size_t size = ros_message->joint.size;
    auto array_ptr = ros_message->joint.data;
    if (size > 15) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: wifi_rssi_dbm
  {
    cdr << ros_message->wifi_rssi_dbm;
  }

  // Field name: battery_mv
  {
    cdr << ros_message->battery_mv;
  }

  // Field name: distance_mm
  {
    size_t size = ros_message->distance_mm.size;
    auto array_ptr = ros_message->distance_mm.data;
    if (size > 15) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bumper
  {
    size_t size = ros_message->bumper.size;
    auto array_ptr = ros_message->bumper.data;
    if (size > 15) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cliff
  {
    size_t size = ros_message->cliff.size;
    auto array_ptr = ros_message->cliff.data;
    if (size > 15) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: touch
  {
    size_t size = ros_message->touch.size;
    auto array_ptr = ros_message->touch.data;
    if (size > 15) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: scan_start_hint
  {
    cdr << (ros_message->scan_start_hint ? true : false);
  }

  // Field name: lds
  {
    size_t size = ros_message->lds.size;
    auto array_ptr = ros_message->lds.data;
    if (size > 511) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _KaiaaiTelemetry2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KaiaaiTelemetry2__ros_msg_type * ros_message = static_cast<_KaiaaiTelemetry2__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: seq
  {
    cdr >> ros_message->seq;
  }

  // Field name: odom_pos_x
  {
    cdr >> ros_message->odom_pos_x;
  }

  // Field name: odom_pos_y
  {
    cdr >> ros_message->odom_pos_y;
  }

  // Field name: odom_pos_yaw
  {
    cdr >> ros_message->odom_pos_yaw;
  }

  // Field name: odom_vel_x
  {
    cdr >> ros_message->odom_vel_x;
  }

  // Field name: odom_vel_yaw
  {
    cdr >> ros_message->odom_vel_yaw;
  }

  // Field name: joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kaiaai_msgs, msg, JointPosVel
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint.data) {
      kaiaai_msgs__msg__JointPosVel__Sequence__fini(&ros_message->joint);
    }
    if (!kaiaai_msgs__msg__JointPosVel__Sequence__init(&ros_message->joint, size)) {
      fprintf(stderr, "failed to create array for field 'joint'");
      return false;
    }
    auto array_ptr = ros_message->joint.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: wifi_rssi_dbm
  {
    cdr >> ros_message->wifi_rssi_dbm;
  }

  // Field name: battery_mv
  {
    cdr >> ros_message->battery_mv;
  }

  // Field name: distance_mm
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->distance_mm.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->distance_mm);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->distance_mm, size)) {
      fprintf(stderr, "failed to create array for field 'distance_mm'");
      return false;
    }
    auto array_ptr = ros_message->distance_mm.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bumper
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bumper.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->bumper);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->bumper, size)) {
      fprintf(stderr, "failed to create array for field 'bumper'");
      return false;
    }
    auto array_ptr = ros_message->bumper.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: cliff
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cliff.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->cliff);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->cliff, size)) {
      fprintf(stderr, "failed to create array for field 'cliff'");
      return false;
    }
    auto array_ptr = ros_message->cliff.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: touch
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->touch.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->touch);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->touch, size)) {
      fprintf(stderr, "failed to create array for field 'touch'");
      return false;
    }
    auto array_ptr = ros_message->touch.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: scan_start_hint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->scan_start_hint = tmp ? true : false;
  }

  // Field name: lds
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lds.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->lds);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->lds, size)) {
      fprintf(stderr, "failed to create array for field 'lds'");
      return false;
    }
    auto array_ptr = ros_message->lds.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kaiaai_msgs
size_t get_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KaiaaiTelemetry2__ros_msg_type * ros_message = static_cast<const _KaiaaiTelemetry2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name seq
  {
    size_t item_size = sizeof(ros_message->seq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_pos_x
  {
    size_t item_size = sizeof(ros_message->odom_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_pos_y
  {
    size_t item_size = sizeof(ros_message->odom_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_pos_yaw
  {
    size_t item_size = sizeof(ros_message->odom_pos_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_vel_x
  {
    size_t item_size = sizeof(ros_message->odom_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_vel_yaw
  {
    size_t item_size = sizeof(ros_message->odom_vel_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint
  {
    size_t array_size = ros_message->joint.size;
    auto array_ptr = ros_message->joint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_kaiaai_msgs__msg__JointPosVel(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name wifi_rssi_dbm
  {
    size_t item_size = sizeof(ros_message->wifi_rssi_dbm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_mv
  {
    size_t item_size = sizeof(ros_message->battery_mv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_mm
  {
    size_t array_size = ros_message->distance_mm.size;
    auto array_ptr = ros_message->distance_mm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bumper
  {
    size_t array_size = ros_message->bumper.size;
    auto array_ptr = ros_message->bumper.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cliff
  {
    size_t array_size = ros_message->cliff.size;
    auto array_ptr = ros_message->cliff.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name touch
  {
    size_t array_size = ros_message->touch.size;
    auto array_ptr = ros_message->touch.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_start_hint
  {
    size_t item_size = sizeof(ros_message->scan_start_hint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lds
  {
    size_t array_size = ros_message->lds.size;
    auto array_ptr = ros_message->lds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _KaiaaiTelemetry2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kaiaai_msgs
size_t max_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry2(
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

  // member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: seq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: odom_pos_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: odom_pos_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: odom_pos_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: odom_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: odom_vel_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kaiaai_msgs__msg__JointPosVel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: wifi_rssi_dbm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_mv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: distance_mm
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: bumper
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cliff
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: touch
  {
    size_t array_size = 15;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scan_start_hint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lds
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
    using DataType = kaiaai_msgs__msg__KaiaaiTelemetry2;
    is_plain =
      (
      offsetof(DataType, lds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _KaiaaiTelemetry2__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry2(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KaiaaiTelemetry2 = {
  "kaiaai_msgs::msg",
  "KaiaaiTelemetry2",
  _KaiaaiTelemetry2__cdr_serialize,
  _KaiaaiTelemetry2__cdr_deserialize,
  _KaiaaiTelemetry2__get_serialized_size,
  _KaiaaiTelemetry2__max_serialized_size
};

static rosidl_message_type_support_t _KaiaaiTelemetry2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KaiaaiTelemetry2,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_hash,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kaiaai_msgs, msg, KaiaaiTelemetry2)() {
  return &_KaiaaiTelemetry2__type_support;
}

#if defined(__cplusplus)
}
#endif
