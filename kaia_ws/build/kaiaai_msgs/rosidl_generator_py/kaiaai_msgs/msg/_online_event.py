# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kaiaai_msgs:msg/OnlineEvent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OnlineEvent(type):
    """Metaclass of message 'OnlineEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EVENT_ONLINE': b'\x00',
        'EVENT_OFFLINE': b'\x01',
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
                'kaiaai_msgs.msg.OnlineEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__online_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__online_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__online_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__online_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__online_event

            from diagnostic_msgs.msg import DiagnosticArray
            if DiagnosticArray.__class__._TYPE_SUPPORT is None:
                DiagnosticArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EVENT_ONLINE': cls.__constants['EVENT_ONLINE'],
            'EVENT_OFFLINE': cls.__constants['EVENT_OFFLINE'],
        }

    @property
    def EVENT_ONLINE(self):
        """Message constant 'EVENT_ONLINE'."""
        return Metaclass_OnlineEvent.__constants['EVENT_ONLINE']

    @property
    def EVENT_OFFLINE(self):
        """Message constant 'EVENT_OFFLINE'."""
        return Metaclass_OnlineEvent.__constants['EVENT_OFFLINE']


class OnlineEvent(metaclass=Metaclass_OnlineEvent):
    """
    Message class 'OnlineEvent'.

    Constants:
      EVENT_ONLINE
      EVENT_OFFLINE
    """

    __slots__ = [
        '_event',
        '_comment',
        '_diag',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'event': 'octet',
        'comment': 'string',
        'diag': 'diagnostic_msgs/DiagnosticArray',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticArray'),  # noqa: E501
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
        self.event = kwargs.get('event', bytes([0]))
        self.comment = kwargs.get('comment', str())
        from diagnostic_msgs.msg import DiagnosticArray
        self.diag = kwargs.get('diag', DiagnosticArray())

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
        if self.event != other.event:
            return False
        if self.comment != other.comment:
            return False
        if self.diag != other.diag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def event(self):
        """Message field 'event'."""
        return self._event

    @event.setter
    def event(self, value):
        if self._check_fields:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'event' field must be of type 'bytes' or 'ByteString' with length 1"
        self._event = value

    @builtins.property
    def comment(self):
        """Message field 'comment'."""
        return self._comment

    @comment.setter
    def comment(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'comment' field must be of type 'str'"
        self._comment = value

    @builtins.property
    def diag(self):
        """Message field 'diag'."""
        return self._diag

    @diag.setter
    def diag(self, value):
        if self._check_fields:
            from diagnostic_msgs.msg import DiagnosticArray
            assert \
                isinstance(value, DiagnosticArray), \
                "The 'diag' field must be a sub message of type 'DiagnosticArray'"
        self._diag = value
