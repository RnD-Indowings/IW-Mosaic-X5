# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/VelSensorSetup.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelSensorSetup(type):
    """Metaclass of message 'VelSensorSetup'."""

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
                'septentrio_gnss_driver.msg.VelSensorSetup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vel_sensor_setup
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vel_sensor_setup
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vel_sensor_setup
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vel_sensor_setup
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vel_sensor_setup

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


class VelSensorSetup(metaclass=Metaclass_VelSensorSetup):
    """Message class 'VelSensorSetup'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_port',
        '_lever_arm_x',
        '_lever_arm_y',
        '_lever_arm_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'port': 'uint8',
        'lever_arm_x': 'float',
        'lever_arm_y': 'float',
        'lever_arm_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.port = kwargs.get('port', int())
        self.lever_arm_x = kwargs.get('lever_arm_x', float())
        self.lever_arm_y = kwargs.get('lever_arm_y', float())
        self.lever_arm_z = kwargs.get('lever_arm_z', float())

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
        if self.port != other.port:
            return False
        if self.lever_arm_x != other.lever_arm_x:
            return False
        if self.lever_arm_y != other.lever_arm_y:
            return False
        if self.lever_arm_z != other.lever_arm_z:
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
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'port' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'port' field must be an unsigned integer in [0, 255]"
        self._port = value

    @builtins.property
    def lever_arm_x(self):
        """Message field 'lever_arm_x'."""
        return self._lever_arm_x

    @lever_arm_x.setter
    def lever_arm_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lever_arm_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lever_arm_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lever_arm_x = value

    @builtins.property
    def lever_arm_y(self):
        """Message field 'lever_arm_y'."""
        return self._lever_arm_y

    @lever_arm_y.setter
    def lever_arm_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lever_arm_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lever_arm_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lever_arm_y = value

    @builtins.property
    def lever_arm_z(self):
        """Message field 'lever_arm_z'."""
        return self._lever_arm_z

    @lever_arm_z.setter
    def lever_arm_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lever_arm_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lever_arm_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lever_arm_z = value
