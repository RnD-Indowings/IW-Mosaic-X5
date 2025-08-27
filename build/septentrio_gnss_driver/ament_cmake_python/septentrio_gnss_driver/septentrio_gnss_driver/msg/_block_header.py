# generated from rosidl_generator_py/resource/_idl.py.em
# with input from septentrio_gnss_driver:msg/BlockHeader.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlockHeader(type):
    """Metaclass of message 'BlockHeader'."""

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
                'septentrio_gnss_driver.msg.BlockHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__block_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__block_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__block_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__block_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__block_header

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SYNC_1__DEFAULT': 36,
            'SYNC_2__DEFAULT': 64,
            'TOW__DEFAULT': 4294967295,
            'WNC__DEFAULT': 65535,
        }

    @property
    def SYNC_1__DEFAULT(cls):
        """Return default value for message field 'sync_1'."""
        return 36

    @property
    def SYNC_2__DEFAULT(cls):
        """Return default value for message field 'sync_2'."""
        return 64

    @property
    def TOW__DEFAULT(cls):
        """Return default value for message field 'tow'."""
        return 4294967295

    @property
    def WNC__DEFAULT(cls):
        """Return default value for message field 'wnc'."""
        return 65535


class BlockHeader(metaclass=Metaclass_BlockHeader):
    """Message class 'BlockHeader'."""

    __slots__ = [
        '_sync_1',
        '_sync_2',
        '_crc',
        '_id',
        '_revision',
        '_length',
        '_tow',
        '_wnc',
    ]

    _fields_and_field_types = {
        'sync_1': 'uint8',
        'sync_2': 'uint8',
        'crc': 'uint16',
        'id': 'uint16',
        'revision': 'uint8',
        'length': 'uint16',
        'tow': 'uint32',
        'wnc': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sync_1 = kwargs.get(
            'sync_1', BlockHeader.SYNC_1__DEFAULT)
        self.sync_2 = kwargs.get(
            'sync_2', BlockHeader.SYNC_2__DEFAULT)
        self.crc = kwargs.get('crc', int())
        self.id = kwargs.get('id', int())
        self.revision = kwargs.get('revision', int())
        self.length = kwargs.get('length', int())
        self.tow = kwargs.get(
            'tow', BlockHeader.TOW__DEFAULT)
        self.wnc = kwargs.get(
            'wnc', BlockHeader.WNC__DEFAULT)

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
        if self.sync_1 != other.sync_1:
            return False
        if self.sync_2 != other.sync_2:
            return False
        if self.crc != other.crc:
            return False
        if self.id != other.id:
            return False
        if self.revision != other.revision:
            return False
        if self.length != other.length:
            return False
        if self.tow != other.tow:
            return False
        if self.wnc != other.wnc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sync_1(self):
        """Message field 'sync_1'."""
        return self._sync_1

    @sync_1.setter
    def sync_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sync_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sync_1' field must be an unsigned integer in [0, 255]"
        self._sync_1 = value

    @builtins.property
    def sync_2(self):
        """Message field 'sync_2'."""
        return self._sync_2

    @sync_2.setter
    def sync_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sync_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sync_2' field must be an unsigned integer in [0, 255]"
        self._sync_2 = value

    @builtins.property
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'crc' field must be an unsigned integer in [0, 65535]"
        self._crc = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'id' field must be an unsigned integer in [0, 65535]"
        self._id = value

    @builtins.property
    def revision(self):
        """Message field 'revision'."""
        return self._revision

    @revision.setter
    def revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'revision' field must be an unsigned integer in [0, 255]"
        self._revision = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'length' field must be an unsigned integer in [0, 65535]"
        self._length = value

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
