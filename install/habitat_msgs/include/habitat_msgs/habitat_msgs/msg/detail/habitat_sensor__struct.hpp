// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice

#ifndef HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__STRUCT_HPP_
#define HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__habitat_msgs__msg__HabitatSensor __attribute__((deprecated))
#else
# define DEPRECATED__habitat_msgs__msg__HabitatSensor __declspec(deprecated)
#endif

namespace habitat_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HabitatSensor_
{
  using Type = HabitatSensor_<ContainerAllocator>;

  explicit HabitatSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature_c = 0.0f;
      this->humidity_percent = 0.0f;
      this->sensor_id = "";
    }
  }

  explicit HabitatSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature_c = 0.0f;
      this->humidity_percent = 0.0f;
      this->sensor_id = "";
    }
  }

  // field types and members
  using _temperature_c_type =
    float;
  _temperature_c_type temperature_c;
  using _humidity_percent_type =
    float;
  _humidity_percent_type humidity_percent;
  using _sensor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_id_type sensor_id;

  // setters for named parameter idiom
  Type & set__temperature_c(
    const float & _arg)
  {
    this->temperature_c = _arg;
    return *this;
  }
  Type & set__humidity_percent(
    const float & _arg)
  {
    this->humidity_percent = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    habitat_msgs::msg::HabitatSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const habitat_msgs::msg::HabitatSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      habitat_msgs::msg::HabitatSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      habitat_msgs::msg::HabitatSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__habitat_msgs__msg__HabitatSensor
    std::shared_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__habitat_msgs__msg__HabitatSensor
    std::shared_ptr<habitat_msgs::msg::HabitatSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HabitatSensor_ & other) const
  {
    if (this->temperature_c != other.temperature_c) {
      return false;
    }
    if (this->humidity_percent != other.humidity_percent) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const HabitatSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HabitatSensor_

// alias to use template instance with default allocator
using HabitatSensor =
  habitat_msgs::msg::HabitatSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace habitat_msgs

#endif  // HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__STRUCT_HPP_
