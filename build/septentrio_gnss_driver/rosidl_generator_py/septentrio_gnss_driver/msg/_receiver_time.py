# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/ReceiverTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReceiverTime(type):
    """Metaclass of message 'ReceiverTime'."""

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
                'septentrio_gnss_driver.msg.ReceiverTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__receiver_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__receiver_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__receiver_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__receiver_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__receiver_time

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


class ReceiverTime(metaclass=Metaclass_ReceiverTime):
    """Message class 'ReceiverTime'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_utc_year',
        '_utc_month',
        '_utc_day',
        '_utc_hour',
        '_utc_min',
        '_utc_second',
        '_delta_ls',
        '_sync_level',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'utc_year': 'int8',
        'utc_month': 'int8',
        'utc_day': 'int8',
        'utc_hour': 'int8',
        'utc_min': 'int8',
        'utc_second': 'int8',
        'delta_ls': 'int8',
        'sync_level': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from septentrio_gnss_driver.msg import BlockHeader
        self.block_header = kwargs.get('block_header', BlockHeader())
        self.utc_year = kwargs.get('utc_year', int())
        self.utc_month = kwargs.get('utc_month', int())
        self.utc_day = kwargs.get('utc_day', int())
        self.utc_hour = kwargs.get('utc_hour', int())
        self.utc_min = kwargs.get('utc_min', int())
        self.utc_second = kwargs.get('utc_second', int())
        self.delta_ls = kwargs.get('delta_ls', int())
        self.sync_level = kwargs.get('sync_level', int())

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
        if self.utc_year != other.utc_year:
            return False
        if self.utc_month != other.utc_month:
            return False
        if self.utc_day != other.utc_day:
            return False
        if self.utc_hour != other.utc_hour:
            return False
        if self.utc_min != other.utc_min:
            return False
        if self.utc_second != other.utc_second:
            return False
        if self.delta_ls != other.delta_ls:
            return False
        if self.sync_level != other.sync_level:
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
    def utc_year(self):
        """Message field 'utc_year'."""
        return self._utc_year

    @utc_year.setter
    def utc_year(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_year' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'utc_year' field must be an integer in [-128, 127]"
        self._utc_year = value

    @builtins.property
    def utc_month(self):
        """Message field 'utc_month'."""
        return self._utc_month

    @utc_month.setter
    def utc_month(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_month' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'utc_month' field must be an integer in [-128, 127]"
        self._utc_month = value

    @builtins.property
    def utc_day(self):
        """Message field 'utc_day'."""
        return self._utc_day

    @utc_day.setter
    def utc_day(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_day' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'utc_day' field must be an integer in [-128, 127]"
        self._utc_day = value

    @builtins.property
    def utc_hour(self):
        """Message field 'utc_hour'."""
        return self._utc_hour

    @utc_hour.setter
    def utc_hour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_hour' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'utc_hour' field must be an integer in [-128, 127]"
        self._utc_hour = value

    @builtins.property
    def utc_min(self):
        """Message field 'utc_min'."""
        return self._utc_min

    @utc_min.setter
    def utc_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_min' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'utc_min' field must be an integer in [-128, 127]"
        self._utc_min = value

    @builtins.property
    def utc_second(self):
        """Message field 'utc_second'."""
        return self._utc_second

    @utc_second.setter
    def utc_second(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_second' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'utc_second' field must be an integer in [-128, 127]"
        self._utc_second = value

    @builtins.property
    def delta_ls(self):
        """Message field 'delta_ls'."""
        return self._delta_ls

    @delta_ls.setter
    def delta_ls(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delta_ls' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'delta_ls' field must be an integer in [-128, 127]"
        self._delta_ls = value

    @builtins.property
    def sync_level(self):
        """Message field 'sync_level'."""
        return self._sync_level

    @sync_level.setter
    def sync_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sync_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sync_level' field must be an unsigned integer in [0, 255]"
        self._sync_level = value
