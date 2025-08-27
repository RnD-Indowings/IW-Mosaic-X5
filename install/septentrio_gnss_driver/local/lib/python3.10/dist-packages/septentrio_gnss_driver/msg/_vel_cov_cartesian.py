# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelCovCartesian(type):
    """Metaclass of message 'VelCovCartesian'."""

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
                'septentrio_gnss_driver.msg.VelCovCartesian')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vel_cov_cartesian
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vel_cov_cartesian
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vel_cov_cartesian
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vel_cov_cartesian
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vel_cov_cartesian

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


class VelCovCartesian(metaclass=Metaclass_VelCovCartesian):
    """Message class 'VelCovCartesian'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_mode',
        '_error',
        '_cov_vxvx',
        '_cov_vyvy',
        '_cov_vzvz',
        '_cov_dtdt',
        '_cov_vxvy',
        '_cov_vxvz',
        '_cov_vxdt',
        '_cov_vyvz',
        '_cov_vydt',
        '_cov_vzdt',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'mode': 'uint8',
        'error': 'uint8',
        'cov_vxvx': 'float',
        'cov_vyvy': 'float',
        'cov_vzvz': 'float',
        'cov_dtdt': 'float',
        'cov_vxvy': 'float',
        'cov_vxvz': 'float',
        'cov_vxdt': 'float',
        'cov_vyvz': 'float',
        'cov_vydt': 'float',
        'cov_vzdt': 'float',
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
        self.cov_vxvx = kwargs.get('cov_vxvx', float())
        self.cov_vyvy = kwargs.get('cov_vyvy', float())
        self.cov_vzvz = kwargs.get('cov_vzvz', float())
        self.cov_dtdt = kwargs.get('cov_dtdt', float())
        self.cov_vxvy = kwargs.get('cov_vxvy', float())
        self.cov_vxvz = kwargs.get('cov_vxvz', float())
        self.cov_vxdt = kwargs.get('cov_vxdt', float())
        self.cov_vyvz = kwargs.get('cov_vyvz', float())
        self.cov_vydt = kwargs.get('cov_vydt', float())
        self.cov_vzdt = kwargs.get('cov_vzdt', float())

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
        if self.cov_vxvx != other.cov_vxvx:
            return False
        if self.cov_vyvy != other.cov_vyvy:
            return False
        if self.cov_vzvz != other.cov_vzvz:
            return False
        if self.cov_dtdt != other.cov_dtdt:
            return False
        if self.cov_vxvy != other.cov_vxvy:
            return False
        if self.cov_vxvz != other.cov_vxvz:
            return False
        if self.cov_vxdt != other.cov_vxdt:
            return False
        if self.cov_vyvz != other.cov_vyvz:
            return False
        if self.cov_vydt != other.cov_vydt:
            return False
        if self.cov_vzdt != other.cov_vzdt:
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
    def cov_vxvx(self):
        """Message field 'cov_vxvx'."""
        return self._cov_vxvx

    @cov_vxvx.setter
    def cov_vxvx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vxvx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vxvx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vxvx = value

    @builtins.property
    def cov_vyvy(self):
        """Message field 'cov_vyvy'."""
        return self._cov_vyvy

    @cov_vyvy.setter
    def cov_vyvy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vyvy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vyvy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vyvy = value

    @builtins.property
    def cov_vzvz(self):
        """Message field 'cov_vzvz'."""
        return self._cov_vzvz

    @cov_vzvz.setter
    def cov_vzvz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vzvz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vzvz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vzvz = value

    @builtins.property
    def cov_dtdt(self):
        """Message field 'cov_dtdt'."""
        return self._cov_dtdt

    @cov_dtdt.setter
    def cov_dtdt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_dtdt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_dtdt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_dtdt = value

    @builtins.property
    def cov_vxvy(self):
        """Message field 'cov_vxvy'."""
        return self._cov_vxvy

    @cov_vxvy.setter
    def cov_vxvy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vxvy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vxvy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vxvy = value

    @builtins.property
    def cov_vxvz(self):
        """Message field 'cov_vxvz'."""
        return self._cov_vxvz

    @cov_vxvz.setter
    def cov_vxvz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vxvz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vxvz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vxvz = value

    @builtins.property
    def cov_vxdt(self):
        """Message field 'cov_vxdt'."""
        return self._cov_vxdt

    @cov_vxdt.setter
    def cov_vxdt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vxdt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vxdt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vxdt = value

    @builtins.property
    def cov_vyvz(self):
        """Message field 'cov_vyvz'."""
        return self._cov_vyvz

    @cov_vyvz.setter
    def cov_vyvz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vyvz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vyvz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vyvz = value

    @builtins.property
    def cov_vydt(self):
        """Message field 'cov_vydt'."""
        return self._cov_vydt

    @cov_vydt.setter
    def cov_vydt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vydt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vydt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vydt = value

    @builtins.property
    def cov_vzdt(self):
        """Message field 'cov_vzdt'."""
        return self._cov_vzdt

    @cov_vzdt.setter
    def cov_vzdt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vzdt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vzdt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vzdt = value
