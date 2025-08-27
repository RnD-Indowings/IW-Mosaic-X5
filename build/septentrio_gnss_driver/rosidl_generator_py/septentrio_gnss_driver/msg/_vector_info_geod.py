# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/VectorInfoGeod.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VectorInfoGeod(type):
    """Metaclass of message 'VectorInfoGeod'."""

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
                'septentrio_gnss_driver.msg.VectorInfoGeod')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vector_info_geod
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vector_info_geod
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vector_info_geod
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vector_info_geod
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vector_info_geod

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VectorInfoGeod(metaclass=Metaclass_VectorInfoGeod):
    """Message class 'VectorInfoGeod'."""

    __slots__ = [
        '_nr_sv',
        '_error',
        '_mode',
        '_misc',
        '_delta_east',
        '_delta_north',
        '_delta_up',
        '_delta_ve',
        '_delta_vn',
        '_delta_vu',
        '_azimuth',
        '_elevation',
        '_reference_id',
        '_corr_age',
        '_signal_info',
    ]

    _fields_and_field_types = {
        'nr_sv': 'uint8',
        'error': 'uint8',
        'mode': 'uint8',
        'misc': 'uint8',
        'delta_east': 'double',
        'delta_north': 'double',
        'delta_up': 'double',
        'delta_ve': 'float',
        'delta_vn': 'float',
        'delta_vu': 'float',
        'azimuth': 'uint16',
        'elevation': 'int16',
        'reference_id': 'uint16',
        'corr_age': 'uint16',
        'signal_info': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nr_sv = kwargs.get('nr_sv', int())
        self.error = kwargs.get('error', int())
        self.mode = kwargs.get('mode', int())
        self.misc = kwargs.get('misc', int())
        self.delta_east = kwargs.get('delta_east', float())
        self.delta_north = kwargs.get('delta_north', float())
        self.delta_up = kwargs.get('delta_up', float())
        self.delta_ve = kwargs.get('delta_ve', float())
        self.delta_vn = kwargs.get('delta_vn', float())
        self.delta_vu = kwargs.get('delta_vu', float())
        self.azimuth = kwargs.get('azimuth', int())
        self.elevation = kwargs.get('elevation', int())
        self.reference_id = kwargs.get('reference_id', int())
        self.corr_age = kwargs.get('corr_age', int())
        self.signal_info = kwargs.get('signal_info', int())

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
        if self.nr_sv != other.nr_sv:
            return False
        if self.error != other.error:
            return False
        if self.mode != other.mode:
            return False
        if self.misc != other.misc:
            return False
        if self.delta_east != other.delta_east:
            return False
        if self.delta_north != other.delta_north:
            return False
        if self.delta_up != other.delta_up:
            return False
        if self.delta_ve != other.delta_ve:
            return False
        if self.delta_vn != other.delta_vn:
            return False
        if self.delta_vu != other.delta_vu:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.elevation != other.elevation:
            return False
        if self.reference_id != other.reference_id:
            return False
        if self.corr_age != other.corr_age:
            return False
        if self.signal_info != other.signal_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

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
    def delta_east(self):
        """Message field 'delta_east'."""
        return self._delta_east

    @delta_east.setter
    def delta_east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_east' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'delta_east' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._delta_east = value

    @builtins.property
    def delta_north(self):
        """Message field 'delta_north'."""
        return self._delta_north

    @delta_north.setter
    def delta_north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_north' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'delta_north' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._delta_north = value

    @builtins.property
    def delta_up(self):
        """Message field 'delta_up'."""
        return self._delta_up

    @delta_up.setter
    def delta_up(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_up' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'delta_up' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._delta_up = value

    @builtins.property
    def delta_ve(self):
        """Message field 'delta_ve'."""
        return self._delta_ve

    @delta_ve.setter
    def delta_ve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_ve' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_ve' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_ve = value

    @builtins.property
    def delta_vn(self):
        """Message field 'delta_vn'."""
        return self._delta_vn

    @delta_vn.setter
    def delta_vn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_vn' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_vn' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_vn = value

    @builtins.property
    def delta_vu(self):
        """Message field 'delta_vu'."""
        return self._delta_vu

    @delta_vu.setter
    def delta_vu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_vu' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_vu' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_vu = value

    @builtins.property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'azimuth' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'azimuth' field must be an unsigned integer in [0, 65535]"
        self._azimuth = value

    @builtins.property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elevation' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'elevation' field must be an integer in [-32768, 32767]"
        self._elevation = value

    @builtins.property
    def reference_id(self):
        """Message field 'reference_id'."""
        return self._reference_id

    @reference_id.setter
    def reference_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reference_id' field must be an unsigned integer in [0, 65535]"
        self._reference_id = value

    @builtins.property
    def corr_age(self):
        """Message field 'corr_age'."""
        return self._corr_age

    @corr_age.setter
    def corr_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'corr_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'corr_age' field must be an unsigned integer in [0, 65535]"
        self._corr_age = value

    @builtins.property
    def signal_info(self):
        """Message field 'signal_info'."""
        return self._signal_info

    @signal_info.setter
    def signal_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_info' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'signal_info' field must be an unsigned integer in [0, 4294967295]"
        self._signal_info = value
