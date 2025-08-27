// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/ext_sensor_meas__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/detail/block_header__functions.h"
// Member `source`
// Member `sensor_model`
// Member `type`
// Member `obs_info`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
septentrio_gnss_driver__msg__ExtSensorMeas__init(septentrio_gnss_driver__msg__ExtSensorMeas * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__ExtSensorMeas__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__ExtSensorMeas__fini(msg);
    return false;
  }
  // n
  // sb_length
  // source
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->source, 0)) {
    septentrio_gnss_driver__msg__ExtSensorMeas__fini(msg);
    return false;
  }
  // sensor_model
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->sensor_model, 0)) {
    septentrio_gnss_driver__msg__ExtSensorMeas__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->type, 0)) {
    septentrio_gnss_driver__msg__ExtSensorMeas__fini(msg);
    return false;
  }
  // obs_info
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->obs_info, 0)) {
    septentrio_gnss_driver__msg__ExtSensorMeas__fini(msg);
    return false;
  }
  // acceleration_x
  // acceleration_y
  // acceleration_z
  // angular_rate_x
  // angular_rate_y
  // angular_rate_z
  // velocity_x
  // velocity_y
  // velocity_z
  // std_dev_x
  // std_dev_y
  // std_dev_z
  // sensor_temperature
  // zero_velocity_flag
  return true;
}

void
septentrio_gnss_driver__msg__ExtSensorMeas__fini(septentrio_gnss_driver__msg__ExtSensorMeas * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // n
  // sb_length
  // source
  rosidl_runtime_c__uint8__Sequence__fini(&msg->source);
  // sensor_model
  rosidl_runtime_c__uint8__Sequence__fini(&msg->sensor_model);
  // type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->type);
  // obs_info
  rosidl_runtime_c__uint8__Sequence__fini(&msg->obs_info);
  // acceleration_x
  // acceleration_y
  // acceleration_z
  // angular_rate_x
  // angular_rate_y
  // angular_rate_z
  // velocity_x
  // velocity_y
  // velocity_z
  // std_dev_x
  // std_dev_y
  // std_dev_z
  // sensor_temperature
  // zero_velocity_flag
}

bool
septentrio_gnss_driver__msg__ExtSensorMeas__are_equal(const septentrio_gnss_driver__msg__ExtSensorMeas * lhs, const septentrio_gnss_driver__msg__ExtSensorMeas * rhs)
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
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__are_equal(
      &(lhs->block_header), &(rhs->block_header)))
  {
    return false;
  }
  // n
  if (lhs->n != rhs->n) {
    return false;
  }
  // sb_length
  if (lhs->sb_length != rhs->sb_length) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // sensor_model
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->sensor_model), &(rhs->sensor_model)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // obs_info
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->obs_info), &(rhs->obs_info)))
  {
    return false;
  }
  // acceleration_x
  if (lhs->acceleration_x != rhs->acceleration_x) {
    return false;
  }
  // acceleration_y
  if (lhs->acceleration_y != rhs->acceleration_y) {
    return false;
  }
  // acceleration_z
  if (lhs->acceleration_z != rhs->acceleration_z) {
    return false;
  }
  // angular_rate_x
  if (lhs->angular_rate_x != rhs->angular_rate_x) {
    return false;
  }
  // angular_rate_y
  if (lhs->angular_rate_y != rhs->angular_rate_y) {
    return false;
  }
  // angular_rate_z
  if (lhs->angular_rate_z != rhs->angular_rate_z) {
    return false;
  }
  // velocity_x
  if (lhs->velocity_x != rhs->velocity_x) {
    return false;
  }
  // velocity_y
  if (lhs->velocity_y != rhs->velocity_y) {
    return false;
  }
  // velocity_z
  if (lhs->velocity_z != rhs->velocity_z) {
    return false;
  }
  // std_dev_x
  if (lhs->std_dev_x != rhs->std_dev_x) {
    return false;
  }
  // std_dev_y
  if (lhs->std_dev_y != rhs->std_dev_y) {
    return false;
  }
  // std_dev_z
  if (lhs->std_dev_z != rhs->std_dev_z) {
    return false;
  }
  // sensor_temperature
  if (lhs->sensor_temperature != rhs->sensor_temperature) {
    return false;
  }
  // zero_velocity_flag
  if (lhs->zero_velocity_flag != rhs->zero_velocity_flag) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__ExtSensorMeas__copy(
  const septentrio_gnss_driver__msg__ExtSensorMeas * input,
  septentrio_gnss_driver__msg__ExtSensorMeas * output)
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
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__copy(
      &(input->block_header), &(output->block_header)))
  {
    return false;
  }
  // n
  output->n = input->n;
  // sb_length
  output->sb_length = input->sb_length;
  // source
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // sensor_model
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->sensor_model), &(output->sensor_model)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // obs_info
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->obs_info), &(output->obs_info)))
  {
    return false;
  }
  // acceleration_x
  output->acceleration_x = input->acceleration_x;
  // acceleration_y
  output->acceleration_y = input->acceleration_y;
  // acceleration_z
  output->acceleration_z = input->acceleration_z;
  // angular_rate_x
  output->angular_rate_x = input->angular_rate_x;
  // angular_rate_y
  output->angular_rate_y = input->angular_rate_y;
  // angular_rate_z
  output->angular_rate_z = input->angular_rate_z;
  // velocity_x
  output->velocity_x = input->velocity_x;
  // velocity_y
  output->velocity_y = input->velocity_y;
  // velocity_z
  output->velocity_z = input->velocity_z;
  // std_dev_x
  output->std_dev_x = input->std_dev_x;
  // std_dev_y
  output->std_dev_y = input->std_dev_y;
  // std_dev_z
  output->std_dev_z = input->std_dev_z;
  // sensor_temperature
  output->sensor_temperature = input->sensor_temperature;
  // zero_velocity_flag
  output->zero_velocity_flag = input->zero_velocity_flag;
  return true;
}

septentrio_gnss_driver__msg__ExtSensorMeas *
septentrio_gnss_driver__msg__ExtSensorMeas__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__ExtSensorMeas * msg = (septentrio_gnss_driver__msg__ExtSensorMeas *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__ExtSensorMeas), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__ExtSensorMeas));
  bool success = septentrio_gnss_driver__msg__ExtSensorMeas__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__ExtSensorMeas__destroy(septentrio_gnss_driver__msg__ExtSensorMeas * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__ExtSensorMeas__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__init(septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__ExtSensorMeas * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__ExtSensorMeas *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__ExtSensorMeas), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__ExtSensorMeas__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__ExtSensorMeas__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__fini(septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * array)
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
      septentrio_gnss_driver__msg__ExtSensorMeas__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__ExtSensorMeas__Sequence *
septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * array = (septentrio_gnss_driver__msg__ExtSensorMeas__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__ExtSensorMeas__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__destroy(septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__are_equal(const septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * lhs, const septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__ExtSensorMeas__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__ExtSensorMeas__Sequence__copy(
  const septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * input,
  septentrio_gnss_driver__msg__ExtSensorMeas__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__ExtSensorMeas);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__ExtSensorMeas * data =
      (septentrio_gnss_driver__msg__ExtSensorMeas *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__ExtSensorMeas__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__ExtSensorMeas__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__ExtSensorMeas__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
