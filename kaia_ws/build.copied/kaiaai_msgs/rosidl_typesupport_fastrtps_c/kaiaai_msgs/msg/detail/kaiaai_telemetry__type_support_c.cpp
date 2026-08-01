// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kaiaai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__struct.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__functions.h"
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
#include "rosidl_runtime_c/primitives_sequence.h"  // joint_pos, joint_vel, lds
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_pos, joint_vel, lds

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


using _KaiaaiTelemetry__ros_msg_type = kaiaai_msgs__msg__KaiaaiTelemetry;

static bool _KaiaaiTelemetry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KaiaaiTelemetry__ros_msg_type * ros_message = static_cast<const _KaiaaiTelemetry__ros_msg_type *>(untyped_ros_message);
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

  // Field name: joint_pos
  {
    size_t size = ros_message->joint_pos.size;
    auto array_ptr = ros_message->joint_pos.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_vel
  {
    size_t size = ros_message->joint_vel.size;
    auto array_ptr = ros_message->joint_vel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lds
  {
    size_t size = ros_message->lds.size;
    auto array_ptr = ros_message->lds.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _KaiaaiTelemetry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KaiaaiTelemetry__ros_msg_type * ros_message = static_cast<_KaiaaiTelemetry__ros_msg_type *>(untyped_ros_message);
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

  // Field name: joint_pos
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_pos.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->joint_pos);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->joint_pos, size)) {
      fprintf(stderr, "failed to create array for field 'joint_pos'");
      return false;
    }
    auto array_ptr = ros_message->joint_pos.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_vel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_vel.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->joint_vel);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->joint_vel, size)) {
      fprintf(stderr, "failed to create array for field 'joint_vel'");
      return false;
    }
    auto array_ptr = ros_message->joint_vel.data;
    cdr.deserializeArray(array_ptr, size);
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
size_t get_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KaiaaiTelemetry__ros_msg_type * ros_message = static_cast<const _KaiaaiTelemetry__ros_msg_type *>(untyped_ros_message);
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
  // field.name joint_pos
  {
    size_t array_size = ros_message->joint_pos.size;
    auto array_ptr = ros_message->joint_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_vel
  {
    size_t array_size = ros_message->joint_vel.size;
    auto array_ptr = ros_message->joint_vel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
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

static uint32_t _KaiaaiTelemetry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kaiaai_msgs
size_t max_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry(
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
  // member: joint_pos
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lds
  {
    size_t array_size = 0;
    full_bounded = false;
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
    using DataType = kaiaai_msgs__msg__KaiaaiTelemetry;
    is_plain =
      (
      offsetof(DataType, lds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _KaiaaiTelemetry__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kaiaai_msgs__msg__KaiaaiTelemetry(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KaiaaiTelemetry = {
  "kaiaai_msgs::msg",
  "KaiaaiTelemetry",
  _KaiaaiTelemetry__cdr_serialize,
  _KaiaaiTelemetry__cdr_deserialize,
  _KaiaaiTelemetry__get_serialized_size,
  _KaiaaiTelemetry__max_serialized_size
};

static rosidl_message_type_support_t _KaiaaiTelemetry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KaiaaiTelemetry,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_hash,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kaiaai_msgs, msg, KaiaaiTelemetry)() {
  return &_KaiaaiTelemetry__type_support;
}

#if defined(__cplusplus)
}
#endif
