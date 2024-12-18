// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rc_pwm_pkg:msg/Pwm.idl
// generated code does not contain a copyright notice
#include "rc_pwm_pkg/msg/detail/pwm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rc_pwm_pkg__msg__Pwm__init(rc_pwm_pkg__msg__Pwm * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // value
  return true;
}

void
rc_pwm_pkg__msg__Pwm__fini(rc_pwm_pkg__msg__Pwm * msg)
{
  if (!msg) {
    return;
  }
  // code
  // value
}

bool
rc_pwm_pkg__msg__Pwm__are_equal(const rc_pwm_pkg__msg__Pwm * lhs, const rc_pwm_pkg__msg__Pwm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
rc_pwm_pkg__msg__Pwm__copy(
  const rc_pwm_pkg__msg__Pwm * input,
  rc_pwm_pkg__msg__Pwm * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // value
  output->value = input->value;
  return true;
}

rc_pwm_pkg__msg__Pwm *
rc_pwm_pkg__msg__Pwm__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_pwm_pkg__msg__Pwm * msg = (rc_pwm_pkg__msg__Pwm *)allocator.allocate(sizeof(rc_pwm_pkg__msg__Pwm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rc_pwm_pkg__msg__Pwm));
  bool success = rc_pwm_pkg__msg__Pwm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rc_pwm_pkg__msg__Pwm__destroy(rc_pwm_pkg__msg__Pwm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rc_pwm_pkg__msg__Pwm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rc_pwm_pkg__msg__Pwm__Sequence__init(rc_pwm_pkg__msg__Pwm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_pwm_pkg__msg__Pwm * data = NULL;

  if (size) {
    data = (rc_pwm_pkg__msg__Pwm *)allocator.zero_allocate(size, sizeof(rc_pwm_pkg__msg__Pwm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rc_pwm_pkg__msg__Pwm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rc_pwm_pkg__msg__Pwm__fini(&data[i - 1]);
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
rc_pwm_pkg__msg__Pwm__Sequence__fini(rc_pwm_pkg__msg__Pwm__Sequence * array)
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
      rc_pwm_pkg__msg__Pwm__fini(&array->data[i]);
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

rc_pwm_pkg__msg__Pwm__Sequence *
rc_pwm_pkg__msg__Pwm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_pwm_pkg__msg__Pwm__Sequence * array = (rc_pwm_pkg__msg__Pwm__Sequence *)allocator.allocate(sizeof(rc_pwm_pkg__msg__Pwm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rc_pwm_pkg__msg__Pwm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rc_pwm_pkg__msg__Pwm__Sequence__destroy(rc_pwm_pkg__msg__Pwm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rc_pwm_pkg__msg__Pwm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rc_pwm_pkg__msg__Pwm__Sequence__are_equal(const rc_pwm_pkg__msg__Pwm__Sequence * lhs, const rc_pwm_pkg__msg__Pwm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rc_pwm_pkg__msg__Pwm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rc_pwm_pkg__msg__Pwm__Sequence__copy(
  const rc_pwm_pkg__msg__Pwm__Sequence * input,
  rc_pwm_pkg__msg__Pwm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rc_pwm_pkg__msg__Pwm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rc_pwm_pkg__msg__Pwm * data =
      (rc_pwm_pkg__msg__Pwm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rc_pwm_pkg__msg__Pwm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rc_pwm_pkg__msg__Pwm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rc_pwm_pkg__msg__Pwm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
