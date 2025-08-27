# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'source'
# Member 'sensor_model'
# Member 'type'
# Member 'obs_info'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExtSensorMeas(type):
    """Metaclass of message 'ExtSensorMeas'."""

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
                'septentrio_gnss_driver.msg.ExtSensorMeas')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ext_sensor_meas
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ext_sensor_meas
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ext_sensor_meas
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ext_sensor_meas
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ext_sensor_meas

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


class ExtSensorMeas(metaclass=Metaclass_ExtSensorMeas):
    """Message class 'ExtSensorMeas'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_n',
        '_sb_length',
        '_source',
        '_sensor_model',
        '_type',
        '_obs_info',
        '_acceleration_x',
        '_acceleration_y',
        '_acceleration_z',
        '_angular_rate_x',
        '_angular_rate_y',
        '_angular_rate_z',
        '_velocity_x',
        '_velocity_y',
        '_velocity_z',
        '_std_dev_x',
        '_std_dev_y',
        '_std_dev_z',
        '_sensor_temperature',
        '_zero_velocity_flag',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'n': 'uint8',
        'sb_length': 'uint8',
        'source': 'sequence<uint8>',
        'sensor_model': 'sequence<uint8>',
        'type': 'sequence<uint8>',
        'obs_info': 'sequence<uint8>',
        'acceleration_x': 'double',
        'acceleration_y': 'double',
        'acceleration_z': 'double',
        'angular_rate_x': 'double',
        'angular_rate_y': 'double',
        'angular_rate_z': 'double',
        'velocity_x': 'float',
        'velocity_y': 'float',
        'velocity_z': 'float',
        'std_dev_x': 'float',
        'std_dev_y': 'float',
        'std_dev_z': 'float',
        'sensor_temperature': 'float',
        'zero_velocity_flag': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from septentrio_gnss_driver.msg import BlockHeader
        self.block_header = kwargs.get('block_header', BlockHeader())
        self.n = kwargs.get('n', int())
        self.sb_length = kwargs.get('sb_length', int())
        self.source = array.array('B', kwargs.get('source', []))
        self.sensor_model = array.array('B', kwargs.get('sensor_model', []))
        self.type = array.array('B', kwargs.get('type', []))
        self.obs_info = array.array('B', kwargs.get('obs_info', []))
        self.acceleration_x = kwargs.get('acceleration_x', float())
        self.acceleration_y = kwargs.get('acceleration_y', float())
        self.acceleration_z = kwargs.get('acceleration_z', float())
        self.angular_rate_x = kwargs.get('angular_rate_x', float())
        self.angular_rate_y = kwargs.get('angular_rate_y', float())
        self.angular_rate_z = kwargs.get('angular_rate_z', float())
        self.velocity_x = kwargs.get('velocity_x', float())
        self.velocity_y = kwargs.get('velocity_y', float())
        self.velocity_z = kwargs.get('velocity_z', float())
        self.std_dev_x = kwargs.get('std_dev_x', float())
        self.std_dev_y = kwargs.get('std_dev_y', float())
        self.std_dev_z = kwargs.get('std_dev_z', float())
        self.sensor_temperature = kwargs.get('sensor_temperature', float())
        self.zero_velocity_flag = kwargs.get('zero_velocity_flag', float())

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
        if self.n != other.n:
            return False
        if self.sb_length != other.sb_length:
            return False
        if self.source != other.source:
            return False
        if self.sensor_model != other.sensor_model:
            return False
        if self.type != other.type:
            return False
        if self.obs_info != other.obs_info:
            return False
        if self.acceleration_x != other.acceleration_x:
            return False
        if self.acceleration_y != other.acceleration_y:
            return False
        if self.acceleration_z != other.acceleration_z:
            return False
        if self.angular_rate_x != other.angular_rate_x:
            return False
        if self.angular_rate_y != other.angular_rate_y:
            return False
        if self.angular_rate_z != other.angular_rate_z:
            return False
        if self.velocity_x != other.velocity_x:
            return False
        if self.velocity_y != other.velocity_y:
            return False
        if self.velocity_z != other.velocity_z:
            return False
        if self.std_dev_x != other.std_dev_x:
            return False
        if self.std_dev_y != other.std_dev_y:
            return False
        if self.std_dev_z != other.std_dev_z:
            return False
        if self.sensor_temperature != other.sensor_temperature:
            return False
        if self.zero_velocity_flag != other.zero_velocity_flag:
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
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'n' field must be an unsigned integer in [0, 255]"
        self._n = value

    @builtins.property
    def sb_length(self):
        """Message field 'sb_length'."""
        return self._sb_length

    @sb_length.setter
    def sb_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sb_length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sb_length' field must be an unsigned integer in [0, 255]"
        self._sb_length = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'source' array.array() must have the type code of 'B'"
            self._source = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'source' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._source = array.array('B', value)

    @builtins.property
    def sensor_model(self):
        """Message field 'sensor_model'."""
        return self._sensor_model

    @sensor_model.setter
    def sensor_model(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'sensor_model' array.array() must have the type code of 'B'"
            self._sensor_model = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'sensor_model' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._sensor_model = array.array('B', value)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'type' array.array() must have the type code of 'B'"
            self._type = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'type' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._type = array.array('B', value)

    @builtins.property
    def obs_info(self):
        """Message field 'obs_info'."""
        return self._obs_info

    @obs_info.setter
    def obs_info(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'obs_info' array.array() must have the type code of 'B'"
            self._obs_info = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'obs_info' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._obs_info = array.array('B', value)

    @builtins.property
    def acceleration_x(self):
        """Message field 'acceleration_x'."""
        return self._acceleration_x

    @acceleration_x.setter
    def acceleration_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_x = value

    @builtins.property
    def acceleration_y(self):
        """Message field 'acceleration_y'."""
        return self._acceleration_y

    @acceleration_y.setter
    def acceleration_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_y = value

    @builtins.property
    def acceleration_z(self):
        """Message field 'acceleration_z'."""
        return self._acceleration_z

    @acceleration_z.setter
    def acceleration_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_z = value

    @builtins.property
    def angular_rate_x(self):
        """Message field 'angular_rate_x'."""
        return self._angular_rate_x

    @angular_rate_x.setter
    def angular_rate_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_rate_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angular_rate_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angular_rate_x = value

    @builtins.property
    def angular_rate_y(self):
        """Message field 'angular_rate_y'."""
        return self._angular_rate_y

    @angular_rate_y.setter
    def angular_rate_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_rate_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angular_rate_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angular_rate_y = value

    @builtins.property
    def angular_rate_z(self):
        """Message field 'angular_rate_z'."""
        return self._angular_rate_z

    @angular_rate_z.setter
    def angular_rate_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_rate_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angular_rate_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angular_rate_z = value

    @builtins.property
    def velocity_x(self):
        """Message field 'velocity_x'."""
        return self._velocity_x

    @velocity_x.setter
    def velocity_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_x = value

    @builtins.property
    def velocity_y(self):
        """Message field 'velocity_y'."""
        return self._velocity_y

    @velocity_y.setter
    def velocity_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_y = value

    @builtins.property
    def velocity_z(self):
        """Message field 'velocity_z'."""
        return self._velocity_z

    @velocity_z.setter
    def velocity_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_z = value

    @builtins.property
    def std_dev_x(self):
        """Message field 'std_dev_x'."""
        return self._std_dev_x

    @std_dev_x.setter
    def std_dev_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'std_dev_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._std_dev_x = value

    @builtins.property
    def std_dev_y(self):
        """Message field 'std_dev_y'."""
        return self._std_dev_y

    @std_dev_y.setter
    def std_dev_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'std_dev_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._std_dev_y = value

    @builtins.property
    def std_dev_z(self):
        """Message field 'std_dev_z'."""
        return self._std_dev_z

    @std_dev_z.setter
    def std_dev_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'std_dev_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._std_dev_z = value

    @builtins.property
    def sensor_temperature(self):
        """Message field 'sensor_temperature'."""
        return self._sensor_temperature

    @sensor_temperature.setter
    def sensor_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sensor_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sensor_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sensor_temperature = value

    @builtins.property
    def zero_velocity_flag(self):
        """Message field 'zero_velocity_flag'."""
        return self._zero_velocity_flag

    @zero_velocity_flag.setter
    def zero_velocity_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zero_velocity_flag' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'zero_velocity_flag' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._zero_velocity_flag = value
