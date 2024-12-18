// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rc_pwm_pkg:msg/Pwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PWM__STRUCT_H_
#define RC_PWM_PKG__MSG__DETAIL__PWM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pwm in the package rc_pwm_pkg.
typedef struct rc_pwm_pkg__msg__Pwm
{
  int64_t code;
  int64_t value;
} rc_pwm_pkg__msg__Pwm;

// Struct for a sequence of rc_pwm_pkg__msg__Pwm.
typedef struct rc_pwm_pkg__msg__Pwm__Sequence
{
  rc_pwm_pkg__msg__Pwm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rc_pwm_pkg__msg__Pwm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RC_PWM_PKG__MSG__DETAIL__PWM__STRUCT_H_
