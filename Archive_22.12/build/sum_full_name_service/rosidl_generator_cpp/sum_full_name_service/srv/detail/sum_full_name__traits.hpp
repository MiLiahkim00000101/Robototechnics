// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sum_full_name_service/srv/sum_full_name.hpp"


#ifndef SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__TRAITS_HPP_
#define SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sum_full_name_service/srv/detail/sum_full_name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sum_full_name_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const SumFullName_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: f_name
  {
    out << "f_name: ";
    rosidl_generator_traits::value_to_yaml(msg.f_name, out);
    out << ", ";
  }

  // member: s_name
  {
    out << "s_name: ";
    rosidl_generator_traits::value_to_yaml(msg.s_name, out);
    out << ", ";
  }

  // member: patronymic
  {
    out << "patronymic: ";
    rosidl_generator_traits::value_to_yaml(msg.patronymic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SumFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_name: ";
    rosidl_generator_traits::value_to_yaml(msg.f_name, out);
    out << "\n";
  }

  // member: s_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_name: ";
    rosidl_generator_traits::value_to_yaml(msg.s_name, out);
    out << "\n";
  }

  // member: patronymic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "patronymic: ";
    rosidl_generator_traits::value_to_yaml(msg.patronymic, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SumFullName_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sum_full_name_service

namespace rosidl_generator_traits
{

[[deprecated("use sum_full_name_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sum_full_name_service::srv::SumFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sum_full_name_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sum_full_name_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const sum_full_name_service::srv::SumFullName_Request & msg)
{
  return sum_full_name_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sum_full_name_service::srv::SumFullName_Request>()
{
  return "sum_full_name_service::srv::SumFullName_Request";
}

template<>
inline const char * name<sum_full_name_service::srv::SumFullName_Request>()
{
  return "sum_full_name_service/srv/SumFullName_Request";
}

template<>
struct has_fixed_size<sum_full_name_service::srv::SumFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sum_full_name_service::srv::SumFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sum_full_name_service::srv::SumFullName_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sum_full_name_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const SumFullName_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_name
  {
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SumFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SumFullName_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sum_full_name_service

namespace rosidl_generator_traits
{

[[deprecated("use sum_full_name_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sum_full_name_service::srv::SumFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sum_full_name_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sum_full_name_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const sum_full_name_service::srv::SumFullName_Response & msg)
{
  return sum_full_name_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sum_full_name_service::srv::SumFullName_Response>()
{
  return "sum_full_name_service::srv::SumFullName_Response";
}

template<>
inline const char * name<sum_full_name_service::srv::SumFullName_Response>()
{
  return "sum_full_name_service/srv/SumFullName_Response";
}

template<>
struct has_fixed_size<sum_full_name_service::srv::SumFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sum_full_name_service::srv::SumFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sum_full_name_service::srv::SumFullName_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace sum_full_name_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const SumFullName_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SumFullName_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SumFullName_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sum_full_name_service

namespace rosidl_generator_traits
{

[[deprecated("use sum_full_name_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sum_full_name_service::srv::SumFullName_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  sum_full_name_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sum_full_name_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const sum_full_name_service::srv::SumFullName_Event & msg)
{
  return sum_full_name_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sum_full_name_service::srv::SumFullName_Event>()
{
  return "sum_full_name_service::srv::SumFullName_Event";
}

template<>
inline const char * name<sum_full_name_service::srv::SumFullName_Event>()
{
  return "sum_full_name_service/srv/SumFullName_Event";
}

template<>
struct has_fixed_size<sum_full_name_service::srv::SumFullName_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sum_full_name_service::srv::SumFullName_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<sum_full_name_service::srv::SumFullName_Request>::value && has_bounded_size<sum_full_name_service::srv::SumFullName_Response>::value> {};

template<>
struct is_message<sum_full_name_service::srv::SumFullName_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sum_full_name_service::srv::SumFullName>()
{
  return "sum_full_name_service::srv::SumFullName";
}

template<>
inline const char * name<sum_full_name_service::srv::SumFullName>()
{
  return "sum_full_name_service/srv/SumFullName";
}

template<>
struct has_fixed_size<sum_full_name_service::srv::SumFullName>
  : std::integral_constant<
    bool,
    has_fixed_size<sum_full_name_service::srv::SumFullName_Request>::value &&
    has_fixed_size<sum_full_name_service::srv::SumFullName_Response>::value
  >
{
};

template<>
struct has_bounded_size<sum_full_name_service::srv::SumFullName>
  : std::integral_constant<
    bool,
    has_bounded_size<sum_full_name_service::srv::SumFullName_Request>::value &&
    has_bounded_size<sum_full_name_service::srv::SumFullName_Response>::value
  >
{
};

template<>
struct is_service<sum_full_name_service::srv::SumFullName>
  : std::true_type
{
};

template<>
struct is_service_request<sum_full_name_service::srv::SumFullName_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sum_full_name_service::srv::SumFullName_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__TRAITS_HPP_
