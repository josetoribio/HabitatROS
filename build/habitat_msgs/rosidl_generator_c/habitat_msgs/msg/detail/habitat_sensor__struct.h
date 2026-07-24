// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice

#ifndef HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__STRUCT_H_
#define HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sensor_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HabitatSensor in the package habitat_msgs.
typedef struct habitat_msgs__msg__HabitatSensor
{
  std_msgs__msg__Header header;
  float temperature_c;
  float humidity_percent;
  rosidl_runtime_c__String sensor_id;
} habitat_msgs__msg__HabitatSensor;

// Struct for a sequence of habitat_msgs__msg__HabitatSensor.
typedef struct habitat_msgs__msg__HabitatSensor__Sequence
{
  habitat_msgs__msg__HabitatSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} habitat_msgs__msg__HabitatSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__STRUCT_H_
