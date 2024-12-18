// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rc_pwm_pkg:msg/PubPwm.idl
// generated code does not contain a copyright notice
#include "rc_pwm_pkg/msg/detail/pub_pwm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rc_pwm_pkg__msg__PubPwm__init(rc_pwm_pkg__msg__PubPwm * msg)
{
  if (!msg) {
    return false;
  }
  // left_pwm
  // right_pwm
  return true;
}

void
rc_pwm_pkg__msg__PubPwm__fini(rc_pwm_pkg__msg__PubPwm * msg)
{
  if (!msg) {
    return;
  }
  // left_pwm
  // right_pwm
}

bool
rc_pwm_pkg__msg__PubPwm__are_equal(const rc_pwm_pkg__msg__PubPwm * lhs, const rc_pwm_pkg__msg__PubPwm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_pwm
  if (lhs->left_pwm != rhs->left_pwm) {
    return false;
  }
  // right_pwm
  if (lhs->right_pwm != rhs->right_pwm) {
    return false;
  }
  return true;
}

bool
rc_pwm_pkg__msg__PubPwm__copy(
  const rc_pwm_pkg__msg__PubPwm * input,
  rc_pwm_pkg__msg__PubPwm * output)
{
  if (!input || !output) {
    return false;
  }
  // left_pwm
  output->left_pwm = input->left_pwm;
  // right_pwm
  output->right_pwm = input->right_pwm;
  return true;
}

rc_pwm_pkg__msg__PubPwm *
rc_pwm_pkg__msg__PubPwm__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_pwm_pkg__msg__PubPwm * msg = (rc_pwm_pkg__msg__PubPwm *)allocator.allocate(sizeof(rc_pwm_pkg__msg__PubPwm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rc_pwm_pkg__msg__PubPwm));
  bool success = rc_pwm_pkg__msg__PubPwm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rc_pwm_pkg__msg__PubPwm__destroy(rc_pwm_pkg__msg__PubPwm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rc_pwm_pkg__msg__PubPwm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rc_pwm_pkg__msg__PubPwm__Sequence__init(rc_pwm_pkg__msg__PubPwm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_pwm_pkg__msg__PubPwm * data = NULL;

  if (size) {
    data = (rc_pwm_pkg__msg__PubPwm *)allocator.zero_allocate(size, sizeof(rc_pwm_pkg__msg__PubPwm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rc_pwm_pkg__msg__PubPwm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rc_pwm_pkg__msg__PubPwm__fini(&data[i - 1]);
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
rc_pwm_pkg__msg__PubPwm__Sequence__fini(rc_pwm_pkg__msg__PubPwm__Sequence * array)
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
      rc_pwm_pkg__msg__PubPwm__fini(&array->data[i]);
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

rc_pwm_pkg__msg__PubPwm__Sequence *
rc_pwm_pkg__msg__PubPwm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rc_pwm_pkg__msg__PubPwm__Sequence * array = (rc_pwm_pkg__msg__PubPwm__Sequence *)allocator.allocate(sizeof(rc_pwm_pkg__msg__PubPwm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rc_pwm_pkg__msg__PubPwm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rc_pwm_pkg__msg__PubPwm__Sequence__destroy(rc_pwm_pkg__msg__PubPwm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rc_pwm_pkg__msg__PubPwm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rc_pwm_pkg__msg__PubPwm__Sequence__are_equal(const rc_pwm_pkg__msg__PubPwm__Sequence * lhs, const rc_pwm_pkg__msg__PubPwm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rc_pwm_pkg__msg__PubPwm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rc_pwm_pkg__msg__PubPwm__Sequence__copy(
  const rc_pwm_pkg__msg__PubPwm__Sequence * input,
  rc_pwm_pkg__msg__PubPwm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rc_pwm_pkg__msg__PubPwm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rc_pwm_pkg__msg__PubPwm * data =
      (rc_pwm_pkg__msg__PubPwm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rc_pwm_pkg__msg__PubPwm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rc_pwm_pkg__msg__PubPwm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rc_pwm_pkg__msg__PubPwm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
