# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelCovGeodetic(type):
    """Metaclass of message 'VelCovGeodetic'."""

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
                'septentrio_gnss_driver.msg.VelCovGeodetic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vel_cov_geodetic
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vel_cov_geodetic
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vel_cov_geodetic
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vel_cov_geodetic
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vel_cov_geodetic

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


class VelCovGeodetic(metaclass=Metaclass_VelCovGeodetic):
    """Message class 'VelCovGeodetic'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_mode',
        '_error',
        '_cov_vnvn',
        '_cov_veve',
        '_cov_vuvu',
        '_cov_dtdt',
        '_cov_vnve',
        '_cov_vnvu',
        '_cov_vndt',
        '_cov_vevu',
        '_cov_vedt',
        '_cov_vudt',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'mode': 'uint8',
        'error': 'uint8',
        'cov_vnvn': 'float',
        'cov_veve': 'float',
        'cov_vuvu': 'float',
        'cov_dtdt': 'float',
        'cov_vnve': 'float',
        'cov_vnvu': 'float',
        'cov_vndt': 'float',
        'cov_vevu': 'float',
        'cov_vedt': 'float',
        'cov_vudt': 'float',
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
        self.cov_vnvn = kwargs.get('cov_vnvn', float())
        self.cov_veve = kwargs.get('cov_veve', float())
        self.cov_vuvu = kwargs.get('cov_vuvu', float())
        self.cov_dtdt = kwargs.get('cov_dtdt', float())
        self.cov_vnve = kwargs.get('cov_vnve', float())
        self.cov_vnvu = kwargs.get('cov_vnvu', float())
        self.cov_vndt = kwargs.get('cov_vndt', float())
        self.cov_vevu = kwargs.get('cov_vevu', float())
        self.cov_vedt = kwargs.get('cov_vedt', float())
        self.cov_vudt = kwargs.get('cov_vudt', float())

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
        if self.cov_vnvn != other.cov_vnvn:
            return False
        if self.cov_veve != other.cov_veve:
            return False
        if self.cov_vuvu != other.cov_vuvu:
            return False
        if self.cov_dtdt != other.cov_dtdt:
            return False
        if self.cov_vnve != other.cov_vnve:
            return False
        if self.cov_vnvu != other.cov_vnvu:
            return False
        if self.cov_vndt != other.cov_vndt:
            return False
        if self.cov_vevu != other.cov_vevu:
            return False
        if self.cov_vedt != other.cov_vedt:
            return False
        if self.cov_vudt != other.cov_vudt:
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
    def cov_vnvn(self):
        """Message field 'cov_vnvn'."""
        return self._cov_vnvn

    @cov_vnvn.setter
    def cov_vnvn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vnvn' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vnvn' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vnvn = value

    @builtins.property
    def cov_veve(self):
        """Message field 'cov_veve'."""
        return self._cov_veve

    @cov_veve.setter
    def cov_veve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_veve' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_veve' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_veve = value

    @builtins.property
    def cov_vuvu(self):
        """Message field 'cov_vuvu'."""
        return self._cov_vuvu

    @cov_vuvu.setter
    def cov_vuvu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vuvu' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vuvu' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vuvu = value

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
    def cov_vnve(self):
        """Message field 'cov_vnve'."""
        return self._cov_vnve

    @cov_vnve.setter
    def cov_vnve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vnve' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vnve' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vnve = value

    @builtins.property
    def cov_vnvu(self):
        """Message field 'cov_vnvu'."""
        return self._cov_vnvu

    @cov_vnvu.setter
    def cov_vnvu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vnvu' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vnvu' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vnvu = value

    @builtins.property
    def cov_vndt(self):
        """Message field 'cov_vndt'."""
        return self._cov_vndt

    @cov_vndt.setter
    def cov_vndt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vndt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vndt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vndt = value

    @builtins.property
    def cov_vevu(self):
        """Message field 'cov_vevu'."""
        return self._cov_vevu

    @cov_vevu.setter
    def cov_vevu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vevu' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vevu' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vevu = value

    @builtins.property
    def cov_vedt(self):
        """Message field 'cov_vedt'."""
        return self._cov_vedt

    @cov_vedt.setter
    def cov_vedt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vedt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vedt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vedt = value

    @builtins.property
    def cov_vudt(self):
        """Message field 'cov_vudt'."""
        return self._cov_vudt

    @cov_vudt.setter
    def cov_vudt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vudt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vudt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vudt = value
