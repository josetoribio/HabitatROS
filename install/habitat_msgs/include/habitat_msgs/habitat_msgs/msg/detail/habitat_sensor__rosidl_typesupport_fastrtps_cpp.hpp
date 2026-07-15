// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice

#ifndef HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "habitat_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "habitat_msgs/msg/detail/habitat_sensor__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace habitat_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
cdr_serialize(
  const habitat_msgs::msg::HabitatSensor & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  habitat_msgs::msg::HabitatSensor & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
get_serialized_size(
  const habitat_msgs::msg::HabitatSensor & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
max_serialized_size_HabitatSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace habitat_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, habitat_msgs, msg, HabitatSensor)();

#ifdef __cplusplus
}
#endif

#endif  // HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
