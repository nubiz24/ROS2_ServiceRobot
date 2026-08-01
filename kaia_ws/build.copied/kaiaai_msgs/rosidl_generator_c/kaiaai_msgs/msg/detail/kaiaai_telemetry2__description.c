// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice

#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kaiaai_msgs
const rosidl_type_hash_t *
kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x4b, 0xc6, 0xd4, 0x39, 0xe7, 0x96, 0xa2,
      0xa1, 0x6f, 0x70, 0xa1, 0x90, 0x8b, 0x70, 0xc2,
      0x0c, 0xb1, 0x83, 0x18, 0x7e, 0x8c, 0x3c, 0x77,
      0xea, 0x65, 0x7c, 0x2d, 0x55, 0x96, 0x1c, 0x25,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "kaiaai_msgs/msg/detail/joint_pos_vel__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t kaiaai_msgs__msg__JointPosVel__EXPECTED_HASH = {1, {
    0xb7, 0x99, 0x73, 0x0b, 0xa1, 0x6d, 0x48, 0xb0,
    0x61, 0x78, 0xe7, 0x6b, 0xe3, 0x4d, 0x32, 0xdf,
    0x3a, 0xdf, 0x5f, 0x0d, 0x94, 0xe8, 0xc6, 0x4e,
    0xe8, 0x37, 0x97, 0xb7, 0x33, 0x62, 0xb8, 0xa4,
  }};
#endif

static char kaiaai_msgs__msg__KaiaaiTelemetry2__TYPE_NAME[] = "kaiaai_msgs/msg/KaiaaiTelemetry2";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char kaiaai_msgs__msg__JointPosVel__TYPE_NAME[] = "kaiaai_msgs/msg/JointPosVel";

// Define type names, field names, and default values
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__stamp[] = "stamp";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__seq[] = "seq";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_pos_x[] = "odom_pos_x";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_pos_y[] = "odom_pos_y";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_pos_yaw[] = "odom_pos_yaw";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_vel_x[] = "odom_vel_x";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_vel_yaw[] = "odom_vel_yaw";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__joint[] = "joint";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__wifi_rssi_dbm[] = "wifi_rssi_dbm";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__battery_mv[] = "battery_mv";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__distance_mm[] = "distance_mm";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__bumper[] = "bumper";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__cliff[] = "cliff";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__touch[] = "touch";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__scan_start_hint[] = "scan_start_hint";
static char kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__lds[] = "lds";

static rosidl_runtime_c__type_description__Field kaiaai_msgs__msg__KaiaaiTelemetry2__FIELDS[] = {
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__seq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_pos_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_pos_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_pos_yaw, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_vel_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__odom_vel_yaw, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__joint, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      15,
      0,
      {kaiaai_msgs__msg__JointPosVel__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__wifi_rssi_dbm, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__battery_mv, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__distance_mm, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_BOUNDED_SEQUENCE,
      15,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__bumper, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_BOUNDED_SEQUENCE,
      15,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__cliff, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_BOUNDED_SEQUENCE,
      15,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__touch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_BOUNDED_SEQUENCE,
      15,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__scan_start_hint, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELD_NAME__lds, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_BOUNDED_SEQUENCE,
      511,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kaiaai_msgs__msg__KaiaaiTelemetry2__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {kaiaai_msgs__msg__JointPosVel__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kaiaai_msgs__msg__KaiaaiTelemetry2__TYPE_NAME, 32, 32},
      {kaiaai_msgs__msg__KaiaaiTelemetry2__FIELDS, 16, 16},
    },
    {kaiaai_msgs__msg__KaiaaiTelemetry2__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&kaiaai_msgs__msg__JointPosVel__EXPECTED_HASH, kaiaai_msgs__msg__JointPosVel__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = kaiaai_msgs__msg__JointPosVel__get_type_description(NULL)->type_description.fields;
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
  "JointPosVel[<=15] joint\n"
  "int8 wifi_rssi_dbm\n"
  "uint16 battery_mv\n"
  "uint16[<=15] distance_mm\n"
  "bool[<=15] bumper\n"
  "bool[<=15] cliff\n"
  "uint16[<=15] touch\n"
  "bool scan_start_hint\n"
  "uint8[<=511] lds";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kaiaai_msgs__msg__KaiaaiTelemetry2__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kaiaai_msgs__msg__KaiaaiTelemetry2__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 318, 318},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kaiaai_msgs__msg__KaiaaiTelemetry2__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *kaiaai_msgs__msg__JointPosVel__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
