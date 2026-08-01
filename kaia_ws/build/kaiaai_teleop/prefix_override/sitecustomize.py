import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/duong/Arduino/ROS2_ServiceRobot/kaia_ws/install/kaiaai_teleop'
