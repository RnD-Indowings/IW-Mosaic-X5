# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PosCovCartesian(type):
    """Metaclass of message 'PosCovCartesian'."""

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
                'septentrio_gnss_driver.msg.PosCovCartesian')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pos_cov_cartesian
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pos_cov_cartesian
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pos_cov_cartesian
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pos_cov_cartesian
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pos_cov_cartesian

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


class PosCovCartesian(metaclass=Metaclass_PosCovCartesian):
    """Message class 'PosCovCartesian'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_mode',
        '_error',
        '_cov_xx',
        '_cov_yy',
        '_cov_zz',
        '_cov_bb',
        '_cov_xy',
        '_cov_xz',
        '_cov_xb',
        '_cov_yz',
        '_cov_yb',
        '_cov_zb',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'mode': 'uint8',
        'error': 'uint8',
        'cov_xx': 'float',
        'cov_yy': 'float',
        'cov_zz': 'float',
        'cov_bb': 'float',
        'cov_xy': 'float',
        'cov_xz': 'float',
        'cov_xb': 'float',
        'cov_yz': 'float',
        'cov_yb': 'float',
        'cov_zb': 'float',
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
        self.cov_xx = kwargs.get('cov_xx', float())
        self.cov_yy = kwargs.get('cov_yy', float())
        self.cov_zz = kwargs.get('cov_zz', float())
        self.cov_bb = kwargs.get('cov_bb', float())
        self.cov_xy = kwargs.get('cov_xy', float())
        self.cov_xz = kwargs.get('cov_xz', float())
        self.cov_xb = kwargs.get('cov_xb', float())
        self.cov_yz = kwargs.get('cov_yz', float())
        self.cov_yb = kwargs.get('cov_yb', float())
        self.cov_zb = kwargs.get('cov_zb', float())

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
        if self.cov_xx != other.cov_xx:
            return False
        if self.cov_yy != other.cov_yy:
            return False
        if self.cov_zz != other.cov_zz:
            return False
        if self.cov_bb != other.cov_bb:
            return False
        if self.cov_xy != other.cov_xy:
            return False
        if self.cov_xz != other.cov_xz:
            return False
        if self.cov_xb != other.cov_xb:
            return False
        if self.cov_yz != other.cov_yz:
            return False
        if self.cov_yb != other.cov_yb:
            return False
        if self.cov_zb != other.cov_zb:
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
    def cov_xx(self):
        """Message field 'cov_xx'."""
        return self._cov_xx

    @cov_xx.setter
    def cov_xx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_xx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_xx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_xx = value

    @builtins.property
    def cov_yy(self):
        """Message field 'cov_yy'."""
        return self._cov_yy

    @cov_yy.setter
    def cov_yy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_yy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_yy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_yy = value

    @builtins.property
    def cov_zz(self):
        """Message field 'cov_zz'."""
        return self._cov_zz

    @cov_zz.setter
    def cov_zz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_zz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_zz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_zz = value

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
    def cov_xy(self):
        """Message field 'cov_xy'."""
        return self._cov_xy

    @cov_xy.setter
    def cov_xy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_xy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_xy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_xy = value

    @builtins.property
    def cov_xz(self):
        """Message field 'cov_xz'."""
        return self._cov_xz

    @cov_xz.setter
    def cov_xz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_xz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_xz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_xz = value

    @builtins.property
    def cov_xb(self):
        """Message field 'cov_xb'."""
        return self._cov_xb

    @cov_xb.setter
    def cov_xb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_xb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_xb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_xb = value

    @builtins.property
    def cov_yz(self):
        """Message field 'cov_yz'."""
        return self._cov_yz

    @cov_yz.setter
    def cov_yz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_yz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_yz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_yz = value

    @builtins.property
    def cov_yb(self):
        """Message field 'cov_yb'."""
        return self._cov_yb

    @cov_yb.setter
    def cov_yb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_yb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_yb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_yb = value

    @builtins.property
    def cov_zb(self):
        """Message field 'cov_zb'."""
        return self._cov_zb

    @cov_zb.setter
    def cov_zb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_zb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_zb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_zb = value
