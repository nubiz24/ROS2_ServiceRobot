// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__rosidl_typesupport_introspection_c.h"
#include "kaiaai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__functions.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `joint_pos`
// Member `joint_vel`
// Member `lds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kaiaai_msgs__msg__KaiaaiTelemetry__init(message_memory);
}

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_fini_function(void * message_memory)
{
  kaiaai_msgs__msg__KaiaaiTelemetry__fini(message_memory);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry__joint_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__joint_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__joint_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry__joint_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__joint_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry__joint_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__joint_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry__joint_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry__joint_vel(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__joint_vel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__joint_vel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry__joint_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__joint_vel(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry__joint_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__joint_vel(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry__joint_vel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry__lds(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__lds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__lds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry__lds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__lds(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry__lds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__lds(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry__lds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_member_array[10] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, seq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_pos_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, odom_pos_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_pos_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, odom_pos_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_pos_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, odom_pos_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_vel_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, odom_vel_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_vel_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, odom_vel_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, joint_pos),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry__joint_pos,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__joint_pos,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__joint_pos,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry__joint_pos,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry__joint_pos,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry__joint_pos  // resize(index) function pointer
  },
  {
    "joint_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, joint_vel),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry__joint_vel,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__joint_vel,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__joint_vel,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry__joint_vel,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry__joint_vel,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry__joint_vel  // resize(index) function pointer
  },
  {
    "lds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry, lds),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry__lds,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry__lds,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry__lds,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry__lds,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry__lds,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry__lds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_members = {
  "kaiaai_msgs__msg",  // message namespace
  "KaiaaiTelemetry",  // message name
  10,  // number of fields
  sizeof(kaiaai_msgs__msg__KaiaaiTelemetry),
  kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_member_array,  // message members
  kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_init_function,  // function to initialize message memory (memory has to be allocated)
  kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_type_support_handle = {
  0,
  &kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_members,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_hash,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kaiaai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kaiaai_msgs, msg, KaiaaiTelemetry)() {
  kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_type_support_handle.typesupport_identifier) {
    kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kaiaai_msgs__msg__KaiaaiTelemetry__rosidl_typesupport_introspection_c__KaiaaiTelemetry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
