// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rc_pwm_pkg:msg/Pwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PWM__BUILDER_HPP_
#define RC_PWM_PKG__MSG__DETAIL__PWM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rc_pwm_pkg/msg/detail/pwm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rc_pwm_pkg
{

namespace msg
{

namespace builder
{

class Init_Pwm_value
{
public:
  explicit Init_Pwm_value(::rc_pwm_pkg::msg::Pwm & msg)
  : msg_(msg)
  {}
  ::rc_pwm_pkg::msg::Pwm value(::rc_pwm_pkg::msg::Pwm::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rc_pwm_pkg::msg::Pwm msg_;
};

class Init_Pwm_code
{
public:
  Init_Pwm_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pwm_value code(::rc_pwm_pkg::msg::Pwm::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Pwm_value(msg_);
  }

private:
  ::rc_pwm_pkg::msg::Pwm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rc_pwm_pkg::msg::Pwm>()
{
  return rc_pwm_pkg::msg::builder::Init_Pwm_code();
}

}  // namespace rc_pwm_pkg

#endif  // RC_PWM_PKG__MSG__DETAIL__PWM__BUILDER_HPP_
