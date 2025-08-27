// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type2`
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__functions.h"

bool
septentrio_gnss_driver__msg__MeasEpochChannelType1__init(septentrio_gnss_driver__msg__MeasEpochChannelType1 * msg)
{
  if (!msg) {
    return false;
  }
  // rx_channel
  // type
  // sv_id
  // misc
  // code_lsb
  // doppler
  // carrier_lsb
  // carrier_msb
  // cn0
  // lock_time
  // obs_info
  // n2
  // type2
  if (!septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__init(&msg->type2, 0)) {
    septentrio_gnss_driver__msg__MeasEpochChannelType1__fini(msg);
    return false;
  }
  return true;
}

void
septentrio_gnss_driver__msg__MeasEpochChannelType1__fini(septentrio_gnss_driver__msg__MeasEpochChannelType1 * msg)
{
  if (!msg) {
    return;
  }
  // rx_channel
  // type
  // sv_id
  // misc
  // code_lsb
  // doppler
  // carrier_lsb
  // carrier_msb
  // cn0
  // lock_time
  // obs_info
  // n2
  // type2
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__fini(&msg->type2);
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType1__are_equal(const septentrio_gnss_driver__msg__MeasEpochChannelType1 * lhs, const septentrio_gnss_driver__msg__MeasEpochChannelType1 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rx_channel
  if (lhs->rx_channel != rhs->rx_channel) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // sv_id
  if (lhs->sv_id != rhs->sv_id) {
    return false;
  }
  // misc
  if (lhs->misc != rhs->misc) {
    return false;
  }
  // code_lsb
  if (lhs->code_lsb != rhs->code_lsb) {
    return false;
  }
  // doppler
  if (lhs->doppler != rhs->doppler) {
    return false;
  }
  // carrier_lsb
  if (lhs->carrier_lsb != rhs->carrier_lsb) {
    return false;
  }
  // carrier_msb
  if (lhs->carrier_msb != rhs->carrier_msb) {
    return false;
  }
  // cn0
  if (lhs->cn0 != rhs->cn0) {
    return false;
  }
  // lock_time
  if (lhs->lock_time != rhs->lock_time) {
    return false;
  }
  // obs_info
  if (lhs->obs_info != rhs->obs_info) {
    return false;
  }
  // n2
  if (lhs->n2 != rhs->n2) {
    return false;
  }
  // type2
  if (!septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__are_equal(
      &(lhs->type2), &(rhs->type2)))
  {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType1__copy(
  const septentrio_gnss_driver__msg__MeasEpochChannelType1 * input,
  septentrio_gnss_driver__msg__MeasEpochChannelType1 * output)
{
  if (!input || !output) {
    return false;
  }
  // rx_channel
  output->rx_channel = input->rx_channel;
  // type
  output->type = input->type;
  // sv_id
  output->sv_id = input->sv_id;
  // misc
  output->misc = input->misc;
  // code_lsb
  output->code_lsb = input->code_lsb;
  // doppler
  output->doppler = input->doppler;
  // carrier_lsb
  output->carrier_lsb = input->carrier_lsb;
  // carrier_msb
  output->carrier_msb = input->carrier_msb;
  // cn0
  output->cn0 = input->cn0;
  // lock_time
  output->lock_time = input->lock_time;
  // obs_info
  output->obs_info = input->obs_info;
  // n2
  output->n2 = input->n2;
  // type2
  if (!septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__copy(
      &(input->type2), &(output->type2)))
  {
    return false;
  }
  return true;
}

septentrio_gnss_driver__msg__MeasEpochChannelType1 *
septentrio_gnss_driver__msg__MeasEpochChannelType1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpochChannelType1 * msg = (septentrio_gnss_driver__msg__MeasEpochChannelType1 *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType1));
  bool success = septentrio_gnss_driver__msg__MeasEpochChannelType1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__MeasEpochChannelType1__destroy(septentrio_gnss_driver__msg__MeasEpochChannelType1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__MeasEpochChannelType1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__init(septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpochChannelType1 * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__MeasEpochChannelType1 *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__MeasEpochChannelType1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__MeasEpochChannelType1__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__fini(septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * array)
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
      septentrio_gnss_driver__msg__MeasEpochChannelType1__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence *
septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * array = (septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__destroy(septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__are_equal(const septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * lhs, const septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__copy(
  const septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * input,
  septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__MeasEpochChannelType1 * data =
      (septentrio_gnss_driver__msg__MeasEpochChannelType1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__MeasEpochChannelType1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
