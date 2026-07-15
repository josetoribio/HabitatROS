// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice
#include "habitat_msgs/msg/detail/habitat_sensor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "habitat_msgs/msg/detail/habitat_sensor__struct.hpp"

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temperature_c
  cdr << ros_message.temperature_c;
  // Member: humidity_percent
  cdr << ros_message.humidity_percent;
  // Member: sensor_id
  cdr << ros_message.sensor_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  habitat_msgs::msg::HabitatSensor & ros_message)
{
  // Member: temperature_c
  cdr >> ros_message.temperature_c;

  // Member: humidity_percent
  cdr >> ros_message.humidity_percent;

  // Member: sensor_id
  cdr >> ros_message.sensor_id;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
get_serialized_size(
  const habitat_msgs::msg::HabitatSensor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temperature_c
  {
    size_t item_size = sizeof(ros_message.temperature_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: humidity_percent
  {
    size_t item_size = sizeof(ros_message.humidity_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sensor_id.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_habitat_msgs
max_serialized_size_HabitatSensor(
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


  // Member: temperature_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: humidity_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sensor_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = habitat_msgs::msg::HabitatSensor;
    is_plain =
      (
      offsetof(DataType, sensor_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HabitatSensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const habitat_msgs::msg::HabitatSensor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HabitatSensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<habitat_msgs::msg::HabitatSensor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HabitatSensor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const habitat_msgs::msg::HabitatSensor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HabitatSensor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HabitatSensor(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HabitatSensor__callbacks = {
  "habitat_msgs::msg",
  "HabitatSensor",
  _HabitatSensor__cdr_serialize,
  _HabitatSensor__cdr_deserialize,
  _HabitatSensor__get_serialized_size,
  _HabitatSensor__max_serialized_size
};

static rosidl_message_type_support_t _HabitatSensor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HabitatSensor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace habitat_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_habitat_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<habitat_msgs::msg::HabitatSensor>()
{
  return &habitat_msgs::msg::typesupport_fastrtps_cpp::_HabitatSensor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, habitat_msgs, msg, HabitatSensor)() {
  return &habitat_msgs::msg::typesupport_fastrtps_cpp::_HabitatSensor__handle;
}

#ifdef __cplusplus
}
#endif
