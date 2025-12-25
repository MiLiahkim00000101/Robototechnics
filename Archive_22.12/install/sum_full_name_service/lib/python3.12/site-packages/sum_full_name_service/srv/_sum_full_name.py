# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sum_full_name_service:srv/SumFullName.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SumFullName_Request(type):
    """Metaclass of message 'SumFullName_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sum_full_name_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sum_full_name_service.srv.SumFullName_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sum_full_name__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sum_full_name__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sum_full_name__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sum_full_name__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sum_full_name__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SumFullName_Request(metaclass=Metaclass_SumFullName_Request):
    """Message class 'SumFullName_Request'."""

    __slots__ = [
        '_f_name',
        '_s_name',
        '_patronymic',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'f_name': 'string',
        's_name': 'string',
        'patronymic': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.f_name = kwargs.get('f_name', str())
        self.s_name = kwargs.get('s_name', str())
        self.patronymic = kwargs.get('patronymic', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.f_name != other.f_name:
            return False
        if self.s_name != other.s_name:
            return False
        if self.patronymic != other.patronymic:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def f_name(self):
        """Message field 'f_name'."""
        return self._f_name

    @f_name.setter
    def f_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'f_name' field must be of type 'str'"
        self._f_name = value

    @builtins.property
    def s_name(self):
        """Message field 's_name'."""
        return self._s_name

    @s_name.setter
    def s_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 's_name' field must be of type 'str'"
        self._s_name = value

    @builtins.property
    def patronymic(self):
        """Message field 'patronymic'."""
        return self._patronymic

    @patronymic.setter
    def patronymic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'patronymic' field must be of type 'str'"
        self._patronymic = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SumFullName_Response(type):
    """Metaclass of message 'SumFullName_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sum_full_name_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sum_full_name_service.srv.SumFullName_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sum_full_name__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sum_full_name__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sum_full_name__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sum_full_name__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sum_full_name__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SumFullName_Response(metaclass=Metaclass_SumFullName_Response):
    """Message class 'SumFullName_Response'."""

    __slots__ = [
        '_full_name',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'full_name': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.full_name = kwargs.get('full_name', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.full_name != other.full_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def full_name(self):
        """Message field 'full_name'."""
        return self._full_name

    @full_name.setter
    def full_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'full_name' field must be of type 'str'"
        self._full_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SumFullName_Event(type):
    """Metaclass of message 'SumFullName_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sum_full_name_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sum_full_name_service.srv.SumFullName_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sum_full_name__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sum_full_name__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sum_full_name__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sum_full_name__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sum_full_name__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SumFullName_Event(metaclass=Metaclass_SumFullName_Event):
    """Message class 'SumFullName_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<sum_full_name_service/SumFullName_Request, 1>',
        'response': 'sequence<sum_full_name_service/SumFullName_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['sum_full_name_service', 'srv'], 'SumFullName_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['sum_full_name_service', 'srv'], 'SumFullName_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from sum_full_name_service.srv import SumFullName_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SumFullName_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SumFullName_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from sum_full_name_service.srv import SumFullName_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SumFullName_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SumFullName_Response'"
        self._response = value


class Metaclass_SumFullName(type):
    """Metaclass of service 'SumFullName'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sum_full_name_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sum_full_name_service.srv.SumFullName')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sum_full_name

            from sum_full_name_service.srv import _sum_full_name
            if _sum_full_name.Metaclass_SumFullName_Request._TYPE_SUPPORT is None:
                _sum_full_name.Metaclass_SumFullName_Request.__import_type_support__()
            if _sum_full_name.Metaclass_SumFullName_Response._TYPE_SUPPORT is None:
                _sum_full_name.Metaclass_SumFullName_Response.__import_type_support__()
            if _sum_full_name.Metaclass_SumFullName_Event._TYPE_SUPPORT is None:
                _sum_full_name.Metaclass_SumFullName_Event.__import_type_support__()


class SumFullName(metaclass=Metaclass_SumFullName):
    from sum_full_name_service.srv._sum_full_name import SumFullName_Request as Request
    from sum_full_name_service.srv._sum_full_name import SumFullName_Response as Response
    from sum_full_name_service.srv._sum_full_name import SumFullName_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
