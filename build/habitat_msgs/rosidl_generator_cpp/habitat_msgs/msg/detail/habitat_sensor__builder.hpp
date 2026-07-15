// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice

#ifndef HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__BUILDER_HPP_
#define HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "habitat_msgs/msg/detail/habitat_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace habitat_msgs
{

namespace msg
{

namespace builder
{

class Init_HabitatSensor_sensor_id
{
public:
  explicit Init_HabitatSensor_sensor_id(::habitat_msgs::msg::HabitatSensor & msg)
  : msg_(msg)
  {}
  ::habitat_msgs::msg::HabitatSensor sensor_id(::habitat_msgs::msg::HabitatSensor::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::habitat_msgs::msg::HabitatSensor msg_;
};

class Init_HabitatSensor_humidity_percent
{
public:
  explicit Init_HabitatSensor_humidity_percent(::habitat_msgs::msg::HabitatSensor & msg)
  : msg_(msg)
  {}
  Init_HabitatSensor_sensor_id humidity_percent(::habitat_msgs::msg::HabitatSensor::_humidity_percent_type arg)
  {
    msg_.humidity_percent = std::move(arg);
    return Init_HabitatSensor_sensor_id(msg_);
  }

private:
  ::habitat_msgs::msg::HabitatSensor msg_;
};

class Init_HabitatSensor_temperature_c
{
public:
  Init_HabitatSensor_temperature_c()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HabitatSensor_humidity_percent temperature_c(::habitat_msgs::msg::HabitatSensor::_temperature_c_type arg)
  {
    msg_.temperature_c = std::move(arg);
    return Init_HabitatSensor_humidity_percent(msg_);
  }

private:
  ::habitat_msgs::msg::HabitatSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::habitat_msgs::msg::HabitatSensor>()
{
  return habitat_msgs::msg::builder::Init_HabitatSensor_temperature_c();
}

}  // namespace habitat_msgs

#endif  // HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__BUILDER_HPP_
