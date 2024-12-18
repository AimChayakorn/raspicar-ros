# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rc_pwm_pkg:msg/PubPwm.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PubPwm(type):
    """Metaclass of message 'PubPwm'."""

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
            module = import_type_support('rc_pwm_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rc_pwm_pkg.msg.PubPwm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pub_pwm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pub_pwm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pub_pwm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pub_pwm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pub_pwm

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PubPwm(metaclass=Metaclass_PubPwm):
    """Message class 'PubPwm'."""

    __slots__ = [
        '_left_pwm',
        '_right_pwm',
    ]

    _fields_and_field_types = {
        'left_pwm': 'int64',
        'right_pwm': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_pwm = kwargs.get('left_pwm', int())
        self.right_pwm = kwargs.get('right_pwm', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_pwm != other.left_pwm:
            return False
        if self.right_pwm != other.right_pwm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_pwm(self):
        """Message field 'left_pwm'."""
        return self._left_pwm

    @left_pwm.setter
    def left_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_pwm' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left_pwm' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left_pwm = value

    @builtins.property
    def right_pwm(self):
        """Message field 'right_pwm'."""
        return self._right_pwm

    @right_pwm.setter
    def right_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_pwm' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right_pwm' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right_pwm = value
