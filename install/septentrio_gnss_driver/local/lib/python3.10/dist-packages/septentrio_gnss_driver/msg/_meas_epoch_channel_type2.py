# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MeasEpochChannelType2(type):
    """Metaclass of message 'MeasEpochChannelType2'."""

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
                'septentrio_gnss_driver.msg.MeasEpochChannelType2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__meas_epoch_channel_type2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__meas_epoch_channel_type2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__meas_epoch_channel_type2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__meas_epoch_channel_type2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__meas_epoch_channel_type2

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MeasEpochChannelType2(metaclass=Metaclass_MeasEpochChannelType2):
    """Message class 'MeasEpochChannelType2'."""

    __slots__ = [
        '_type',
        '_lock_time',
        '_cn0',
        '_offsets_msb',
        '_carrier_msb',
        '_obs_info',
        '_code_offset_lsb',
        '_carrier_lsb',
        '_doppler_offset_lsb',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'lock_time': 'uint8',
        'cn0': 'uint8',
        'offsets_msb': 'uint8',
        'carrier_msb': 'int8',
        'obs_info': 'uint8',
        'code_offset_lsb': 'uint16',
        'carrier_lsb': 'uint16',
        'doppler_offset_lsb': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.lock_time = kwargs.get('lock_time', int())
        self.cn0 = kwargs.get('cn0', int())
        self.offsets_msb = kwargs.get('offsets_msb', int())
        self.carrier_msb = kwargs.get('carrier_msb', int())
        self.obs_info = kwargs.get('obs_info', int())
        self.code_offset_lsb = kwargs.get('code_offset_lsb', int())
        self.carrier_lsb = kwargs.get('carrier_lsb', int())
        self.doppler_offset_lsb = kwargs.get('doppler_offset_lsb', int())

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
        if self.type != other.type:
            return False
        if self.lock_time != other.lock_time:
            return False
        if self.cn0 != other.cn0:
            return False
        if self.offsets_msb != other.offsets_msb:
            return False
        if self.carrier_msb != other.carrier_msb:
            return False
        if self.obs_info != other.obs_info:
            return False
        if self.code_offset_lsb != other.code_offset_lsb:
            return False
        if self.carrier_lsb != other.carrier_lsb:
            return False
        if self.doppler_offset_lsb != other.doppler_offset_lsb:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def lock_time(self):
        """Message field 'lock_time'."""
        return self._lock_time

    @lock_time.setter
    def lock_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lock_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lock_time' field must be an unsigned integer in [0, 255]"
        self._lock_time = value

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
    def offsets_msb(self):
        """Message field 'offsets_msb'."""
        return self._offsets_msb

    @offsets_msb.setter
    def offsets_msb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offsets_msb' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'offsets_msb' field must be an unsigned integer in [0, 255]"
        self._offsets_msb = value

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
    def code_offset_lsb(self):
        """Message field 'code_offset_lsb'."""
        return self._code_offset_lsb

    @code_offset_lsb.setter
    def code_offset_lsb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code_offset_lsb' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'code_offset_lsb' field must be an unsigned integer in [0, 65535]"
        self._code_offset_lsb = value

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
    def doppler_offset_lsb(self):
        """Message field 'doppler_offset_lsb'."""
        return self._doppler_offset_lsb

    @doppler_offset_lsb.setter
    def doppler_offset_lsb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'doppler_offset_lsb' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'doppler_offset_lsb' field must be an unsigned integer in [0, 65535]"
        self._doppler_offset_lsb = value
