// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__init(septentrio_gnss_driver__msg__MeasEpochChannelType2 * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // lock_time
  // cn0
  // offsets_msb
  // carrier_msb
  // obs_info
  // code_offset_lsb
  // carrier_lsb
  // doppler_offset_lsb
  return true;
}

void
septentrio_gnss_driver__msg__MeasEpochChannelType2__fini(septentrio_gnss_driver__msg__MeasEpochChannelType2 * msg)
{
  if (!msg) {
    return;
  }
  // type
  // lock_time
  // cn0
  // offsets_msb
  // carrier_msb
  // obs_info
  // code_offset_lsb
  // carrier_lsb
  // doppler_offset_lsb
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__are_equal(const septentrio_gnss_driver__msg__MeasEpochChannelType2 * lhs, const septentrio_gnss_driver__msg__MeasEpochChannelType2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // lock_time
  if (lhs->lock_time != rhs->lock_time) {
    return false;
  }
  // cn0
  if (lhs->cn0 != rhs->cn0) {
    return false;
  }
  // offsets_msb
  if (lhs->offsets_msb != rhs->offsets_msb) {
    return false;
  }
  // carrier_msb
  if (lhs->carrier_msb != rhs->carrier_msb) {
    return false;
  }
  // obs_info
  if (lhs->obs_info != rhs->obs_info) {
    return false;
  }
  // code_offset_lsb
  if (lhs->code_offset_lsb != rhs->code_offset_lsb) {
    return false;
  }
  // carrier_lsb
  if (lhs->carrier_lsb != rhs->carrier_lsb) {
    return false;
  }
  // doppler_offset_lsb
  if (lhs->doppler_offset_lsb != rhs->doppler_offset_lsb) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__copy(
  const septentrio_gnss_driver__msg__MeasEpochChannelType2 * input,
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // lock_time
  output->lock_time = input->lock_time;
  // cn0
  output->cn0 = input->cn0;
  // offsets_msb
  output->offsets_msb = input->offsets_msb;
  // carrier_msb
  output->carrier_msb = input->carrier_msb;
  // obs_info
  output->obs_info = input->obs_info;
  // code_offset_lsb
  output->code_offset_lsb = input->code_offset_lsb;
  // carrier_lsb
  output->carrier_lsb = input->carrier_lsb;
  // doppler_offset_lsb
  output->doppler_offset_lsb = input->doppler_offset_lsb;
  return true;
}

septentrio_gnss_driver__msg__MeasEpochChannelType2 *
septentrio_gnss_driver__msg__MeasEpochChannelType2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * msg = (septentrio_gnss_driver__msg__MeasEpochChannelType2 *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType2));
  bool success = septentrio_gnss_driver__msg__MeasEpochChannelType2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__MeasEpochChannelType2__destroy(septentrio_gnss_driver__msg__MeasEpochChannelType2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__MeasEpochChannelType2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__init(septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__MeasEpochChannelType2 *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__MeasEpochChannelType2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__MeasEpochChannelType2__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__fini(septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * array)
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
      septentrio_gnss_driver__msg__MeasEpochChannelType2__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence *
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * array = (septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__destroy(septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__are_equal(const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * lhs, const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__MeasEpochChannelType2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__copy(
  const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * input,
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__MeasEpochChannelType2 * data =
      (septentrio_gnss_driver__msg__MeasEpochChannelType2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__MeasEpochChannelType2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__MeasEpochChannelType2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__MeasEpochChannelType2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
