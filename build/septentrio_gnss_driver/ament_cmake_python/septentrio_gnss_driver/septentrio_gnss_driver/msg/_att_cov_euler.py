# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/AttCovEuler.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AttCovEuler(type):
    """Metaclass of message 'AttCovEuler'."""

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
            module = import_type_support('septentrio_gnss_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'septentrio_gnss_driver.msg.AttCovEuler')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__att_cov_euler
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__att_cov_euler
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__att_cov_euler
            cls._TYPE_SUPPORT = module.type_support_msg__msg__att_cov_euler
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__att_cov_euler

            from septentrio_gnss_driver.msg import BlockHeader
            if BlockHeader.__class__._TYPE_SUPPORT is None:
                BlockHeader.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AttCovEuler(metaclass=Metaclass_AttCovEuler):
    """Message class 'AttCovEuler'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_error',
        '_cov_headhead',
        '_cov_pitchpitch',
        '_cov_rollroll',
        '_cov_headpitch',
        '_cov_headroll',
        '_cov_pitchroll',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'error': 'uint8',
        'cov_headhead': 'float',
        'cov_pitchpitch': 'float',
        'cov_rollroll': 'float',
        'cov_headpitch': 'float',
        'cov_headroll': 'float',
        'cov_pitchroll': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from septentrio_gnss_driver.msg import BlockHeader
        self.block_header = kwargs.get('block_header', BlockHeader())
        self.error = kwargs.get('error', int())
        self.cov_headhead = kwargs.get('cov_headhead', float())
        self.cov_pitchpitch = kwargs.get('cov_pitchpitch', float())
        self.cov_rollroll = kwargs.get('cov_rollroll', float())
        self.cov_headpitch = kwargs.get('cov_headpitch', float())
        self.cov_headroll = kwargs.get('cov_headroll', float())
        self.cov_pitchroll = kwargs.get('cov_pitchroll', float())

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
        if self.header != other.header:
            return False
        if self.block_header != other.block_header:
            return False
        if self.error != other.error:
            return False
        if self.cov_headhead != other.cov_headhead:
            return False
        if self.cov_pitchpitch != other.cov_pitchpitch:
            return False
        if self.cov_rollroll != other.cov_rollroll:
            return False
        if self.cov_headpitch != other.cov_headpitch:
            return False
        if self.cov_headroll != other.cov_headroll:
            return False
        if self.cov_pitchroll != other.cov_pitchroll:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def block_header(self):
        """Message field 'block_header'."""
        return self._block_header

    @block_header.setter
    def block_header(self, value):
        if __debug__:
            from septentrio_gnss_driver.msg import BlockHeader
            assert \
                isinstance(value, BlockHeader), \
                "The 'block_header' field must be a sub message of type 'BlockHeader'"
        self._block_header = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error' field must be an unsigned integer in [0, 255]"
        self._error = value

    @builtins.property
    def cov_headhead(self):
        """Message field 'cov_headhead'."""
        return self._cov_headhead

    @cov_headhead.setter
    def cov_headhead(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_headhead' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_headhead' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_headhead = value

    @builtins.property
    def cov_pitchpitch(self):
        """Message field 'cov_pitchpitch'."""
        return self._cov_pitchpitch

    @cov_pitchpitch.setter
    def cov_pitchpitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_pitchpitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_pitchpitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_pitchpitch = value

    @builtins.property
    def cov_rollroll(self):
        """Message field 'cov_rollroll'."""
        return self._cov_rollroll

    @cov_rollroll.setter
    def cov_rollroll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_rollroll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_rollroll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_rollroll = value

    @builtins.property
    def cov_headpitch(self):
        """Message field 'cov_headpitch'."""
        return self._cov_headpitch

    @cov_headpitch.setter
    def cov_headpitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_headpitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_headpitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_headpitch = value

    @builtins.property
    def cov_headroll(self):
        """Message field 'cov_headroll'."""
        return self._cov_headroll

    @cov_headroll.setter
    def cov_headroll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_headroll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_headroll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_headroll = value

    @builtins.property
    def cov_pitchroll(self):
        """Message field 'cov_pitchroll'."""
        return self._cov_pitchroll

    @cov_pitchroll.setter
    def cov_pitchroll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_pitchroll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_pitchroll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_pitchroll = value
