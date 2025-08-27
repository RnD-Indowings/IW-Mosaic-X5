# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/PVTCartesian.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PVTCartesian(type):
    """Metaclass of message 'PVTCartesian'."""

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
                'septentrio_gnss_driver.msg.PVTCartesian')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pvt_cartesian
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pvt_cartesian
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pvt_cartesian
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pvt_cartesian
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pvt_cartesian

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


class PVTCartesian(metaclass=Metaclass_PVTCartesian):
    """Message class 'PVTCartesian'."""

    __slots__ = [
        '_header',
        '_block_header',
        '_mode',
        '_error',
        '_x',
        '_y',
        '_z',
        '_undulation',
        '_vx',
        '_vy',
        '_vz',
        '_cog',
        '_rx_clk_bias',
        '_rx_clk_drift',
        '_time_system',
        '_datum',
        '_nr_sv',
        '_wa_corr_info',
        '_reference_id',
        '_mean_corr_age',
        '_signal_info',
        '_alert_flag',
        '_nr_bases',
        '_ppp_info',
        '_latency',
        '_h_accuracy',
        '_v_accuracy',
        '_misc',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'block_header': 'septentrio_gnss_driver/BlockHeader',
        'mode': 'uint8',
        'error': 'uint8',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'undulation': 'float',
        'vx': 'float',
        'vy': 'float',
        'vz': 'float',
        'cog': 'float',
        'rx_clk_bias': 'double',
        'rx_clk_drift': 'float',
        'time_system': 'uint8',
        'datum': 'uint8',
        'nr_sv': 'uint8',
        'wa_corr_info': 'uint8',
        'reference_id': 'uint16',
        'mean_corr_age': 'uint16',
        'signal_info': 'uint32',
        'alert_flag': 'uint8',
        'nr_bases': 'uint8',
        'ppp_info': 'uint16',
        'latency': 'uint16',
        'h_accuracy': 'uint16',
        'v_accuracy': 'uint16',
        'misc': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['septentrio_gnss_driver', 'msg'], 'BlockHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.undulation = kwargs.get('undulation', float())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.cog = kwargs.get('cog', float())
        self.rx_clk_bias = kwargs.get('rx_clk_bias', float())
        self.rx_clk_drift = kwargs.get('rx_clk_drift', float())
        self.time_system = kwargs.get('time_system', int())
        self.datum = kwargs.get('datum', int())
        self.nr_sv = kwargs.get('nr_sv', int())
        self.wa_corr_info = kwargs.get('wa_corr_info', int())
        self.reference_id = kwargs.get('reference_id', int())
        self.mean_corr_age = kwargs.get('mean_corr_age', int())
        self.signal_info = kwargs.get('signal_info', int())
        self.alert_flag = kwargs.get('alert_flag', int())
        self.nr_bases = kwargs.get('nr_bases', int())
        self.ppp_info = kwargs.get('ppp_info', int())
        self.latency = kwargs.get('latency', int())
        self.h_accuracy = kwargs.get('h_accuracy', int())
        self.v_accuracy = kwargs.get('v_accuracy', int())
        self.misc = kwargs.get('misc', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.undulation != other.undulation:
            return False
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.cog != other.cog:
            return False
        if self.rx_clk_bias != other.rx_clk_bias:
            return False
        if self.rx_clk_drift != other.rx_clk_drift:
            return False
        if self.time_system != other.time_system:
            return False
        if self.datum != other.datum:
            return False
        if self.nr_sv != other.nr_sv:
            return False
        if self.wa_corr_info != other.wa_corr_info:
            return False
        if self.reference_id != other.reference_id:
            return False
        if self.mean_corr_age != other.mean_corr_age:
            return False
        if self.signal_info != other.signal_info:
            return False
        if self.alert_flag != other.alert_flag:
            return False
        if self.nr_bases != other.nr_bases:
            return False
        if self.ppp_info != other.ppp_info:
            return False
        if self.latency != other.latency:
            return False
        if self.h_accuracy != other.h_accuracy:
            return False
        if self.v_accuracy != other.v_accuracy:
            return False
        if self.misc != other.misc:
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
    def cog(self):
        """Message field 'cog'."""
        return self._cog

    @cog.setter
    def cog(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cog' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cog' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cog = value

    @builtins.property
    def rx_clk_bias(self):
        """Message field 'rx_clk_bias'."""
        return self._rx_clk_bias

    @rx_clk_bias.setter
    def rx_clk_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_clk_bias' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rx_clk_bias' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rx_clk_bias = value

    @builtins.property
    def rx_clk_drift(self):
        """Message field 'rx_clk_drift'."""
        return self._rx_clk_drift

    @rx_clk_drift.setter
    def rx_clk_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_clk_drift' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rx_clk_drift' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rx_clk_drift = value

    @builtins.property
    def time_system(self):
        """Message field 'time_system'."""
        return self._time_system

    @time_system.setter
    def time_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_system' field must be an unsigned integer in [0, 255]"
        self._time_system = value

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
    def wa_corr_info(self):
        """Message field 'wa_corr_info'."""
        return self._wa_corr_info

    @wa_corr_info.setter
    def wa_corr_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wa_corr_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wa_corr_info' field must be an unsigned integer in [0, 255]"
        self._wa_corr_info = value

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
    def mean_corr_age(self):
        """Message field 'mean_corr_age'."""
        return self._mean_corr_age

    @mean_corr_age.setter
    def mean_corr_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_corr_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mean_corr_age' field must be an unsigned integer in [0, 65535]"
        self._mean_corr_age = value

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

    @builtins.property
    def alert_flag(self):
        """Message field 'alert_flag'."""
        return self._alert_flag

    @alert_flag.setter
    def alert_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alert_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alert_flag' field must be an unsigned integer in [0, 255]"
        self._alert_flag = value

    @builtins.property
    def nr_bases(self):
        """Message field 'nr_bases'."""
        return self._nr_bases

    @nr_bases.setter
    def nr_bases(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nr_bases' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nr_bases' field must be an unsigned integer in [0, 255]"
        self._nr_bases = value

    @builtins.property
    def ppp_info(self):
        """Message field 'ppp_info'."""
        return self._ppp_info

    @ppp_info.setter
    def ppp_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ppp_info' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ppp_info' field must be an unsigned integer in [0, 65535]"
        self._ppp_info = value

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
    def h_accuracy(self):
        """Message field 'h_accuracy'."""
        return self._h_accuracy

    @h_accuracy.setter
    def h_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'h_accuracy' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'h_accuracy' field must be an unsigned integer in [0, 65535]"
        self._h_accuracy = value

    @builtins.property
    def v_accuracy(self):
        """Message field 'v_accuracy'."""
        return self._v_accuracy

    @v_accuracy.setter
    def v_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'v_accuracy' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'v_accuracy' field must be an unsigned integer in [0, 65535]"
        self._v_accuracy = value

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
