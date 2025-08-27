// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/IMUSetup.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/imu_setup__functions.h"

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

bool
septentrio_gnss_driver__msg__IMUSetup__init(septentrio_gnss_driver__msg__IMUSetup * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__IMUSetup__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__IMUSetup__fini(msg);
    return false;
  }
  // serial_port
  // ant_lever_arm_x
  // ant_lever_arm_y
  // ant_lever_arm_z
  // theta_x
  // theta_y
  // theta_z
  return true;
}

void
septentrio_gnss_driver__msg__IMUSetup__fini(septentrio_gnss_driver__msg__IMUSetup * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // serial_port
  // ant_lever_arm_x
  // ant_lever_arm_y
  // ant_lever_arm_z
  // theta_x
  // theta_y
  // theta_z
}

bool
septentrio_gnss_driver__msg__IMUSetup__are_equal(const septentrio_gnss_driver__msg__IMUSetup * lhs, const septentrio_gnss_driver__msg__IMUSetup * rhs)
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
  // serial_port
  if (lhs->serial_port != rhs->serial_port) {
    return false;
  }
  // ant_lever_arm_x
  if (lhs->ant_lever_arm_x != rhs->ant_lever_arm_x) {
    return false;
  }
  // ant_lever_arm_y
  if (lhs->ant_lever_arm_y != rhs->ant_lever_arm_y) {
    return false;
  }
  // ant_lever_arm_z
  if (lhs->ant_lever_arm_z != rhs->ant_lever_arm_z) {
    return false;
  }
  // theta_x
  if (lhs->theta_x != rhs->theta_x) {
    return false;
  }
  // theta_y
  if (lhs->theta_y != rhs->theta_y) {
    return false;
  }
  // theta_z
  if (lhs->theta_z != rhs->theta_z) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__IMUSetup__copy(
  const septentrio_gnss_driver__msg__IMUSetup * input,
  septentrio_gnss_driver__msg__IMUSetup * output)
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
  // serial_port
  output->serial_port = input->serial_port;
  // ant_lever_arm_x
  output->ant_lever_arm_x = input->ant_lever_arm_x;
  // ant_lever_arm_y
  output->ant_lever_arm_y = input->ant_lever_arm_y;
  // ant_lever_arm_z
  output->ant_lever_arm_z = input->ant_lever_arm_z;
  // theta_x
  output->theta_x = input->theta_x;
  // theta_y
  output->theta_y = input->theta_y;
  // theta_z
  output->theta_z = input->theta_z;
  return true;
}

septentrio_gnss_driver__msg__IMUSetup *
septentrio_gnss_driver__msg__IMUSetup__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__IMUSetup * msg = (septentrio_gnss_driver__msg__IMUSetup *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__IMUSetup), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__IMUSetup));
  bool success = septentrio_gnss_driver__msg__IMUSetup__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__IMUSetup__destroy(septentrio_gnss_driver__msg__IMUSetup * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__IMUSetup__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__IMUSetup__Sequence__init(septentrio_gnss_driver__msg__IMUSetup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__IMUSetup * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__IMUSetup *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__IMUSetup), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__IMUSetup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__IMUSetup__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__IMUSetup__Sequence__fini(septentrio_gnss_driver__msg__IMUSetup__Sequence * array)
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
      septentrio_gnss_driver__msg__IMUSetup__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__IMUSetup__Sequence *
septentrio_gnss_driver__msg__IMUSetup__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__IMUSetup__Sequence * array = (septentrio_gnss_driver__msg__IMUSetup__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__IMUSetup__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__IMUSetup__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__IMUSetup__Sequence__destroy(septentrio_gnss_driver__msg__IMUSetup__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__IMUSetup__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__IMUSetup__Sequence__are_equal(const septentrio_gnss_driver__msg__IMUSetup__Sequence * lhs, const septentrio_gnss_driver__msg__IMUSetup__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__IMUSetup__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__IMUSetup__Sequence__copy(
  const septentrio_gnss_driver__msg__IMUSetup__Sequence * input,
  septentrio_gnss_driver__msg__IMUSetup__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__IMUSetup);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__IMUSetup * data =
      (septentrio_gnss_driver__msg__IMUSetup *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__IMUSetup__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__IMUSetup__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__IMUSetup__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
