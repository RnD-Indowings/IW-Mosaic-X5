// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/RFBand.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/rf_band__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
septentrio_gnss_driver__msg__RFBand__init(septentrio_gnss_driver__msg__RFBand * msg)
{
  if (!msg) {
    return false;
  }
  // frequency
  // bandwidth
  // info
  return true;
}

void
septentrio_gnss_driver__msg__RFBand__fini(septentrio_gnss_driver__msg__RFBand * msg)
{
  if (!msg) {
    return;
  }
  // frequency
  // bandwidth
  // info
}

bool
septentrio_gnss_driver__msg__RFBand__are_equal(const septentrio_gnss_driver__msg__RFBand * lhs, const septentrio_gnss_driver__msg__RFBand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // bandwidth
  if (lhs->bandwidth != rhs->bandwidth) {
    return false;
  }
  // info
  if (lhs->info != rhs->info) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__RFBand__copy(
  const septentrio_gnss_driver__msg__RFBand * input,
  septentrio_gnss_driver__msg__RFBand * output)
{
  if (!input || !output) {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  // bandwidth
  output->bandwidth = input->bandwidth;
  // info
  output->info = input->info;
  return true;
}

septentrio_gnss_driver__msg__RFBand *
septentrio_gnss_driver__msg__RFBand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__RFBand * msg = (septentrio_gnss_driver__msg__RFBand *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__RFBand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__RFBand));
  bool success = septentrio_gnss_driver__msg__RFBand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__RFBand__destroy(septentrio_gnss_driver__msg__RFBand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__RFBand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__RFBand__Sequence__init(septentrio_gnss_driver__msg__RFBand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__RFBand * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__RFBand *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__RFBand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__RFBand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__RFBand__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__RFBand__Sequence__fini(septentrio_gnss_driver__msg__RFBand__Sequence * array)
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
      septentrio_gnss_driver__msg__RFBand__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__RFBand__Sequence *
septentrio_gnss_driver__msg__RFBand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__RFBand__Sequence * array = (septentrio_gnss_driver__msg__RFBand__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__RFBand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__RFBand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__RFBand__Sequence__destroy(septentrio_gnss_driver__msg__RFBand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__RFBand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__RFBand__Sequence__are_equal(const septentrio_gnss_driver__msg__RFBand__Sequence * lhs, const septentrio_gnss_driver__msg__RFBand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__RFBand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__RFBand__Sequence__copy(
  const septentrio_gnss_driver__msg__RFBand__Sequence * input,
  septentrio_gnss_driver__msg__RFBand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__RFBand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__RFBand * data =
      (septentrio_gnss_driver__msg__RFBand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__RFBand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__RFBand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__RFBand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
