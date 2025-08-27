# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/AIMPlusStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AIMPlusStatus(type):
    """Metaclass of message 'AIMPlusStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SPECTRUM_CLEAN': 0,
        'INTERFERENCE_MITIGATED': 1,
        'INTERFERENCE_PRESENT': 2,
        'NONE_DETECTED': 0,
        'SPOOFING_DETECTED_BY_OSNMA': 1,
        'SPOOFING_DETECTED_BY_AUTHENTCITY_TEST': 2,
        'SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST': 3,
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
                'septentrio_gnss_driver.msg.AIMPlusStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aim_plus_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aim_plus_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aim_plus_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aim_plus_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aim_plus_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SPECTRUM_CLEAN': cls.__constants['SPECTRUM_CLEAN'],
            'INTERFERENCE_MITIGATED': cls.__constants['INTERFERENCE_MITIGATED'],
            'INTERFERENCE_PRESENT': cls.__constants['INTERFERENCE_PRESENT'],
            'NONE_DETECTED': cls.__constants['NONE_DETECTED'],
            'SPOOFING_DETECTED_BY_OSNMA': cls.__constants['SPOOFING_DETECTED_BY_OSNMA'],
            'SPOOFING_DETECTED_BY_AUTHENTCITY_TEST': cls.__constants['SPOOFING_DETECTED_BY_AUTHENTCITY_TEST'],
            'SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST': cls.__constants['SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST'],
        }

    @property
    def SPECTRUM_CLEAN(self):
        """Message constant 'SPECTRUM_CLEAN'."""
        return Metaclass_AIMPlusStatus.__constants['SPECTRUM_CLEAN']

    @property
    def INTERFERENCE_MITIGATED(self):
        """Message constant 'INTERFERENCE_MITIGATED'."""
        return Metaclass_AIMPlusStatus.__constants['INTERFERENCE_MITIGATED']

    @property
    def INTERFERENCE_PRESENT(self):
        """Message constant 'INTERFERENCE_PRESENT'."""
        return Metaclass_AIMPlusStatus.__constants['INTERFERENCE_PRESENT']

    @property
    def NONE_DETECTED(self):
        """Message constant 'NONE_DETECTED'."""
        return Metaclass_AIMPlusStatus.__constants['NONE_DETECTED']

    @property
    def SPOOFING_DETECTED_BY_OSNMA(self):
        """Message constant 'SPOOFING_DETECTED_BY_OSNMA'."""
        return Metaclass_AIMPlusStatus.__constants['SPOOFING_DETECTED_BY_OSNMA']

    @property
    def SPOOFING_DETECTED_BY_AUTHENTCITY_TEST(self):
        """Message constant 'SPOOFING_DETECTED_BY_AUTHENTCITY_TEST'."""
        return Metaclass_AIMPlusStatus.__constants['SPOOFING_DETECTED_BY_AUTHENTCITY_TEST']

    @property
    def SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST(self):
        """Message constant 'SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST'."""
        return Metaclass_AIMPlusStatus.__constants['SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST']


class AIMPlusStatus(metaclass=Metaclass_AIMPlusStatus):
    """
    Message class 'AIMPlusStatus'.

    Constants:
      SPECTRUM_CLEAN
      INTERFERENCE_MITIGATED
      INTERFERENCE_PRESENT
      NONE_DETECTED
      SPOOFING_DETECTED_BY_OSNMA
      SPOOFING_DETECTED_BY_AUTHENTCITY_TEST
      SPOOFING_DETECTED_BY_OSNMA_AND_AUTHENTCITY_TEST
    """

    __slots__ = [
        '_header',
        '_tow',
        '_wnc',
        '_interference',
        '_spoofing',
        '_osnma_authenticating',
        '_galileo_authentic',
        '_galileo_spoofed',
        '_gps_authentic',
        '_gps_spoofed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tow': 'uint32',
        'wnc': 'uint16',
        'interference': 'uint8',
        'spoofing': 'uint8',
        'osnma_authenticating': 'boolean',
        'galileo_authentic': 'uint8',
        'galileo_spoofed': 'uint8',
        'gps_authentic': 'uint8',
        'gps_spoofed': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tow = kwargs.get('tow', int())
        self.wnc = kwargs.get('wnc', int())
        self.interference = kwargs.get('interference', int())
        self.spoofing = kwargs.get('spoofing', int())
        self.osnma_authenticating = kwargs.get('osnma_authenticating', bool())
        self.galileo_authentic = kwargs.get('galileo_authentic', int())
        self.galileo_spoofed = kwargs.get('galileo_spoofed', int())
        self.gps_authentic = kwargs.get('gps_authentic', int())
        self.gps_spoofed = kwargs.get('gps_spoofed', int())

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
        if self.tow != other.tow:
            return False
        if self.wnc != other.wnc:
            return False
        if self.interference != other.interference:
            return False
        if self.spoofing != other.spoofing:
            return False
        if self.osnma_authenticating != other.osnma_authenticating:
            return False
        if self.galileo_authentic != other.galileo_authentic:
            return False
        if self.galileo_spoofed != other.galileo_spoofed:
            return False
        if self.gps_authentic != other.gps_authentic:
            return False
        if self.gps_spoofed != other.gps_spoofed:
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
    def tow(self):
        """Message field 'tow'."""
        return self._tow

    @tow.setter
    def tow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tow' field must be an unsigned integer in [0, 4294967295]"
        self._tow = value

    @builtins.property
    def wnc(self):
        """Message field 'wnc'."""
        return self._wnc

    @wnc.setter
    def wnc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wnc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'wnc' field must be an unsigned integer in [0, 65535]"
        self._wnc = value

    @builtins.property
    def interference(self):
        """Message field 'interference'."""
        return self._interference

    @interference.setter
    def interference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interference' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'interference' field must be an unsigned integer in [0, 255]"
        self._interference = value

    @builtins.property
    def spoofing(self):
        """Message field 'spoofing'."""
        return self._spoofing

    @spoofing.setter
    def spoofing(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spoofing' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spoofing' field must be an unsigned integer in [0, 255]"
        self._spoofing = value

    @builtins.property
    def osnma_authenticating(self):
        """Message field 'osnma_authenticating'."""
        return self._osnma_authenticating

    @osnma_authenticating.setter
    def osnma_authenticating(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'osnma_authenticating' field must be of type 'bool'"
        self._osnma_authenticating = value

    @builtins.property
    def galileo_authentic(self):
        """Message field 'galileo_authentic'."""
        return self._galileo_authentic

    @galileo_authentic.setter
    def galileo_authentic(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'galileo_authentic' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'galileo_authentic' field must be an unsigned integer in [0, 255]"
        self._galileo_authentic = value

    @builtins.property
    def galileo_spoofed(self):
        """Message field 'galileo_spoofed'."""
        return self._galileo_spoofed

    @galileo_spoofed.setter
    def galileo_spoofed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'galileo_spoofed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'galileo_spoofed' field must be an unsigned integer in [0, 255]"
        self._galileo_spoofed = value

    @builtins.property
    def gps_authentic(self):
        """Message field 'gps_authentic'."""
        return self._gps_authentic

    @gps_authentic.setter
    def gps_authentic(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_authentic' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gps_authentic' field must be an unsigned integer in [0, 255]"
        self._gps_authentic = value

    @builtins.property
    def gps_spoofed(self):
        """Message field 'gps_spoofed'."""
        return self._gps_spoofed

    @gps_spoofed.setter
    def gps_spoofed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_spoofed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gps_spoofed' field must be an unsigned integer in [0, 255]"
        self._gps_spoofed = value
