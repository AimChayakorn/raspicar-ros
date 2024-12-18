// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rc_pwm_pkg:msg/Pwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PWM__TRAITS_HPP_
#define RC_PWM_PKG__MSG__DETAIL__PWM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rc_pwm_pkg/msg/detail/pwm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rc_pwm_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pwm & msg,
  std::ostream & out)
{
  out << "{";
  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pwm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pwm & msg, bool use_flow_style = false)
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
  const rc_pwm_pkg::msg::Pwm & msg,
  std::ostream & out, size_t indentation = 0)
{
  rc_pwm_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rc_pwm_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rc_pwm_pkg::msg::Pwm & msg)
{
  return rc_pwm_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rc_pwm_pkg::msg::Pwm>()
{
  return "rc_pwm_pkg::msg::Pwm";
}

template<>
inline const char * name<rc_pwm_pkg::msg::Pwm>()
{
  return "rc_pwm_pkg/msg/Pwm";
}

template<>
struct has_fixed_size<rc_pwm_pkg::msg::Pwm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rc_pwm_pkg::msg::Pwm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rc_pwm_pkg::msg::Pwm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RC_PWM_PKG__MSG__DETAIL__PWM__TRAITS_HPP_
