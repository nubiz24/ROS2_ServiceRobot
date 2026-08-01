// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__rosidl_typesupport_introspection_c.h"
#include "kaiaai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__functions.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `joint`
#include "kaiaai_msgs/msg/joint_pos_vel.h"
// Member `joint`
#include "kaiaai_msgs/msg/detail/joint_pos_vel__rosidl_typesupport_introspection_c.h"
// Member `distance_mm`
// Member `bumper`
// Member `cliff`
// Member `touch`
// Member `lds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kaiaai_msgs__msg__KaiaaiTelemetry2__init(message_memory);
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_fini_function(void * message_memory)
{
  kaiaai_msgs__msg__KaiaaiTelemetry2__fini(message_memory);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__joint(
  const void * untyped_member)
{
  const kaiaai_msgs__msg__JointPosVel__Sequence * member =
    (const kaiaai_msgs__msg__JointPosVel__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__joint(
  const void * untyped_member, size_t index)
{
  const kaiaai_msgs__msg__JointPosVel__Sequence * member =
    (const kaiaai_msgs__msg__JointPosVel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__joint(
  void * untyped_member, size_t index)
{
  kaiaai_msgs__msg__JointPosVel__Sequence * member =
    (kaiaai_msgs__msg__JointPosVel__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__joint(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kaiaai_msgs__msg__JointPosVel * item =
    ((const kaiaai_msgs__msg__JointPosVel *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__joint(untyped_member, index));
  kaiaai_msgs__msg__JointPosVel * value =
    (kaiaai_msgs__msg__JointPosVel *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__joint(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kaiaai_msgs__msg__JointPosVel * item =
    ((kaiaai_msgs__msg__JointPosVel *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__joint(untyped_member, index));
  const kaiaai_msgs__msg__JointPosVel * value =
    (const kaiaai_msgs__msg__JointPosVel *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__joint(
  void * untyped_member, size_t size)
{
  kaiaai_msgs__msg__JointPosVel__Sequence * member =
    (kaiaai_msgs__msg__JointPosVel__Sequence *)(untyped_member);
  kaiaai_msgs__msg__JointPosVel__Sequence__fini(member);
  return kaiaai_msgs__msg__JointPosVel__Sequence__init(member, size);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__distance_mm(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__distance_mm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__distance_mm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__distance_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__distance_mm(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__distance_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__distance_mm(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__distance_mm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__bumper(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__bumper(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__bumper(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__bumper(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__bumper(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__bumper(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__bumper(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__bumper(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__cliff(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__cliff(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__cliff(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__cliff(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__cliff(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__cliff(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__cliff(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__cliff(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__touch(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__touch(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__touch(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__touch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__touch(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__touch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__touch(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__touch(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__lds(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__lds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__lds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__lds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__lds(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__lds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__lds(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__lds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_member_array[16] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, stamp),  // bytes offset in struct
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
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, seq),  // bytes offset in struct
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
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, odom_pos_x),  // bytes offset in struct
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
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, odom_pos_y),  // bytes offset in struct
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
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, odom_pos_yaw),  // bytes offset in struct
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
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, odom_vel_x),  // bytes offset in struct
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
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, odom_vel_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, joint),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__joint,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__joint,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__joint,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__joint,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__joint,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__joint  // resize(index) function pointer
  },
  {
    "wifi_rssi_dbm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, wifi_rssi_dbm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_mv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, battery_mv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, distance_mm),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__distance_mm,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__distance_mm,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__distance_mm,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__distance_mm,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__distance_mm,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__distance_mm  // resize(index) function pointer
  },
  {
    "bumper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, bumper),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__bumper,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__bumper,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__bumper,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__bumper,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__bumper,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__bumper  // resize(index) function pointer
  },
  {
    "cliff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, cliff),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__cliff,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__cliff,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__cliff,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__cliff,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__cliff,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__cliff  // resize(index) function pointer
  },
  {
    "touch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, touch),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__touch,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__touch,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__touch,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__touch,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__touch,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__touch  // resize(index) function pointer
  },
  {
    "scan_start_hint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, scan_start_hint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    511,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs__msg__KaiaaiTelemetry2, lds),  // bytes offset in struct
    NULL,  // default value
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__size_function__KaiaaiTelemetry2__lds,  // size() function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_const_function__KaiaaiTelemetry2__lds,  // get_const(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__get_function__KaiaaiTelemetry2__lds,  // get(index) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__fetch_function__KaiaaiTelemetry2__lds,  // fetch(index, &value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__assign_function__KaiaaiTelemetry2__lds,  // assign(index, value) function pointer
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__resize_function__KaiaaiTelemetry2__lds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_members = {
  "kaiaai_msgs__msg",  // message namespace
  "KaiaaiTelemetry2",  // message name
  16,  // number of fields
  sizeof(kaiaai_msgs__msg__KaiaaiTelemetry2),
  kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_member_array,  // message members
  kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_init_function,  // function to initialize message memory (memory has to be allocated)
  kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_type_support_handle = {
  0,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_members,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_hash,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kaiaai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kaiaai_msgs, msg, KaiaaiTelemetry2)() {
  kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kaiaai_msgs, msg, JointPosVel)();
  if (!kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_type_support_handle.typesupport_identifier) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kaiaai_msgs__msg__KaiaaiTelemetry2__rosidl_typesupport_introspection_c__KaiaaiTelemetry2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
