# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/IMUSetup.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IMUSetup(type):
    """Metaclass of message 'IMUSetup'."""

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
                'septentrio_gnss_driver.msg.IMUSetup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_setup
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_setup
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_setup
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_setup
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_setup

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


class IMUSetup(metaclass=Metaclass_IMUSetup):
    """Message class 'IMUSetup'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_serial_port',
        '_ant_lever_arm_x',
        '_ant_lever_arm_y',
        '_ant_lever_arm_z',
        '_theta_x',
        '_theta_y',
        '_theta_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'serial_port': 'uint8',
        'ant_lever_arm_x': 'float',
        'ant_lever_arm_y': 'float',
        'ant_lever_arm_z': 'float',
        'theta_x': 'float',
        'theta_y': 'float',
        'theta_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.serial_port = kwargs.get('serial_port', int())
        self.ant_lever_arm_x = kwargs.get('ant_lever_arm_x', float())
        self.ant_lever_arm_y = kwargs.get('ant_lever_arm_y', float())
        self.ant_lever_arm_z = kwargs.get('ant_lever_arm_z', float())
        self.theta_x = kwargs.get('theta_x', float())
        self.theta_y = kwargs.get('theta_y', float())
        self.theta_z = kwargs.get('theta_z', float())

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
        if self.serial_port != other.serial_port:
            return False
        if self.ant_lever_arm_x != other.ant_lever_arm_x:
            return False
        if self.ant_lever_arm_y != other.ant_lever_arm_y:
            return False
        if self.ant_lever_arm_z != other.ant_lever_arm_z:
            return False
        if self.theta_x != other.theta_x:
            return False
        if self.theta_y != other.theta_y:
            return False
        if self.theta_z != other.theta_z:
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
    def serial_port(self):
        """Message field 'serial_port'."""
        return self._serial_port

    @serial_port.setter
    def serial_port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_port' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'serial_port' field must be an unsigned integer in [0, 255]"
        self._serial_port = value

    @builtins.property
    def ant_lever_arm_x(self):
        """Message field 'ant_lever_arm_x'."""
        return self._ant_lever_arm_x

    @ant_lever_arm_x.setter
    def ant_lever_arm_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ant_lever_arm_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ant_lever_arm_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ant_lever_arm_x = value

    @builtins.property
    def ant_lever_arm_y(self):
        """Message field 'ant_lever_arm_y'."""
        return self._ant_lever_arm_y

    @ant_lever_arm_y.setter
    def ant_lever_arm_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ant_lever_arm_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ant_lever_arm_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ant_lever_arm_y = value

    @builtins.property
    def ant_lever_arm_z(self):
        """Message field 'ant_lever_arm_z'."""
        return self._ant_lever_arm_z

    @ant_lever_arm_z.setter
    def ant_lever_arm_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ant_lever_arm_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ant_lever_arm_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ant_lever_arm_z = value

    @builtins.property
    def theta_x(self):
        """Message field 'theta_x'."""
        return self._theta_x

    @theta_x.setter
    def theta_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'theta_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._theta_x = value

    @builtins.property
    def theta_y(self):
        """Message field 'theta_y'."""
        return self._theta_y

    @theta_y.setter
    def theta_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'theta_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._theta_y = value

    @builtins.property
    def theta_z(self):
        """Message field 'theta_z'."""
        return self._theta_z

    @theta_z.setter
    def theta_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'theta_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._theta_z = value
