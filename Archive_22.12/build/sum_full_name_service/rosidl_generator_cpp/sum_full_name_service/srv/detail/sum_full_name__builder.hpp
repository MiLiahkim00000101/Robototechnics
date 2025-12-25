// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sum_full_name_service/srv/sum_full_name.hpp"


#ifndef SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__BUILDER_HPP_
#define SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sum_full_name_service/srv/detail/sum_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sum_full_name_service
{

namespace srv
{

namespace builder
{

class Init_SumFullName_Request_patronymic
{
public:
  explicit Init_SumFullName_Request_patronymic(::sum_full_name_service::srv::SumFullName_Request & msg)
  : msg_(msg)
  {}
  ::sum_full_name_service::srv::SumFullName_Request patronymic(::sum_full_name_service::srv::SumFullName_Request::_patronymic_type arg)
  {
    msg_.patronymic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sum_full_name_service::srv::SumFullName_Request msg_;
};

class Init_SumFullName_Request_s_name
{
public:
  explicit Init_SumFullName_Request_s_name(::sum_full_name_service::srv::SumFullName_Request & msg)
  : msg_(msg)
  {}
  Init_SumFullName_Request_patronymic s_name(::sum_full_name_service::srv::SumFullName_Request::_s_name_type arg)
  {
    msg_.s_name = std::move(arg);
    return Init_SumFullName_Request_patronymic(msg_);
  }

private:
  ::sum_full_name_service::srv::SumFullName_Request msg_;
};

class Init_SumFullName_Request_f_name
{
public:
  Init_SumFullName_Request_f_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SumFullName_Request_s_name f_name(::sum_full_name_service::srv::SumFullName_Request::_f_name_type arg)
  {
    msg_.f_name = std::move(arg);
    return Init_SumFullName_Request_s_name(msg_);
  }

private:
  ::sum_full_name_service::srv::SumFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sum_full_name_service::srv::SumFullName_Request>()
{
  return sum_full_name_service::srv::builder::Init_SumFullName_Request_f_name();
}

}  // namespace sum_full_name_service


namespace sum_full_name_service
{

namespace srv
{

namespace builder
{

class Init_SumFullName_Response_full_name
{
public:
  Init_SumFullName_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sum_full_name_service::srv::SumFullName_Response full_name(::sum_full_name_service::srv::SumFullName_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sum_full_name_service::srv::SumFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sum_full_name_service::srv::SumFullName_Response>()
{
  return sum_full_name_service::srv::builder::Init_SumFullName_Response_full_name();
}

}  // namespace sum_full_name_service


namespace sum_full_name_service
{

namespace srv
{

namespace builder
{

class Init_SumFullName_Event_response
{
public:
  explicit Init_SumFullName_Event_response(::sum_full_name_service::srv::SumFullName_Event & msg)
  : msg_(msg)
  {}
  ::sum_full_name_service::srv::SumFullName_Event response(::sum_full_name_service::srv::SumFullName_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sum_full_name_service::srv::SumFullName_Event msg_;
};

class Init_SumFullName_Event_request
{
public:
  explicit Init_SumFullName_Event_request(::sum_full_name_service::srv::SumFullName_Event & msg)
  : msg_(msg)
  {}
  Init_SumFullName_Event_response request(::sum_full_name_service::srv::SumFullName_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SumFullName_Event_response(msg_);
  }

private:
  ::sum_full_name_service::srv::SumFullName_Event msg_;
};

class Init_SumFullName_Event_info
{
public:
  Init_SumFullName_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SumFullName_Event_request info(::sum_full_name_service::srv::SumFullName_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SumFullName_Event_request(msg_);
  }

private:
  ::sum_full_name_service::srv::SumFullName_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sum_full_name_service::srv::SumFullName_Event>()
{
  return sum_full_name_service::srv::builder::Init_SumFullName_Event_info();
}

}  // namespace sum_full_name_service

#endif  // SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__BUILDER_HPP_
