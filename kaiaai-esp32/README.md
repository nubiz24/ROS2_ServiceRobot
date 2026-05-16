# Kaia.ai ESP32 + ROS2 Web Control

Firmware ESP32 cho robot Kaia.ai và trang web điều khiển ROS2:
- Web UI: `web/ros2-control.html`
- Điều khiển: publish `/cmd_vel` (`geometry_msgs/msg/Twist`)
- Lấy tọa độ: subscribe `/odom` (`nav_msgs/msg/Odometry`)

Tài liệu chính thức Kaia.ai: [kaiaai/firmware](https://github.com/kaiaai/firmware)

## 1) Chạy Docker Kaia (không dùng docker-compose)

```bash
xhost +local:root
sudo docker pull kaiaai/kaiaai:iron
sudo docker run --name makerspet -it --rm \
  -v ~/maps:/root/maps \
  -p 8888:8888/udp \
  -p 4430:4430/tcp \
  -p 9090:9090/tcp \
  -e DISPLAY=$DISPLAY \
  -e QT_X11_NO_MITSHM=1 \
  -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
  -v $XAUTHORITY:/root/.Xauthority \
  kaiaai/kaiaai:iron
```

Mở thêm shell vào container:

```bash
sudo docker exec -it makerspet bash
```

## 2) Kiểm tra môi trường ROS trong container

```bash
echo "ROS_DISTRO=$ROS_DISTRO"
. /etc/os-release && echo "UBUNTU_CODENAME=$UBUNTU_CODENAME"
```

Kỳ vọng:
- `ROS_DISTRO=iron`
- `UBUNTU_CODENAME=jammy`

## 3) Sửa lỗi apt snapshot key (đã gặp khi cài rosbridge)

Lỗi từng gặp:
- `EXPKEYSIG ... ROS Snapshot builder`
- `Unable to locate package ros-iron-rosbridge-server`

Tìm repo snapshot:

```bash
grep -R "snapshots.ros.org" /etc/apt/sources.list /etc/apt/sources.list.d/*
```

Tắt repo snapshot cũ:

```bash
mv /etc/apt/sources.list.d/ros2-snapshots.list /etc/apt/sources.list.d/ros2-snapshots.list.disabled
```

Thêm ROS2 repo chính thức:

```bash
apt update
apt install -y curl gnupg2 ca-certificates
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
  | gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu jammy main" \
  > /etc/apt/sources.list.d/ros2.list
apt update
```

## 4) Cài và chạy ROSBridge

```bash
apt install -y ros-iron-rosbridge-server
source /opt/ros/iron/setup.bash
ros2 pkg list | grep rosbridge
ros2 launch rosbridge_server rosbridge_websocket_launch.xml address:=0.0.0.0 port:=9090
```

## 5) Chạy robot + RViz

Terminal/container 1:

```bash
source /opt/ros/iron/setup.bash
ros2 launch kaiaai_bringup physical.launch.py
```

Terminal/container 2 (RViz tùy chọn):

```bash
source /opt/ros/iron/setup.bash
ros2 launch kaiaai_bringup monitor_robot.launch.py
```

## 6) Chạy web control

Từ máy host, trong repo:

```bash
python3 -m http.server 8080 -d /home/duong/Arduino/kaiaai-esp32/web
```

Mở:
- `http://localhost:8080/ros2-control.html`

Nhập ROSBridge URL:
- `ws://localhost:9090` nếu browser cùng máy chạy Docker
- `ws://<ip-may-chay-docker>:9090` nếu browser ở máy khác
- Ví dụ: `ws://192.168.88.153:9090`

## 7) Checklist debug nhanh

Trong container:

```bash
ros2 node list | grep rosbridge
ss -lntp | grep 9090
ros2 topic list
ros2 topic echo /odom --once
ros2 topic echo /cmd_vel
```

Từ máy mở browser:

```bash
nc -vz <ip-may-ros2> 9090
```

Nếu web báo `Đã ngắt` sau khi bấm kết nối:
- Kiểm tra đúng IP (không dùng `localhost` khi khác máy)
- Kiểm tra rosbridge có chạy và đang listen `0.0.0.0:9090`
- Kiểm tra container đã publish `-p 9090:9090`