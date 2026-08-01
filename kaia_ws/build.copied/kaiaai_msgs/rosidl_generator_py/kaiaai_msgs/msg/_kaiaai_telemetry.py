# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'joint_pos'
# Member 'joint_vel'
# Member 'lds'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KaiaaiTelemetry(type):
    """Metaclass of message 'KaiaaiTelemetry'."""

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
            module = import_type_support('kaiaai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kaiaai_msgs.msg.KaiaaiTelemetry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kaiaai_telemetry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kaiaai_telemetry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kaiaai_telemetry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kaiaai_telemetry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kaiaai_telemetry

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KaiaaiTelemetry(metaclass=Metaclass_KaiaaiTelemetry):
    """Message class 'KaiaaiTelemetry'."""

    __slots__ = [
        '_stamp',
        '_seq',
        '_odom_pos_x',
        '_odom_pos_y',
        '_odom_pos_yaw',
        '_odom_vel_x',
        '_odom_vel_yaw',
        '_joint_pos',
        '_joint_vel',
        '_lds',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'seq': 'uint32',
        'odom_pos_x': 'float',
        'odom_pos_y': 'float',
        'odom_pos_yaw': 'float',
        'odom_vel_x': 'float',
        'odom_vel_yaw': 'float',
        'joint_pos': 'sequence<float>',
        'joint_vel': 'sequence<float>',
        'lds': 'sequence<uint8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.seq = kwargs.get('seq', int())
        self.odom_pos_x = kwargs.get('odom_pos_x', float())
        self.odom_pos_y = kwargs.get('odom_pos_y', float())
        self.odom_pos_yaw = kwargs.get('odom_pos_yaw', float())
        self.odom_vel_x = kwargs.get('odom_vel_x', float())
        self.odom_vel_yaw = kwargs.get('odom_vel_yaw', float())
        self.joint_pos = array.array('f', kwargs.get('joint_pos', []))
        self.joint_vel = array.array('f', kwargs.get('joint_vel', []))
        self.lds = array.array('B', kwargs.get('lds', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.seq != other.seq:
            return False
        if self.odom_pos_x != other.odom_pos_x:
            return False
        if self.odom_pos_y != other.odom_pos_y:
            return False
        if self.odom_pos_yaw != other.odom_pos_yaw:
            return False
        if self.odom_vel_x != other.odom_vel_x:
            return False
        if self.odom_vel_yaw != other.odom_vel_yaw:
            return False
        if self.joint_pos != other.joint_pos:
            return False
        if self.joint_vel != other.joint_vel:
            return False
        if self.lds != other.lds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def seq(self):
        """Message field 'seq'."""
        return self._seq

    @seq.setter
    def seq(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'seq' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'seq' field must be an unsigned integer in [0, 4294967295]"
        self._seq = value

    @builtins.property
    def odom_pos_x(self):
        """Message field 'odom_pos_x'."""
        return self._odom_pos_x

    @odom_pos_x.setter
    def odom_pos_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_pos_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_pos_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_pos_x = value

    @builtins.property
    def odom_pos_y(self):
        """Message field 'odom_pos_y'."""
        return self._odom_pos_y

    @odom_pos_y.setter
    def odom_pos_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_pos_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_pos_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_pos_y = value

    @builtins.property
    def odom_pos_yaw(self):
        """Message field 'odom_pos_yaw'."""
        return self._odom_pos_yaw

    @odom_pos_yaw.setter
    def odom_pos_yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_pos_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_pos_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_pos_yaw = value

    @builtins.property
    def odom_vel_x(self):
        """Message field 'odom_vel_x'."""
        return self._odom_vel_x

    @odom_vel_x.setter
    def odom_vel_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_vel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_vel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_vel_x = value

    @builtins.property
    def odom_vel_yaw(self):
        """Message field 'odom_vel_yaw'."""
        return self._odom_vel_yaw

    @odom_vel_yaw.setter
    def odom_vel_yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_vel_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_vel_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_vel_yaw = value

    @builtins.property
    def joint_pos(self):
        """Message field 'joint_pos'."""
        return self._joint_pos

    @joint_pos.setter
    def joint_pos(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'joint_pos' array.array() must have the type code of 'f'"
                self._joint_pos = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_pos' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_pos = array.array('f', value)

    @builtins.property
    def joint_vel(self):
        """Message field 'joint_vel'."""
        return self._joint_vel

    @joint_vel.setter
    def joint_vel(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'joint_vel' array.array() must have the type code of 'f'"
                self._joint_vel = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_vel' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_vel = array.array('f', value)

    @builtins.property
    def lds(self):
        """Message field 'lds'."""
        return self._lds

    @lds.setter
    def lds(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'lds' array.array() must have the type code of 'B'"
                self._lds = value
                return
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
                "The 'lds' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._lds = array.array('B', value)
