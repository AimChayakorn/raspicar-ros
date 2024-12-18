// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rc_pwm_pkg:msg/PubPwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PUB_PWM__TRAITS_HPP_
#define RC_PWM_PKG__MSG__DETAIL__PUB_PWM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rc_pwm_pkg/msg/detail/pub_pwm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rc_pwm_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PubPwm & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_pwm
  {
    out << "left_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_pwm, out);
    out << ", ";
  }

  // member: right_pwm
  {
    out << "right_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_pwm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PubPwm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_pwm, out);
    out << "\n";
  }

  // member: right_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_pwm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PubPwm & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rc_pwm_pkg

namespace rosidl_generator_traits
{

[[deprecated("use rc_pwm_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rc_pwm_pkg::msg::PubPwm & msg,
  std::ostream & out, size_t indentation = 0)
{
  rc_pwm_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rc_pwm_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rc_pwm_pkg::msg::PubPwm & msg)
{
  return rc_pwm_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rc_pwm_pkg::msg::PubPwm>()
{
  return "rc_pwm_pkg::msg::PubPwm";
}

template<>
inline const char * name<rc_pwm_pkg::msg::PubPwm>()
{
  return "rc_pwm_pkg/msg/PubPwm";
}

template<>
struct has_fixed_size<rc_pwm_pkg::msg::PubPwm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rc_pwm_pkg::msg::PubPwm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rc_pwm_pkg::msg::PubPwm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RC_PWM_PKG__MSG__DETAIL__PUB_PWM__TRAITS_HPP_
