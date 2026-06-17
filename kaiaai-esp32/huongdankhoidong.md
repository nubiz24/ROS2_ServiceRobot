# Huong Dan Khoi Dong Kaia (Native, Khong Docker)

Tai lieu nay dung cho he thong native tren may host:
- ROS2 Iron (Ubuntu 22.04)
- Workspace: `~/uros_ws` (micro ROS agent), `~/kaia_ws` (kaia packages)

## 1) Mo terminal moi va source moi truong

```bash
source /opt/ros/iron/setup.bash
source ~/uros_ws/install/setup.bash
source ~/kaia_ws/install/setup.bash
```

Kiem tra nhanh:

```bash
ros2 pkg list | rg "micro_ros_agent|kaiaai_bringup|kaiaai_teleop"
```

## 2) Kiem tra ket noi robot

- Robot va may tinh phai cung mang WiFi.
- `dest_ip` trong firmware phai la IP cua may ROS.
- `dest_port` phai la `8888` (mac dinh micro ROS agent).

Kiem tra IP may tinh:

```bash
hostname -I
```

source ~/.bashrc

ros2 run kaiaai_telemetry telem --ros-args \
  --params-file /home/duong/kaia_ws/install/kaiaai_telemetry/share/kaiaai_telemetry/config/telem.yaml

## 3) Khoi dong robot that (physical)

```bash
ros2 launch kaiaai_bringup physical.launch.py
```
ros2 launch kaiaai_bringup navigation.launch.py map:=$HOME/maps/map.yaml

ros2 launch kaiaai_bringup monitor_robot.launch.py

ros2 run kaiaai_teleop teleop_keyboard

Neu dung model khac:

```bash
ros2 launch kaiaai_bringup physical.launch.py robot_model:=makerspet_mini
```

## 4) Dieu khien tay (teleop)

Mo terminal khac (nho source lai) va chay:

```bash
source /opt/ros/iron/setup.bash
source ~/uros_ws/install/setup.bash
source ~/kaia_ws/install/setup.bash
ros2 run kaiaai_teleop teleop_keyboard
```

## 5) Chay web dieu khien (neu can)

Trong thu muc du an:
/home/duong/Arduino/ROS2_ServiceRobot/kaiaai-esp32/web
```bash
python3 -m http.server 8080 -d /home/duong/Arduino/ROS2_ServiceRobot/kaiaai-esp32/web
```
ros2 launch rosbridge_server rosbridge_websocket_launch.xml
Mo trinh duyet:
- `http://localhost:8080/ros2-control.html`
- WS URL: `ws://localhost:9090` (neu cung may)

## 6) Mapping bang Cartographer

Chi chay khi telemetry on dinh (khong bi CRC error lien tuc):

```bash
ros2 launch kaiaai_bringup cartographer.launch.py
```

Neu `cartographer_node` crash:
- Kiem tra `/imu`, `/scan`, `/odom` co du lieu hop le (khong `nan`)
- Kiem tra TF `odom -> base_link`
- Kiem tra lai firmware config va WiFi

## 7) Lenh debug nhanh

```bash
ros2 node list
ros2 topic list
ros2 topic echo /odom --once
ros2 topic echo /scan --once
ros2 topic echo /imu --once
ros2 run tf2_ros tf2_echo odom base_link
```

## 8) Loi thuong gap va cach xu ly

- `package 'kaiaai_bringup' not found`
  - Chua source `~/kaia_ws/install/setup.bash` hoac build chua xong.

- `package 'micro_ros_agent' not found`
  - Chua source `~/uros_ws/install/setup.bash` hoac chua build micro ROS agent.

- `RESULT_CRC_ERROR` trong `kaiaai_telemetry`
  - Sai `dest_ip`, WiFi yeu, nguon robot khong on dinh, hoac cau hinh firmware sai.

- `cartographer_node has stopped unexpectedly`
  - Du lieu IMU/TF/timestamp khong hop le, can sua telemetry truoc.

cd ~/kaia_ws
source /opt/ros/iron/setup.bash
colcon build --symlink-install --packages-select robot_serving_bot
source ~/kaia_ws/install/setup.bash
ros2 launch kaiaai_bringup cartographer.launch.py robot_model:=robot_serving_bot

ros2 launch kaiaai_bringup navigation.launch.py slam:=True

ros2 run nav2_map_server map_saver_cli -f ~/maps/map --ros-args -p save_map_timeout:=60.0

cd ~/kaia_ws
colcon build --packages-select makerspet_mini
source ~/kaia_ws/install/setup.bash