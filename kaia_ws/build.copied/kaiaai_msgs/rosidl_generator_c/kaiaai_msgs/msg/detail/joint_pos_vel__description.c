// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kaiaai_msgs:msg/JointPosVel.idl
// generated code does not contain a copyright notice

#include "kaiaai_msgs/msg/detail/joint_pos_vel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kaiaai_msgs
const rosidl_type_hash_t *
kaiaai_msgs__msg__JointPosVel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0x99, 0x73, 0x0b, 0xa1, 0x6d, 0x48, 0xb0,
      0x61, 0x78, 0xe7, 0x6b, 0xe3, 0x4d, 0x32, 0xdf,
      0x3a, 0xdf, 0x5f, 0x0d, 0x94, 0xe8, 0xc6, 0x4e,
      0xe8, 0x37, 0x97, 0xb7, 0x33, 0x62, 0xb8, 0xa4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kaiaai_msgs__msg__JointPosVel__TYPE_NAME[] = "kaiaai_msgs/msg/JointPosVel";

// Define type names, field names, and default values
static char kaiaai_msgs__msg__JointPosVel__FIELD_NAME__pos[] = "pos";
static char kaiaai_msgs__msg__JointPosVel__FIELD_NAME__vel[] = "vel";

static rosidl_runtime_c__type_description__Field kaiaai_msgs__msg__JointPosVel__FIELDS[] = {
  {
    {kaiaai_msgs__msg__JointPosVel__FIELD_NAME__pos, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__JointPosVel__FIELD_NAME__vel, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kaiaai_msgs__msg__JointPosVel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kaiaai_msgs__msg__JointPosVel__TYPE_NAME, 27, 27},
      {kaiaai_msgs__msg__JointPosVel__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 pos\n"
  "float32 vel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kaiaai_msgs__msg__JointPosVel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kaiaai_msgs__msg__JointPosVel__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kaiaai_msgs__msg__JointPosVel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kaiaai_msgs__msg__JointPosVel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
