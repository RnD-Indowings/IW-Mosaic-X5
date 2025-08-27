# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MeasEpochChannelType1(type):
    """Metaclass of message 'MeasEpochChannelType1'."""

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
                'septentrio_gnss_driver.msg.MeasEpochChannelType1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__meas_epoch_channel_type1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__meas_epoch_channel_type1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__meas_epoch_channel_type1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__meas_epoch_channel_type1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__meas_epoch_channel_type1

            from septentrio_gnss_driver.msg import MeasEpochChannelType2
            if MeasEpochChannelType2.__class__._TYPE_SUPPORT is None:
                MeasEpochChannelType2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MeasEpochChannelType1(metaclass=Metaclass_MeasEpochChannelType1):
    """Message class 'MeasEpochChannelType1'."""

    __slots__ = [
        '_rx_channel',
        '_type',
        '_sv_id',
        '_misc',
        '_code_lsb',
        '_doppler',
        '_carrier_lsb',
        '_carrier_msb',
        '_cn0',
        '_lock_time',
        '_obs_info',
        '_n2',
        '_type2',
    ]

    _fields_and_field_types = {
        'rx_channel': 'uint8',
        'type': 'uint8',
        'sv_id': 'uint8',
        'misc': 'uint8',
        'code_lsb': 'uint32',
        'doppler': 'int32',
        'carrier_lsb': 'uint16',
        'carrier_msb': 'int8',
        'cn0': 'uint8',
        'lock_time': 'uint16',
        'obs_info': 'uint8',
        'n2': 'uint8',
        'type2': 'sequence<septentrio_gnss_driver/MeasEpochChannelType2>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'MeasEpochChannelType2')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rx_channel = kwargs.get('rx_channel', int())
        self.type = kwargs.get('type', int())
        self.sv_id = kwargs.get('sv_id', int())
        self.misc = kwargs.get('misc', int())
        self.code_lsb = kwargs.get('code_lsb', int())
        self.doppler = kwargs.get('doppler', int())
        self.carrier_lsb = kwargs.get('carrier_lsb', int())
        self.carrier_msb = kwargs.get('carrier_msb', int())
        self.cn0 = kwargs.get('cn0', int())
        self.lock_time = kwargs.get('lock_time', int())
        self.obs_info = kwargs.get('obs_info', int())
        self.n2 = kwargs.get('n2', int())
        self.type2 = kwargs.get('type2', [])

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
        if self.rx_channel != other.rx_channel:
            return False
        if self.type != other.type:
            return False
        if self.sv_id != other.sv_id:
            return False
        if self.misc != other.misc:
            return False
        if self.code_lsb != other.code_lsb:
            return False
        if self.doppler != other.doppler:
            return False
        if self.carrier_lsb != other.carrier_lsb:
            return False
        if self.carrier_msb != other.carrier_msb:
            return False
        if self.cn0 != other.cn0:
            return False
        if self.lock_time != other.lock_time:
            return False
        if self.obs_info != other.obs_info:
            return False
        if self.n2 != other.n2:
            return False
        if self.type2 != other.type2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rx_channel(self):
        """Message field 'rx_channel'."""
        return self._rx_channel

    @rx_channel.setter
    def rx_channel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_channel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rx_channel' field must be an unsigned integer in [0, 255]"
        self._rx_channel = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def sv_id(self):
        """Message field 'sv_id'."""
        return self._sv_id

    @sv_id.setter
    def sv_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sv_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sv_id' field must be an unsigned integer in [0, 255]"
        self._sv_id = value

    @builtins.property
    def misc(self):
        """Message field 'misc'."""
        return self._misc

    @misc.setter
    def misc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'misc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'misc' field must be an unsigned integer in [0, 255]"
        self._misc = value

    @builtins.property
    def code_lsb(self):
        """Message field 'code_lsb'."""
        return self._code_lsb

    @code_lsb.setter
    def code_lsb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code_lsb' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'code_lsb' field must be an unsigned integer in [0, 4294967295]"
        self._code_lsb = value

    @builtins.property
    def doppler(self):
        """Message field 'doppler'."""
        return self._doppler

    @doppler.setter
    def doppler(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'doppler' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'doppler' field must be an integer in [-2147483648, 2147483647]"
        self._doppler = value

    @builtins.property
    def carrier_lsb(self):
        """Message field 'carrier_lsb'."""
        return self._carrier_lsb

    @carrier_lsb.setter
    def carrier_lsb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'carrier_lsb' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'carrier_lsb' field must be an unsigned integer in [0, 65535]"
        self._carrier_lsb = value

    @builtins.property
    def carrier_msb(self):
        """Message field 'carrier_msb'."""
        return self._carrier_msb

    @carrier_msb.setter
    def carrier_msb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'carrier_msb' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'carrier_msb' field must be an integer in [-128, 127]"
        self._carrier_msb = value

    @builtins.property
    def cn0(self):
        """Message field 'cn0'."""
        return self._cn0

    @cn0.setter
    def cn0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cn0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cn0' field must be an unsigned integer in [0, 255]"
        self._cn0 = value

    @builtins.property
    def lock_time(self):
        """Message field 'lock_time'."""
        return self._lock_time

    @lock_time.setter
    def lock_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lock_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lock_time' field must be an unsigned integer in [0, 65535]"
        self._lock_time = value

    @builtins.property
    def obs_info(self):
        """Message field 'obs_info'."""
        return self._obs_info

    @obs_info.setter
    def obs_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obs_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obs_info' field must be an unsigned integer in [0, 255]"
        self._obs_info = value

    @builtins.property
    def n2(self):
        """Message field 'n2'."""
        return self._n2

    @n2.setter
    def n2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'n2' field must be an unsigned integer in [0, 255]"
        self._n2 = value

    @builtins.property
    def type2(self):
        """Message field 'type2'."""
        return self._type2

    @type2.setter
    def type2(self, value):
        if __debug__:
            from septentrio_gnss_driver.msg import MeasEpochChannelType2
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
                 all(isinstance(v, MeasEpochChannelType2) for v in value) and
                 True), \
                "The 'type2' field must be a set or sequence and each value of type 'MeasEpochChannelType2'"
        self._type2 = value
