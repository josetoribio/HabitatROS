// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice

#ifndef HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__TRAITS_HPP_
#define HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "habitat_msgs/msg/detail/habitat_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace habitat_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HabitatSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature_c
  {
    out << "temperature_c: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_c, out);
    out << ", ";
  }

  // member: humidity_percent
  {
    out << "humidity_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity_percent, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HabitatSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_c: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_c, out);
    out << "\n";
  }

  // member: humidity_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "humidity_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity_percent, out);
    out << "\n";
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HabitatSensor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace habitat_msgs

namespace rosidl_generator_traits
{

[[deprecated("use habitat_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const habitat_msgs::msg::HabitatSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  habitat_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use habitat_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const habitat_msgs::msg::HabitatSensor & msg)
{
  return habitat_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<habitat_msgs::msg::HabitatSensor>()
{
  return "habitat_msgs::msg::HabitatSensor";
}

template<>
inline const char * name<habitat_msgs::msg::HabitatSensor>()
{
  return "habitat_msgs/msg/HabitatSensor";
}

template<>
struct has_fixed_size<habitat_msgs::msg::HabitatSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<habitat_msgs::msg::HabitatSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<habitat_msgs::msg::HabitatSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__TRAITS_HPP_
