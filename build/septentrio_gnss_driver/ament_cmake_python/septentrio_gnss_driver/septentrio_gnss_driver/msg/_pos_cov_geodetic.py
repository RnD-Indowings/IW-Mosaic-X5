# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/PosCovGeodetic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PosCovGeodetic(type):
    """Metaclass of message 'PosCovGeodetic'."""

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
                'septentrio_gnss_driver.msg.PosCovGeodetic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pos_cov_geodetic
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pos_cov_geodetic
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pos_cov_geodetic
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pos_cov_geodetic
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pos_cov_geodetic

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


class PosCovGeodetic(metaclass=Metaclass_PosCovGeodetic):
    """Message class 'PosCovGeodetic'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_mode',
        '_error',
        '_cov_latlat',
        '_cov_lonlon',
        '_cov_hgthgt',
        '_cov_bb',
        '_cov_latlon',
        '_cov_lathgt',
        '_cov_latb',
        '_cov_lonhgt',
        '_cov_lonb',
        '_cov_hb',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'mode': 'uint8',
        'error': 'uint8',
        'cov_latlat': 'float',
        'cov_lonlon': 'float',
        'cov_hgthgt': 'float',
        'cov_bb': 'float',
        'cov_latlon': 'float',
        'cov_lathgt': 'float',
        'cov_latb': 'float',
        'cov_lonhgt': 'float',
        'cov_lonb': 'float',
        'cov_hb': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.mode = kwargs.get('mode', int())
        self.error = kwargs.get('error', int())
        self.cov_latlat = kwargs.get('cov_latlat', float())
        self.cov_lonlon = kwargs.get('cov_lonlon', float())
        self.cov_hgthgt = kwargs.get('cov_hgthgt', float())
        self.cov_bb = kwargs.get('cov_bb', float())
        self.cov_latlon = kwargs.get('cov_latlon', float())
        self.cov_lathgt = kwargs.get('cov_lathgt', float())
        self.cov_latb = kwargs.get('cov_latb', float())
        self.cov_lonhgt = kwargs.get('cov_lonhgt', float())
        self.cov_lonb = kwargs.get('cov_lonb', float())
        self.cov_hb = kwargs.get('cov_hb', float())

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
        if self.mode != other.mode:
            return False
        if self.error != other.error:
            return False
        if self.cov_latlat != other.cov_latlat:
            return False
        if self.cov_lonlon != other.cov_lonlon:
            return False
        if self.cov_hgthgt != other.cov_hgthgt:
            return False
        if self.cov_bb != other.cov_bb:
            return False
        if self.cov_latlon != other.cov_latlon:
            return False
        if self.cov_lathgt != other.cov_lathgt:
            return False
        if self.cov_latb != other.cov_latb:
            return False
        if self.cov_lonhgt != other.cov_lonhgt:
            return False
        if self.cov_lonb != other.cov_lonb:
            return False
        if self.cov_hb != other.cov_hb:
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
    def cov_latlat(self):
        """Message field 'cov_latlat'."""
        return self._cov_latlat

    @cov_latlat.setter
    def cov_latlat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_latlat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_latlat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_latlat = value

    @builtins.property
    def cov_lonlon(self):
        """Message field 'cov_lonlon'."""
        return self._cov_lonlon

    @cov_lonlon.setter
    def cov_lonlon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_lonlon' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_lonlon' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_lonlon = value

    @builtins.property
    def cov_hgthgt(self):
        """Message field 'cov_hgthgt'."""
        return self._cov_hgthgt

    @cov_hgthgt.setter
    def cov_hgthgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_hgthgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_hgthgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_hgthgt = value

    @builtins.property
    def cov_bb(self):
        """Message field 'cov_bb'."""
        return self._cov_bb

    @cov_bb.setter
    def cov_bb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_bb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_bb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_bb = value

    @builtins.property
    def cov_latlon(self):
        """Message field 'cov_latlon'."""
        return self._cov_latlon

    @cov_latlon.setter
    def cov_latlon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_latlon' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_latlon' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_latlon = value

    @builtins.property
    def cov_lathgt(self):
        """Message field 'cov_lathgt'."""
        return self._cov_lathgt

    @cov_lathgt.setter
    def cov_lathgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_lathgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_lathgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_lathgt = value

    @builtins.property
    def cov_latb(self):
        """Message field 'cov_latb'."""
        return self._cov_latb

    @cov_latb.setter
    def cov_latb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_latb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_latb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_latb = value

    @builtins.property
    def cov_lonhgt(self):
        """Message field 'cov_lonhgt'."""
        return self._cov_lonhgt

    @cov_lonhgt.setter
    def cov_lonhgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_lonhgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_lonhgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_lonhgt = value

    @builtins.property
    def cov_lonb(self):
        """Message field 'cov_lonb'."""
        return self._cov_lonb

    @cov_lonb.setter
    def cov_lonb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_lonb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_lonb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_lonb = value

    @builtins.property
    def cov_hb(self):
        """Message field 'cov_hb'."""
        return self._cov_hb

    @cov_hb.setter
    def cov_hb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_hb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_hb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_hb = value
