// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from habitat_msgs:msg/HabitatSensor.idl
// generated code does not contain a copyright notice
#include "habitat_msgs/msg/detail/habitat_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensor_id`
#include "rosidl_runtime_c/string_functions.h"

bool
habitat_msgs__msg__HabitatSensor__init(habitat_msgs__msg__HabitatSensor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    habitat_msgs__msg__HabitatSensor__fini(msg);
    return false;
  }
  // temperature_c
  // humidity_percent
  // sensor_id
  if (!rosidl_runtime_c__String__init(&msg->sensor_id)) {
    habitat_msgs__msg__HabitatSensor__fini(msg);
    return false;
  }
  return true;
}

void
habitat_msgs__msg__HabitatSensor__fini(habitat_msgs__msg__HabitatSensor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // temperature_c
  // humidity_percent
  // sensor_id
  rosidl_runtime_c__String__fini(&msg->sensor_id);
}

bool
habitat_msgs__msg__HabitatSensor__are_equal(const habitat_msgs__msg__HabitatSensor * lhs, const habitat_msgs__msg__HabitatSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // temperature_c
  if (lhs->temperature_c != rhs->temperature_c) {
    return false;
  }
  // humidity_percent
  if (lhs->humidity_percent != rhs->humidity_percent) {
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_id), &(rhs->sensor_id)))
  {
    return false;
  }
  return true;
}

bool
habitat_msgs__msg__HabitatSensor__copy(
  const habitat_msgs__msg__HabitatSensor * input,
  habitat_msgs__msg__HabitatSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // temperature_c
  output->temperature_c = input->temperature_c;
  // humidity_percent
  output->humidity_percent = input->humidity_percent;
  // sensor_id
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_id), &(output->sensor_id)))
  {
    return false;
  }
  return true;
}

habitat_msgs__msg__HabitatSensor *
habitat_msgs__msg__HabitatSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  habitat_msgs__msg__HabitatSensor * msg = (habitat_msgs__msg__HabitatSensor *)allocator.allocate(sizeof(habitat_msgs__msg__HabitatSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(habitat_msgs__msg__HabitatSensor));
  bool success = habitat_msgs__msg__HabitatSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
habitat_msgs__msg__HabitatSensor__destroy(habitat_msgs__msg__HabitatSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    habitat_msgs__msg__HabitatSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
habitat_msgs__msg__HabitatSensor__Sequence__init(habitat_msgs__msg__HabitatSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  habitat_msgs__msg__HabitatSensor * data = NULL;

  if (size) {
    data = (habitat_msgs__msg__HabitatSensor *)allocator.zero_allocate(size, sizeof(habitat_msgs__msg__HabitatSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = habitat_msgs__msg__HabitatSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        habitat_msgs__msg__HabitatSensor__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
habitat_msgs__msg__HabitatSensor__Sequence__fini(habitat_msgs__msg__HabitatSensor__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      habitat_msgs__msg__HabitatSensor__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

habitat_msgs__msg__HabitatSensor__Sequence *
habitat_msgs__msg__HabitatSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  habitat_msgs__msg__HabitatSensor__Sequence * array = (habitat_msgs__msg__HabitatSensor__Sequence *)allocator.allocate(sizeof(habitat_msgs__msg__HabitatSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = habitat_msgs__msg__HabitatSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
habitat_msgs__msg__HabitatSensor__Sequence__destroy(habitat_msgs__msg__HabitatSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    habitat_msgs__msg__HabitatSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
habitat_msgs__msg__HabitatSensor__Sequence__are_equal(const habitat_msgs__msg__HabitatSensor__Sequence * lhs, const habitat_msgs__msg__HabitatSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!habitat_msgs__msg__HabitatSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
habitat_msgs__msg__HabitatSensor__Sequence__copy(
  const habitat_msgs__msg__HabitatSensor__Sequence * input,
  habitat_msgs__msg__HabitatSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(habitat_msgs__msg__HabitatSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    habitat_msgs__msg__HabitatSensor * data =
      (habitat_msgs__msg__HabitatSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!habitat_msgs__msg__HabitatSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          habitat_msgs__msg__HabitatSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!habitat_msgs__msg__HabitatSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
