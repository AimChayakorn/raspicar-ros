// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rc_pwm_pkg:msg/PubPwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PUB_PWM__BUILDER_HPP_
#define RC_PWM_PKG__MSG__DETAIL__PUB_PWM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rc_pwm_pkg/msg/detail/pub_pwm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rc_pwm_pkg
{

namespace msg
{

namespace builder
{

class Init_PubPwm_right_pwm
{
public:
  explicit Init_PubPwm_right_pwm(::rc_pwm_pkg::msg::PubPwm & msg)
  : msg_(msg)
  {}
  ::rc_pwm_pkg::msg::PubPwm right_pwm(::rc_pwm_pkg::msg::PubPwm::_right_pwm_type arg)
  {
    msg_.right_pwm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rc_pwm_pkg::msg::PubPwm msg_;
};

class Init_PubPwm_left_pwm
{
public:
  Init_PubPwm_left_pwm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PubPwm_right_pwm left_pwm(::rc_pwm_pkg::msg::PubPwm::_left_pwm_type arg)
  {
    msg_.left_pwm = std::move(arg);
    return Init_PubPwm_right_pwm(msg_);
  }

private:
  ::rc_pwm_pkg::msg::PubPwm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rc_pwm_pkg::msg::PubPwm>()
{
  return rc_pwm_pkg::msg::builder::Init_PubPwm_left_pwm();
}

}  // namespace rc_pwm_pkg

#endif  // RC_PWM_PKG__MSG__DETAIL__PUB_PWM__BUILDER_HPP_
