// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rc_pwm_pkg:msg/PubPwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PUB_PWM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RC_PWM_PKG__MSG__DETAIL__PUB_PWM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rc_pwm_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rc_pwm_pkg/msg/detail/pub_pwm__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rc_pwm_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
cdr_serialize(
  const rc_pwm_pkg::msg::PubPwm & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rc_pwm_pkg::msg::PubPwm & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
get_serialized_size(
  const rc_pwm_pkg::msg::PubPwm & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
max_serialized_size_PubPwm(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rc_pwm_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rc_pwm_pkg, msg, PubPwm)();

#ifdef __cplusplus
}
#endif

#endif  // RC_PWM_PKG__MSG__DETAIL__PUB_PWM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
