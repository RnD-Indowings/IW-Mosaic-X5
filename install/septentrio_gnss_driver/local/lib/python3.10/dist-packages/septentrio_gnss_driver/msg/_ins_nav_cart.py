# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/INSNavCart.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSNavCart(type):
    """Metaclass of message 'INSNavCart'."""

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
                'septentrio_gnss_driver.msg.INSNavCart')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_nav_cart
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_nav_cart
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_nav_cart
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_nav_cart
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_nav_cart

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


class INSNavCart(metaclass=Metaclass_INSNavCart):
    """Message class 'INSNavCart'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_gnss_mode',
        '_error',
        '_info',
        '_gnss_age',
        '_x',
        '_y',
        '_z',
        '_accuracy',
        '_latency',
        '_datum',
        '_sb_list',
        '_x_std_dev',
        '_y_std_dev',
        '_z_std_dev',
        '_xy_cov',
        '_xz_cov',
        '_yz_cov',
        '_heading',
        '_pitch',
        '_roll',
        '_heading_std_dev',
        '_pitch_std_dev',
        '_roll_std_dev',
        '_heading_pitch_cov',
        '_heading_roll_cov',
        '_pitch_roll_cov',
        '_vx',
        '_vy',
        '_vz',
        '_vx_std_dev',
        '_vy_std_dev',
        '_vz_std_dev',
        '_vx_vy_cov',
        '_vx_vz_cov',
        '_vy_vz_cov',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'gnss_mode': 'uint8',
        'error': 'uint8',
        'info': 'uint16',
        'gnss_age': 'uint16',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'accuracy': 'uint16',
        'latency': 'uint16',
        'datum': 'uint8',
        'sb_list': 'uint16',
        'x_std_dev': 'float',
        'y_std_dev': 'float',
        'z_std_dev': 'float',
        'xy_cov': 'float',
        'xz_cov': 'float',
        'yz_cov': 'float',
        'heading': 'float',
        'pitch': 'float',
        'roll': 'float',
        'heading_std_dev': 'float',
        'pitch_std_dev': 'float',
        'roll_std_dev': 'float',
        'heading_pitch_cov': 'float',
        'heading_roll_cov': 'float',
        'pitch_roll_cov': 'float',
        'vx': 'float',
        'vy': 'float',
        'vz': 'float',
        'vx_std_dev': 'float',
        'vy_std_dev': 'float',
        'vz_std_dev': 'float',
        'vx_vy_cov': 'float',
        'vx_vz_cov': 'float',
        'vy_vz_cov': 'float',
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
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.accuracy = kwargs.get('accuracy', int())
        self.latency = kwargs.get('latency', int())
        self.datum = kwargs.get('datum', int())
        self.sb_list = kwargs.get('sb_list', int())
        self.x_std_dev = kwargs.get('x_std_dev', float())
        self.y_std_dev = kwargs.get('y_std_dev', float())
        self.z_std_dev = kwargs.get('z_std_dev', float())
        self.xy_cov = kwargs.get('xy_cov', float())
        self.xz_cov = kwargs.get('xz_cov', float())
        self.yz_cov = kwargs.get('yz_cov', float())
        self.heading = kwargs.get('heading', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.heading_std_dev = kwargs.get('heading_std_dev', float())
        self.pitch_std_dev = kwargs.get('pitch_std_dev', float())
        self.roll_std_dev = kwargs.get('roll_std_dev', float())
        self.heading_pitch_cov = kwargs.get('heading_pitch_cov', float())
        self.heading_roll_cov = kwargs.get('heading_roll_cov', float())
        self.pitch_roll_cov = kwargs.get('pitch_roll_cov', float())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.vx_std_dev = kwargs.get('vx_std_dev', float())
        self.vy_std_dev = kwargs.get('vy_std_dev', float())
        self.vz_std_dev = kwargs.get('vz_std_dev', float())
        self.vx_vy_cov = kwargs.get('vx_vy_cov', float())
        self.vx_vz_cov = kwargs.get('vx_vz_cov', float())
        self.vy_vz_cov = kwargs.get('vy_vz_cov', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.accuracy != other.accuracy:
            return False
        if self.latency != other.latency:
            return False
        if self.datum != other.datum:
            return False
        if self.sb_list != other.sb_list:
            return False
        if self.x_std_dev != other.x_std_dev:
            return False
        if self.y_std_dev != other.y_std_dev:
            return False
        if self.z_std_dev != other.z_std_dev:
            return False
        if self.xy_cov != other.xy_cov:
            return False
        if self.xz_cov != other.xz_cov:
            return False
        if self.yz_cov != other.yz_cov:
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
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.vx_std_dev != other.vx_std_dev:
            return False
        if self.vy_std_dev != other.vy_std_dev:
            return False
        if self.vz_std_dev != other.vz_std_dev:
            return False
        if self.vx_vy_cov != other.vx_vy_cov:
            return False
        if self.vx_vz_cov != other.vx_vz_cov:
            return False
        if self.vy_vz_cov != other.vy_vz_cov:
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
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

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
    def x_std_dev(self):
        """Message field 'x_std_dev'."""
        return self._x_std_dev

    @x_std_dev.setter
    def x_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_std_dev = value

    @builtins.property
    def y_std_dev(self):
        """Message field 'y_std_dev'."""
        return self._y_std_dev

    @y_std_dev.setter
    def y_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_std_dev = value

    @builtins.property
    def z_std_dev(self):
        """Message field 'z_std_dev'."""
        return self._z_std_dev

    @z_std_dev.setter
    def z_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_std_dev = value

    @builtins.property
    def xy_cov(self):
        """Message field 'xy_cov'."""
        return self._xy_cov

    @xy_cov.setter
    def xy_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xy_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'xy_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._xy_cov = value

    @builtins.property
    def xz_cov(self):
        """Message field 'xz_cov'."""
        return self._xz_cov

    @xz_cov.setter
    def xz_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xz_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'xz_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._xz_cov = value

    @builtins.property
    def yz_cov(self):
        """Message field 'yz_cov'."""
        return self._yz_cov

    @yz_cov.setter
    def yz_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yz_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yz_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yz_cov = value

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
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx = value

    @builtins.property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy = value

    @builtins.property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vz = value

    @builtins.property
    def vx_std_dev(self):
        """Message field 'vx_std_dev'."""
        return self._vx_std_dev

    @vx_std_dev.setter
    def vx_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx_std_dev = value

    @builtins.property
    def vy_std_dev(self):
        """Message field 'vy_std_dev'."""
        return self._vy_std_dev

    @vy_std_dev.setter
    def vy_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy_std_dev = value

    @builtins.property
    def vz_std_dev(self):
        """Message field 'vz_std_dev'."""
        return self._vz_std_dev

    @vz_std_dev.setter
    def vz_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz_std_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vz_std_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vz_std_dev = value

    @builtins.property
    def vx_vy_cov(self):
        """Message field 'vx_vy_cov'."""
        return self._vx_vy_cov

    @vx_vy_cov.setter
    def vx_vy_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_vy_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx_vy_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx_vy_cov = value

    @builtins.property
    def vx_vz_cov(self):
        """Message field 'vx_vz_cov'."""
        return self._vx_vz_cov

    @vx_vz_cov.setter
    def vx_vz_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_vz_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx_vz_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx_vz_cov = value

    @builtins.property
    def vy_vz_cov(self):
        """Message field 'vy_vz_cov'."""
        return self._vy_vz_cov

    @vy_vz_cov.setter
    def vy_vz_cov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy_vz_cov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy_vz_cov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy_vz_cov = value
