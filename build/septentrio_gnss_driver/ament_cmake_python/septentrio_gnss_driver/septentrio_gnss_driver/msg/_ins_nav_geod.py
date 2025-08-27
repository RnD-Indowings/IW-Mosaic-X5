# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/INSNavGeod.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSNavGeod(type):
    """Metaclass of message 'INSNavGeod'."""

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
                'septentrio_gnss_driver.msg.INSNavGeod')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_nav_geod
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_nav_geod
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_nav_geod
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_nav_geod
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_nav_geod

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


class INSNavGeod(metaclass=Metaclass_INSNavGeod):
    """Message class 'INSNavGeod'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_gnss_mode',
        '_error',
        '_info',
        '_gnss_age',
        '_latitude',
        '_longitude',
        '_height',
        '_undulation',
        '_accuracy',
        '_latency',
        '_datum',
        '_sb_list',
        '_latitude_std_dev',
        '_longitude_std_dev',
        '_height_std_dev',
        '_latitude_longitude_cov',
        '_latitude_height_cov',
        '_longitude_height_cov',
        '_heading',
        '_pitch',
        '_roll',
        '_heading_std_dev',
        '_pitch_std_dev',
        '_roll_std_dev',
        '_heading_pitch_cov',
        '_heading_roll_cov',
        '_pitch_roll_cov',
        '_ve',
        '_vn',
        '_vu',
        '_ve_std_dev',
        '_vn_std_dev',
        '_vu_std_dev',
        '_ve_vn_cov',
        '_ve_vu_cov',
        '_vn_vu_cov',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'gnss_mode': 'uint8',
        'error': 'uint8',
        'info': 'uint16',
        'gnss_age': 'uint16',
        'latitude': 'double',
        'longitude': 'double',
        'height': 'double',
        'undulation': 'float',
        'accuracy': 'uint16',
        'latency': 'uint16',
        'datum': 'uint8',
        'sb_list': 'uint16',
        'latitude_std_dev': 'float',
        'longitude_std_dev': 'float',
        'height_std_dev': 'float',
        'latitude_longitude_cov': 'float',
        'latitude_height_cov': 'float',
        'longitude_height_cov': 'float',
        'heading': 'float',
        'pitch': 'float',
        'roll': 'float',
        'heading_std_dev': 'float',
        'pitch_std_dev': 'float',
        'roll_std_dev': 'float',
        'heading_pitch_cov': 'float',
        'heading_roll_cov': 'float',
        'pitch_roll_cov': 'float',
        've': 'float',
        'vn': 'float',
        'vu': 'float',
        've_std_dev': 'float',
        'vn_std_dev': 'float',
        'vu_std_dev': 'float',
        've_vn_cov': 'float',
        've_vu_cov': 'float',
        'vn_vu_cov': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.gnss_mode = kwargs.get('gnss_mode', int())
        self.error = kwargs.get('error', int())
        self.info = kwargs.get('info', int())
        self.gnss_age = kwargs.get('gnss_age', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.height = kwargs.get('height', float())
        self.undulation = kwargs.get('undulation', float())
        self.accuracy = kwargs.get('accuracy', int())
        self.latency = kwargs.get('latency', int())
        self.datum = kwargs.get('datum', int())
        self.sb_list = kwargs.get('sb_list', int())
        self.latitude_std_dev = kwargs.get('latitude_std_dev', float())
        self.longitude_std_dev = kwargs.get('longitude_std_dev', float())
        self.height_std_dev = kwargs.get('height_std_dev', float())
        self.latitude_longitude_cov = kwargs.get('latitude_longitude_cov', float())
        self.latitude_height_cov = kwargs.get('latitude_height_cov', float())
        self.longitude_height_cov = kwargs.get('longitude_height_cov', float())
        self.heading = kwargs.get('heading', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.heading_std_dev = kwargs.get('heading_std_dev', float())
        self.pitch_std_dev = kwargs.get('pitch_std_dev', float())
        self.roll_std_dev = kwargs.get('roll_std_dev', float())
        self.heading_pitch_cov = kwargs.get('heading_pitch_cov', float())
        self.heading_roll_cov = kwargs.get('heading_roll_cov', float())
        self.pitch_roll_cov = kwargs.get('pitch_roll_cov', float())
        self.ve = kwargs.get('ve', float())
        self.vn = kwargs.get('vn', float())
        self.vu = kwargs.get('vu', float())
        self.ve_std_dev = kwargs.get('ve_std_dev', float())
        self.vn_std_dev = kwargs.get('vn_std_dev', float())
        self.vu_std_dev = kwargs.get('vu_std_dev', float())
        self.ve_vn_cov = kwargs.get('ve_vn_cov', float())
        self.ve_vu_cov = kwargs.get('ve_vu_cov', float())
        self.vn_vu_cov = kwargs.get('vn_vu_cov', float())

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
        if self.gnss_mode != other.gnss_mode:
            return False
        if self.error != other.error:
            return False
        if self.info != other.info:
            return False
        if self.gnss_age != other.gnss_age:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.height != other.height:
            return False
        if self.undulation != other.undulation:
            return False
        if self.accuracy != other.accuracy:
            return False
        if self.latency != other.latency:
            return False
        if self.datum != other.datum:
            return False
        if self.sb_list != other.sb_list:
            return False
        if self.latitude_std_dev != other.latitude_std_dev:
            return False
        if self.longitude_std_dev != other.longitude_std_dev:
            return False
        if self.height_std_dev != other.height_std_dev:
            return False
        if self.latitude_longitude_cov != other.latitude_longitude_cov:
            return False
        if self.latitude_height_cov != other.latitude_height_cov:
            return False
        if self.longitude_height_cov != other.longitude_height_cov:
            return False
        if self.heading != other.heading:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.heading_std_dev != other.heading_std_dev:
            return False
        if self.pitch_std_dev != other.pitch_std_dev:
            return False
        if self.roll_std_dev != other.roll_std_dev:
            return False
        if self.heading_pitch_cov != other.heading_pitch_cov:
            return False
        if self.heading_roll_cov != other.heading_roll_cov:
            return False
        if self.pitch_roll_cov != other.pitch_roll_cov:
            return False
        if self.ve != other.ve:
            return False
        if self.vn != other.vn:
            return False
        if self.vu != other.vu:
            return False
        if self.ve_std_dev != other.ve_std_dev:
            return False
        if self.vn_std_dev != other.vn_std_dev:
            return False
        if self.vu_std_dev != other.vu_std_dev:
            return False
        if self.ve_vn_cov != other.ve_vn_cov:
            return False
        if self.ve_vu_cov != other.ve_vu_cov:
            return False
        if self.vn_vu_cov != other.vn_vu_cov:
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
    def gnss_mode(self):
        """Message field 'gnss_mode'."""
        return self._gnss_mode

    @gnss_mode.setter
    def gnss_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gnss_mode' field must be an unsigned integer in [0, 255]"
        self._gnss_mode = value

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
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'info' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'info' field must be an unsigned integer in [0, 65535]"
        self._info = value

    @builtins.property
    def gnss_age(self):
        """Message field 'gnss_age'."""
        return self._gnss_age

    @gnss_age.setter
    def gnss_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gnss_age' field must be an unsigned integer in [0, 65535]"
        self._gnss_age = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height = value

    @builtins.property
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'undulation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._undulation = value

    @builtins.property
    def accuracy(self):
        """Message field 'accuracy'."""
        return self._accuracy

    @accuracy.setter
    def accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accuracy' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'accuracy' field must be an unsigned integer in [0, 65535]"
        self._accuracy = value

    @builtins.property
    def latency(self):
        """Message field 'latency'."""
        return self._latency

    @latency.setter
    def latency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'latency' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'latency' field must be an unsigned integer in [0, 65535]"
        self._latency = value

    @builtins.property
    def datum(self):
        """Message field 'datum'."""
        return self._datum

    @datum.setter
    def datum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'datum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'datum' field must be an unsigned integer in [0, 255]"
        self._datum = value

    @builtins.property
    def sb_list(self):
        """Message field 'sb_list'."""
        return self._sb_list

    @sb_list.setter
    def sb_list(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sb_list' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sb_list' field must be an unsigned integer in [0, 65535]"
        self._sb_list = value

    @builtins.property
    def latitude_std_dev(self):
        """Message field 'latitude_std_dev'."""
        return self._latitude_std_dev

    @latitude_std_dev.setter
    def latitude_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latitude_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latitude_std_dev = value

    @builtins.property
    def longitude_std_dev(self):
        """Message field 'longitude_std_dev'."""
        return self._longitude_std_dev

    @longitude_std_dev.setter
    def longitude_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitude_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitude_std_dev = value

    @builtins.property
    def height_std_dev(self):
        """Message field 'height_std_dev'."""
        return self._height_std_dev

    @height_std_dev.setter
    def height_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_std_dev = value

    @builtins.property
    def latitude_longitude_cov(self):
        """Message field 'latitude_longitude_cov'."""
        return self._latitude_longitude_cov

    @latitude_longitude_cov.setter
    def latitude_longitude_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_longitude_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latitude_longitude_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latitude_longitude_cov = value

    @builtins.property
    def latitude_height_cov(self):
        """Message field 'latitude_height_cov'."""
        return self._latitude_height_cov

    @latitude_height_cov.setter
    def latitude_height_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_height_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latitude_height_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latitude_height_cov = value

    @builtins.property
    def longitude_height_cov(self):
        """Message field 'longitude_height_cov'."""
        return self._longitude_height_cov

    @longitude_height_cov.setter
    def longitude_height_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_height_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitude_height_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitude_height_cov = value

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
    def heading_std_dev(self):
        """Message field 'heading_std_dev'."""
        return self._heading_std_dev

    @heading_std_dev.setter
    def heading_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_std_dev = value

    @builtins.property
    def pitch_std_dev(self):
        """Message field 'pitch_std_dev'."""
        return self._pitch_std_dev

    @pitch_std_dev.setter
    def pitch_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_std_dev = value

    @builtins.property
    def roll_std_dev(self):
        """Message field 'roll_std_dev'."""
        return self._roll_std_dev

    @roll_std_dev.setter
    def roll_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_std_dev = value

    @builtins.property
    def heading_pitch_cov(self):
        """Message field 'heading_pitch_cov'."""
        return self._heading_pitch_cov

    @heading_pitch_cov.setter
    def heading_pitch_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_pitch_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_pitch_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_pitch_cov = value

    @builtins.property
    def heading_roll_cov(self):
        """Message field 'heading_roll_cov'."""
        return self._heading_roll_cov

    @heading_roll_cov.setter
    def heading_roll_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_roll_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_roll_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_roll_cov = value

    @builtins.property
    def pitch_roll_cov(self):
        """Message field 'pitch_roll_cov'."""
        return self._pitch_roll_cov

    @pitch_roll_cov.setter
    def pitch_roll_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_roll_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_roll_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_roll_cov = value

    @builtins.property
    def ve(self):
        """Message field 've'."""
        return self._ve

    @ve.setter
    def ve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 've' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 've' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ve = value

    @builtins.property
    def vn(self):
        """Message field 'vn'."""
        return self._vn

    @vn.setter
    def vn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vn' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vn' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vn = value

    @builtins.property
    def vu(self):
        """Message field 'vu'."""
        return self._vu

    @vu.setter
    def vu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vu' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vu' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vu = value

    @builtins.property
    def ve_std_dev(self):
        """Message field 've_std_dev'."""
        return self._ve_std_dev

    @ve_std_dev.setter
    def ve_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 've_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 've_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ve_std_dev = value

    @builtins.property
    def vn_std_dev(self):
        """Message field 'vn_std_dev'."""
        return self._vn_std_dev

    @vn_std_dev.setter
    def vn_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vn_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vn_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vn_std_dev = value

    @builtins.property
    def vu_std_dev(self):
        """Message field 'vu_std_dev'."""
        return self._vu_std_dev

    @vu_std_dev.setter
    def vu_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vu_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vu_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vu_std_dev = value

    @builtins.property
    def ve_vn_cov(self):
        """Message field 've_vn_cov'."""
        return self._ve_vn_cov

    @ve_vn_cov.setter
    def ve_vn_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 've_vn_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 've_vn_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ve_vn_cov = value

    @builtins.property
    def ve_vu_cov(self):
        """Message field 've_vu_cov'."""
        return self._ve_vu_cov

    @ve_vu_cov.setter
    def ve_vu_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 've_vu_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 've_vu_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ve_vu_cov = value

    @builtins.property
    def vn_vu_cov(self):
        """Message field 'vn_vu_cov'."""
        return self._vn_vu_cov

    @vn_vu_cov.setter
    def vn_vu_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vn_vu_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vn_vu_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vn_vu_cov = value
