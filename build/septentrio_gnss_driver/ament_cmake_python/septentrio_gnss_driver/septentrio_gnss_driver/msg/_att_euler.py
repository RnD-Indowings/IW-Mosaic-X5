# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/AttEuler.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AttEuler(type):
    """Metaclass of message 'AttEuler'."""

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
                'septentrio_gnss_driver.msg.AttEuler')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__att_euler
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__att_euler
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__att_euler
            cls._TYPE_SUPPORT = module.type_support_msg__msg__att_euler
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__att_euler

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


class AttEuler(metaclass=Metaclass_AttEuler):
    """Message class 'AttEuler'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_nr_sv',
        '_error',
        '_mode',
        '_heading',
        '_pitch',
        '_roll',
        '_pitch_dot',
        '_roll_dot',
        '_heading_dot',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'nr_sv': 'uint8',
        'error': 'uint8',
        'mode': 'uint16',
        'heading': 'float',
        'pitch': 'float',
        'roll': 'float',
        'pitch_dot': 'float',
        'roll_dot': 'float',
        'heading_dot': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.nr_sv = kwargs.get('nr_sv', int())
        self.error = kwargs.get('error', int())
        self.mode = kwargs.get('mode', int())
        self.heading = kwargs.get('heading', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.pitch_dot = kwargs.get('pitch_dot', float())
        self.roll_dot = kwargs.get('roll_dot', float())
        self.heading_dot = kwargs.get('heading_dot', float())

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
        if self.nr_sv != other.nr_sv:
            return False
        if self.error != other.error:
            return False
        if self.mode != other.mode:
            return False
        if self.heading != other.heading:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch_dot != other.pitch_dot:
            return False
        if self.roll_dot != other.roll_dot:
            return False
        if self.heading_dot != other.heading_dot:
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
    def nr_sv(self):
        """Message field 'nr_sv'."""
        return self._nr_sv

    @nr_sv.setter
    def nr_sv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nr_sv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nr_sv' field must be an unsigned integer in [0, 255]"
        self._nr_sv = value

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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mode' field must be an unsigned integer in [0, 65535]"
        self._mode = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll = value

    @builtins.property
    def pitch_dot(self):
        """Message field 'pitch_dot'."""
        return self._pitch_dot

    @pitch_dot.setter
    def pitch_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_dot = value

    @builtins.property
    def roll_dot(self):
        """Message field 'roll_dot'."""
        return self._roll_dot

    @roll_dot.setter
    def roll_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_dot = value

    @builtins.property
    def heading_dot(self):
        """Message field 'heading_dot'."""
        return self._heading_dot

    @heading_dot.setter
    def heading_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_dot = value
