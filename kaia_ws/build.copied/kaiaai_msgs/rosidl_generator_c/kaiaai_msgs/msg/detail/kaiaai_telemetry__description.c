// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice

#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kaiaai_msgs
const rosidl_type_hash_t *
kaiaai_msgs__msg__KaiaaiTelemetry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x33, 0x34, 0x26, 0x33, 0xdd, 0x38, 0x49,
      0x1b, 0x9e, 0x77, 0x20, 0x44, 0x30, 0x78, 0xa9,
      0x13, 0xbc, 0xa3, 0x4a, 0x82, 0x5b, 0xc6, 0xc3,
      0xab, 0xca, 0x88, 0xe7, 0x78, 0x28, 0xae, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char kaiaai_msgs__msg__KaiaaiTelemetry__TYPE_NAME[] = "kaiaai_msgs/msg/KaiaaiTelemetry";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__stamp[] = "stamp";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__seq[] = "seq";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_pos_x[] = "odom_pos_x";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_pos_y[] = "odom_pos_y";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_pos_yaw[] = "odom_pos_yaw";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_vel_x[] = "odom_vel_x";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_vel_yaw[] = "odom_vel_yaw";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__joint_pos[] = "joint_pos";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__joint_vel[] = "joint_vel";
static char kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__lds[] = "lds";

static rosidl_runtime_c__type_description__Field kaiaai_msgs__msg__KaiaaiTelemetry__FIELDS[] = {
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__seq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_pos_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_pos_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_pos_yaw, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_vel_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__odom_vel_yaw, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__joint_pos, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__joint_vel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry__FIELD_NAME__lds, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kaiaai_msgs__msg__KaiaaiTelemetry__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kaiaai_msgs__msg__KaiaaiTelemetry__TYPE_NAME, 31, 31},
      {kaiaai_msgs__msg__KaiaaiTelemetry__FIELDS, 10, 10},
    },
    {kaiaai_msgs__msg__KaiaaiTelemetry__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "uint32 seq\n"
  "float32 odom_pos_x\n"
  "float32 odom_pos_y\n"
  "float32 odom_pos_yaw\n"
  "float32 odom_vel_x\n"
  "float32 odom_vel_yaw\n"
  "float32[] joint_pos\n"
  "float32[] joint_vel\n"
  "uint8[] lds";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kaiaai_msgs__msg__KaiaaiTelemetry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kaiaai_msgs__msg__KaiaaiTelemetry__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 192, 192},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kaiaai_msgs__msg__KaiaaiTelemetry__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
