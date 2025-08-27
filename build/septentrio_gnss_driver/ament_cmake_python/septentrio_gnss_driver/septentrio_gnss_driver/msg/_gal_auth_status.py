# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/GALAuthStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GALAuthStatus(type):
    """Metaclass of message 'GALAuthStatus'."""

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
                'septentrio_gnss_driver.msg.GALAuthStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gal_auth_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gal_auth_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gal_auth_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gal_auth_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gal_auth_status

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


class GALAuthStatus(metaclass=Metaclass_GALAuthStatus):
    """Message class 'GALAuthStatus'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_osnma_status',
        '_trusted_time_delta',
        '_gal_active_mask',
        '_gal_authentic_mask',
        '_gps_active_mask',
        '_gps_authentic_mask',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'osnma_status': 'uint16',
        'trusted_time_delta': 'float',
        'gal_active_mask': 'uint64',
        'gal_authentic_mask': 'uint64',
        'gps_active_mask': 'uint64',
        'gps_authentic_mask': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from septentrio_gnss_driver.msg import BlockHeader
        self.block_header = kwargs.get('block_header', BlockHeader())
        self.osnma_status = kwargs.get('osnma_status', int())
        self.trusted_time_delta = kwargs.get('trusted_time_delta', float())
        self.gal_active_mask = kwargs.get('gal_active_mask', int())
        self.gal_authentic_mask = kwargs.get('gal_authentic_mask', int())
        self.gps_active_mask = kwargs.get('gps_active_mask', int())
        self.gps_authentic_mask = kwargs.get('gps_authentic_mask', int())

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
        if self.osnma_status != other.osnma_status:
            return False
        if self.trusted_time_delta != other.trusted_time_delta:
            return False
        if self.gal_active_mask != other.gal_active_mask:
            return False
        if self.gal_authentic_mask != other.gal_authentic_mask:
            return False
        if self.gps_active_mask != other.gps_active_mask:
            return False
        if self.gps_authentic_mask != other.gps_authentic_mask:
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
    def osnma_status(self):
        """Message field 'osnma_status'."""
        return self._osnma_status

    @osnma_status.setter
    def osnma_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'osnma_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'osnma_status' field must be an unsigned integer in [0, 65535]"
        self._osnma_status = value

    @builtins.property
    def trusted_time_delta(self):
        """Message field 'trusted_time_delta'."""
        return self._trusted_time_delta

    @trusted_time_delta.setter
    def trusted_time_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trusted_time_delta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'trusted_time_delta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._trusted_time_delta = value

    @builtins.property
    def gal_active_mask(self):
        """Message field 'gal_active_mask'."""
        return self._gal_active_mask

    @gal_active_mask.setter
    def gal_active_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gal_active_mask' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'gal_active_mask' field must be an unsigned integer in [0, 18446744073709551615]"
        self._gal_active_mask = value

    @builtins.property
    def gal_authentic_mask(self):
        """Message field 'gal_authentic_mask'."""
        return self._gal_authentic_mask

    @gal_authentic_mask.setter
    def gal_authentic_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gal_authentic_mask' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'gal_authentic_mask' field must be an unsigned integer in [0, 18446744073709551615]"
        self._gal_authentic_mask = value

    @builtins.property
    def gps_active_mask(self):
        """Message field 'gps_active_mask'."""
        return self._gps_active_mask

    @gps_active_mask.setter
    def gps_active_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_active_mask' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'gps_active_mask' field must be an unsigned integer in [0, 18446744073709551615]"
        self._gps_active_mask = value

    @builtins.property
    def gps_authentic_mask(self):
        """Message field 'gps_authentic_mask'."""
        return self._gps_authentic_mask

    @gps_authentic_mask.setter
    def gps_authentic_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_authentic_mask' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'gps_authentic_mask' field must be an unsigned integer in [0, 18446744073709551615]"
        self._gps_authentic_mask = value
