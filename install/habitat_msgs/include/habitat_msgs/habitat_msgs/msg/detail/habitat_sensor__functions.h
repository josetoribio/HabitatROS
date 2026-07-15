// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice

#ifndef HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__FUNCTIONS_H_
#define HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "habitat_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "habitat_msgs/msg/detail/habitat_sensor__struct.h"

/// Initialize msg/HabitatSensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * habitat_msgs__msg__HabitatSensor
 * )) before or use
 * habitat_msgs__msg__HabitatSensor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
bool
habitat_msgs__msg__HabitatSensor__init(habitat_msgs__msg__HabitatSensor * msg);

/// Finalize msg/HabitatSensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
void
habitat_msgs__msg__HabitatSensor__fini(habitat_msgs__msg__HabitatSensor * msg);

/// Create msg/HabitatSensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * habitat_msgs__msg__HabitatSensor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
habitat_msgs__msg__HabitatSensor *
habitat_msgs__msg__HabitatSensor__create();

/// Destroy msg/HabitatSensor message.
/**
 * It calls
 * habitat_msgs__msg__HabitatSensor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
void
habitat_msgs__msg__HabitatSensor__destroy(habitat_msgs__msg__HabitatSensor * msg);

/// Check for msg/HabitatSensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
bool
habitat_msgs__msg__HabitatSensor__are_equal(const habitat_msgs__msg__HabitatSensor * lhs, const habitat_msgs__msg__HabitatSensor * rhs);

/// Copy a msg/HabitatSensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
bool
habitat_msgs__msg__HabitatSensor__copy(
  const habitat_msgs__msg__HabitatSensor * input,
  habitat_msgs__msg__HabitatSensor * output);

/// Initialize array of msg/HabitatSensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * habitat_msgs__msg__HabitatSensor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
bool
habitat_msgs__msg__HabitatSensor__Sequence__init(habitat_msgs__msg__HabitatSensor__Sequence * array, size_t size);

/// Finalize array of msg/HabitatSensor messages.
/**
 * It calls
 * habitat_msgs__msg__HabitatSensor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
void
habitat_msgs__msg__HabitatSensor__Sequence__fini(habitat_msgs__msg__HabitatSensor__Sequence * array);

/// Create array of msg/HabitatSensor messages.
/**
 * It allocates the memory for the array and calls
 * habitat_msgs__msg__HabitatSensor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
habitat_msgs__msg__HabitatSensor__Sequence *
habitat_msgs__msg__HabitatSensor__Sequence__create(size_t size);

/// Destroy array of msg/HabitatSensor messages.
/**
 * It calls
 * habitat_msgs__msg__HabitatSensor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
void
habitat_msgs__msg__HabitatSensor__Sequence__destroy(habitat_msgs__msg__HabitatSensor__Sequence * array);

/// Check for msg/HabitatSensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
bool
habitat_msgs__msg__HabitatSensor__Sequence__are_equal(const habitat_msgs__msg__HabitatSensor__Sequence * lhs, const habitat_msgs__msg__HabitatSensor__Sequence * rhs);

/// Copy an array of msg/HabitatSensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_habitat_msgs
bool
habitat_msgs__msg__HabitatSensor__Sequence__copy(
  const habitat_msgs__msg__HabitatSensor__Sequence * input,
  habitat_msgs__msg__HabitatSensor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HABITAT_MSGS__MSG__DETAIL__HABITAT_SENSOR__FUNCTIONS_H_
