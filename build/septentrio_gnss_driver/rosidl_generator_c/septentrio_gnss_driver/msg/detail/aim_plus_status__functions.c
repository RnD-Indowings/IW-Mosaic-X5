// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/AIMPlusStatus.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/aim_plus_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
septentrio_gnss_driver__msg__AIMPlusStatus__init(septentrio_gnss_driver__msg__AIMPlusStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__AIMPlusStatus__fini(msg);
    return false;
  }
  // tow
  // wnc
  // interference
  // spoofing
  // osnma_authenticating
  // galileo_authentic
  // galileo_spoofed
  // gps_authentic
  // gps_spoofed
  return true;
}

void
septentrio_gnss_driver__msg__AIMPlusStatus__fini(septentrio_gnss_driver__msg__AIMPlusStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tow
  // wnc
  // interference
  // spoofing
  // osnma_authenticating
  // galileo_authentic
  // galileo_spoofed
  // gps_authentic
  // gps_spoofed
}

bool
septentrio_gnss_driver__msg__AIMPlusStatus__are_equal(const septentrio_gnss_driver__msg__AIMPlusStatus * lhs, const septentrio_gnss_driver__msg__AIMPlusStatus * rhs)
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
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // wnc
  if (lhs->wnc != rhs->wnc) {
    return false;
  }
  // interference
  if (lhs->interference != rhs->interference) {
    return false;
  }
  // spoofing
  if (lhs->spoofing != rhs->spoofing) {
    return false;
  }
  // osnma_authenticating
  if (lhs->osnma_authenticating != rhs->osnma_authenticating) {
    return false;
  }
  // galileo_authentic
  if (lhs->galileo_authentic != rhs->galileo_authentic) {
    return false;
  }
  // galileo_spoofed
  if (lhs->galileo_spoofed != rhs->galileo_spoofed) {
    return false;
  }
  // gps_authentic
  if (lhs->gps_authentic != rhs->gps_authentic) {
    return false;
  }
  // gps_spoofed
  if (lhs->gps_spoofed != rhs->gps_spoofed) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__AIMPlusStatus__copy(
  const septentrio_gnss_driver__msg__AIMPlusStatus * input,
  septentrio_gnss_driver__msg__AIMPlusStatus * output)
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
  // tow
  output->tow = input->tow;
  // wnc
  output->wnc = input->wnc;
  // interference
  output->interference = input->interference;
  // spoofing
  output->spoofing = input->spoofing;
  // osnma_authenticating
  output->osnma_authenticating = input->osnma_authenticating;
  // galileo_authentic
  output->galileo_authentic = input->galileo_authentic;
  // galileo_spoofed
  output->galileo_spoofed = input->galileo_spoofed;
  // gps_authentic
  output->gps_authentic = input->gps_authentic;
  // gps_spoofed
  output->gps_spoofed = input->gps_spoofed;
  return true;
}

septentrio_gnss_driver__msg__AIMPlusStatus *
septentrio_gnss_driver__msg__AIMPlusStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__AIMPlusStatus * msg = (septentrio_gnss_driver__msg__AIMPlusStatus *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__AIMPlusStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__AIMPlusStatus));
  bool success = septentrio_gnss_driver__msg__AIMPlusStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__AIMPlusStatus__destroy(septentrio_gnss_driver__msg__AIMPlusStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__AIMPlusStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__init(septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__AIMPlusStatus * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__AIMPlusStatus *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__AIMPlusStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__AIMPlusStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__AIMPlusStatus__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__fini(septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * array)
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
      septentrio_gnss_driver__msg__AIMPlusStatus__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__AIMPlusStatus__Sequence *
septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * array = (septentrio_gnss_driver__msg__AIMPlusStatus__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__AIMPlusStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__destroy(septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__are_equal(const septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * lhs, const septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__AIMPlusStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__AIMPlusStatus__Sequence__copy(
  const septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * input,
  septentrio_gnss_driver__msg__AIMPlusStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__AIMPlusStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__AIMPlusStatus * data =
      (septentrio_gnss_driver__msg__AIMPlusStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__AIMPlusStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__AIMPlusStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__AIMPlusStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
