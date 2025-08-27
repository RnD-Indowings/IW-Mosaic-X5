# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/MeasEpoch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MeasEpoch(type):
    """Metaclass of message 'MeasEpoch'."""

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
                'septentrio_gnss_driver.msg.MeasEpoch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__meas_epoch
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__meas_epoch
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__meas_epoch
            cls._TYPE_SUPPORT = module.type_support_msg__msg__meas_epoch
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__meas_epoch

            from septentrio_gnss_driver.msg import BlockHeader
            if BlockHeader.__class__._TYPE_SUPPORT is None:
                BlockHeader.__class__.__import_type_support__()

            from septentrio_gnss_driver.msg import MeasEpochChannelType1
            if MeasEpochChannelType1.__class__._TYPE_SUPPORT is None:
                MeasEpochChannelType1.__class__.__import_type_support__()

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


class MeasEpoch(metaclass=Metaclass_MeasEpoch):
    """Message class 'MeasEpoch'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_n',
        '_sb1_length',
        '_sb2_length',
        '_common_flags',
        '_cum_clk_jumps',
        '_type1',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'n': 'uint8',
        'sb1_length': 'uint8',
        'sb2_length': 'uint8',
        'common_flags': 'uint8',
        'cum_clk_jumps': 'uint8',
        'type1': 'sequence<septentrio_gnss_driver/MeasEpochChannelType1>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'MeasEpochChannelType1')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from septentrio_gnss_driver.msg import BlockHeader
        self.block_header = kwargs.get('block_header', BlockHeader())
        self.n = kwargs.get('n', int())
        self.sb1_length = kwargs.get('sb1_length', int())
        self.sb2_length = kwargs.get('sb2_length', int())
        self.common_flags = kwargs.get('common_flags', int())
        self.cum_clk_jumps = kwargs.get('cum_clk_jumps', int())
        self.type1 = kwargs.get('type1', [])

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
        if self.n != other.n:
            return False
        if self.sb1_length != other.sb1_length:
            return False
        if self.sb2_length != other.sb2_length:
            return False
        if self.common_flags != other.common_flags:
            return False
        if self.cum_clk_jumps != other.cum_clk_jumps:
            return False
        if self.type1 != other.type1:
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
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'n' field must be an unsigned integer in [0, 255]"
        self._n = value

    @builtins.property
    def sb1_length(self):
        """Message field 'sb1_length'."""
        return self._sb1_length

    @sb1_length.setter
    def sb1_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sb1_length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sb1_length' field must be an unsigned integer in [0, 255]"
        self._sb1_length = value

    @builtins.property
    def sb2_length(self):
        """Message field 'sb2_length'."""
        return self._sb2_length

    @sb2_length.setter
    def sb2_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sb2_length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sb2_length' field must be an unsigned integer in [0, 255]"
        self._sb2_length = value

    @builtins.property
    def common_flags(self):
        """Message field 'common_flags'."""
        return self._common_flags

    @common_flags.setter
    def common_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'common_flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'common_flags' field must be an unsigned integer in [0, 255]"
        self._common_flags = value

    @builtins.property
    def cum_clk_jumps(self):
        """Message field 'cum_clk_jumps'."""
        return self._cum_clk_jumps

    @cum_clk_jumps.setter
    def cum_clk_jumps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cum_clk_jumps' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cum_clk_jumps' field must be an unsigned integer in [0, 255]"
        self._cum_clk_jumps = value

    @builtins.property
    def type1(self):
        """Message field 'type1'."""
        return self._type1

    @type1.setter
    def type1(self, value):
        if __debug__:
            from septentrio_gnss_driver.msg import MeasEpochChannelType1
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
                 all(isinstance(v, MeasEpochChannelType1) for v in value) and
                 True), \
                "The 'type1' field must be a set or sequence and each value of type 'MeasEpochChannelType1'"
        self._type1 = value
