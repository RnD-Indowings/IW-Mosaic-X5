// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/BlockHeader.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/block_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
septentrio_gnss_driver__msg__BlockHeader__init(septentrio_gnss_driver__msg__BlockHeader * msg)
{
  if (!msg) {
    return false;
  }
  // sync_1
  msg->sync_1 = 36;
  // sync_2
  msg->sync_2 = 64;
  // crc
  // id
  // revision
  // length
  // tow
  msg->tow = 4294967295ul;
  // wnc
  msg->wnc = 65535;
  return true;
}

void
septentrio_gnss_driver__msg__BlockHeader__fini(septentrio_gnss_driver__msg__BlockHeader * msg)
{
  if (!msg) {
    return;
  }
  // sync_1
  // sync_2
  // crc
  // id
  // revision
  // length
  // tow
  // wnc
}

bool
septentrio_gnss_driver__msg__BlockHeader__are_equal(const septentrio_gnss_driver__msg__BlockHeader * lhs, const septentrio_gnss_driver__msg__BlockHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sync_1
  if (lhs->sync_1 != rhs->sync_1) {
    return false;
  }
  // sync_2
  if (lhs->sync_2 != rhs->sync_2) {
    return false;
  }
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // wnc
  if (lhs->wnc != rhs->wnc) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__BlockHeader__copy(
  const septentrio_gnss_driver__msg__BlockHeader * input,
  septentrio_gnss_driver__msg__BlockHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // sync_1
  output->sync_1 = input->sync_1;
  // sync_2
  output->sync_2 = input->sync_2;
  // crc
  output->crc = input->crc;
  // id
  output->id = input->id;
  // revision
  output->revision = input->revision;
  // length
  output->length = input->length;
  // tow
  output->tow = input->tow;
  // wnc
  output->wnc = input->wnc;
  return true;
}

septentrio_gnss_driver__msg__BlockHeader *
septentrio_gnss_driver__msg__BlockHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__BlockHeader * msg = (septentrio_gnss_driver__msg__BlockHeader *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__BlockHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__BlockHeader));
  bool success = septentrio_gnss_driver__msg__BlockHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__BlockHeader__destroy(septentrio_gnss_driver__msg__BlockHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__BlockHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__BlockHeader__Sequence__init(septentrio_gnss_driver__msg__BlockHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__BlockHeader * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__BlockHeader *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__BlockHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__BlockHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__BlockHeader__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__BlockHeader__Sequence__fini(septentrio_gnss_driver__msg__BlockHeader__Sequence * array)
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
      septentrio_gnss_driver__msg__BlockHeader__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__BlockHeader__Sequence *
septentrio_gnss_driver__msg__BlockHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__BlockHeader__Sequence * array = (septentrio_gnss_driver__msg__BlockHeader__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__BlockHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__BlockHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__BlockHeader__Sequence__destroy(septentrio_gnss_driver__msg__BlockHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__BlockHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__BlockHeader__Sequence__are_equal(const septentrio_gnss_driver__msg__BlockHeader__Sequence * lhs, const septentrio_gnss_driver__msg__BlockHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__BlockHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__BlockHeader__Sequence__copy(
  const septentrio_gnss_driver__msg__BlockHeader__Sequence * input,
  septentrio_gnss_driver__msg__BlockHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__BlockHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__BlockHeader * data =
      (septentrio_gnss_driver__msg__BlockHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__BlockHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__BlockHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__BlockHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
