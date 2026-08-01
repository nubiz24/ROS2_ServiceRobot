# Hướng dẫn sử dụng ROS 2 Service Robot (Maker's Pet Mini)

Tài liệu này hợp nhất các lệnh trong `kaiaai-esp32/README.md`,
`kaiaai-esp32/huongdankhoidong.md` và tài liệu chính thức của
[kaiaai/kaiaai](https://github.com/kaiaai/kaiaai/tree/iron). Hệ thống chỉ dùng
model mặc định **Maker's Pet Mini**, có tên package ROS 2 là `makerspet_mini`.

## 1. Phạm vi và cấu trúc dự án

Môi trường đã kiểm tra trên máy này:

- Ubuntu 22.04 (Jammy).
- ROS 2 Iron.
- micro-ROS Agent dùng UDP cổng `8888`.
- ROSBridge WebSocket dùng TCP cổng `9090`.
- Web điều khiển dùng HTTP cổng `8080`.

Cấu trúc cần dùng:

```text
ROS2_ServiceRobot/
├── HDSD.md
├── kaiaai-esp32/       # firmware ESP32 và web điều khiển
├── kaia_ws/            # các package Kaia.ai, Nav2, Gazebo, model makerspet_mini
├── uros_ws/            # micro_ros_agent và micro-ROS messages
└── maps/               # map.yaml và map.pgm dùng cho Nav2
```

Hai workspace đã được build tại vị trí trên. Các thư mục `src/`, `build/`,
`install/` và `log/` nằm ngay trong từng workspace.

Các thư mục `build.copied/`, `install.copied/` và `log.copied/` là bản artifact
gốc ở vị trí cũ, được giữ để đối chiếu. Khi vận hành chỉ dùng `build/`,
`install/` và `log/` đã build lại theo đường dẫn trong dự án.

> Không chạy native và Docker đồng thời. Cả hai cùng chiếm UDP `8888` và có thể
> làm robot kết nối sai Agent.

## 2. Chuẩn bị robot và mạng

Robot và máy ROS phải cùng mạng Wi-Fi. Xem IP của máy ROS:

```bash
hostname -I
```

Trong cấu hình firmware `kaiaai-esp32/data/config.yaml`, kiểm tra:

```yaml
dest_ip: <IP-của-máy-ROS>
dest_port: 8888
```

Đồng thời cấu hình đúng `ssid` và `pass` của Wi-Fi. Không đưa mật khẩu thật lên
Git nếu repository được chia sẻ.

Firmware cũng có trang cấu hình riêng: nhấn rồi thả nút `EN`, sau đó giữ nút
`BOOT` ít nhất 3 giây khi ESP32 khởi động. Kết nối vào access point do robot tạo
và mở địa chỉ IP được in trong Serial Monitor.

## 3. Dùng ROS 2 native (khuyến nghị)

### 3.1. Source môi trường ở mỗi terminal

Mỗi khi mở terminal mới, chạy:

```bash
cd /home/duong/Arduino/ROS2_ServiceRobot
export SERVICE_ROBOT_ROOT="$PWD"

source /opt/ros/iron/setup.bash
source "$SERVICE_ROBOT_ROOT/uros_ws/install/setup.bash"
source "$SERVICE_ROBOT_ROOT/kaia_ws/install/setup.bash"
```

Kiểm tra các package quan trọng và model:

```bash
echo "ROS_DISTRO=$ROS_DISTRO"
ros2 pkg list | grep -E "micro_ros_agent|kaiaai_bringup|kaiaai_teleop|makerspet_mini"
ros2 pkg prefix micro_ros_agent
ros2 pkg prefix makerspet_mini
```

Hai lệnh `prefix` phải trỏ vào `ROS2_ServiceRobot/uros_ws/install` và
`ROS2_ServiceRobot/kaia_ws/install`.

`makerspet_mini` đã là model mặc định trong mã nguồn. Nếu file cấu hình người
dùng từng bị đổi, đặt lại bằng:

```bash
ros2 run kaiaai cli config robot.model makerspet_mini
```

### 3.2. Build lại workspace khi sửa source

Chỉ cần chạy khi source trong `uros_ws/src` hoặc `kaia_ws/src` thay đổi:

```bash
cd /home/duong/Arduino/ROS2_ServiceRobot
export SERVICE_ROBOT_ROOT="$PWD"

# Tránh ~/.bashrc tự source các workspace cũ trong /home/duong.
bash --noprofile --norc

source /opt/ros/iron/setup.bash
cd "$SERVICE_ROBOT_ROOT/uros_ws"
colcon build --symlink-install

source "$SERVICE_ROBOT_ROOT/uros_ws/install/setup.bash"
cd "$SERVICE_ROBOT_ROOT/kaia_ws"
colcon build --symlink-install

source "$SERVICE_ROBOT_ROOT/kaia_ws/install/setup.bash"
```

Gõ `exit` để rời shell build sạch. Nếu muốn tự động source khi mở terminal, hãy
thay các dòng `source ~/kaia_ws/...` và `source ~/uros_ws/...` cũ trong
`~/.bashrc` bằng đúng hai đường dẫn trong `SERVICE_ROBOT_ROOT`, theo thứ tự
`uros_ws` trước, `kaia_ws` sau.

Build riêng model mặc định:

```bash
cd "$SERVICE_ROBOT_ROOT/kaia_ws"
colcon build --symlink-install --packages-select makerspet_mini
source "$SERVICE_ROBOT_ROOT/kaia_ws/install/setup.bash"
```

## 4. Khởi động robot thật

### Terminal 1 - robot, micro-ROS và telemetry

Source môi trường theo mục 3.1, sau đó chạy:

```bash
ros2 launch kaiaai_bringup physical.launch.py
```

Lệnh này đã tự khởi chạy đủ ba thành phần chính:

- `micro_ros_agent udp4 -p 8888`;
- node `kaiaai_telemetry`;
- `robot_state_publisher` cho `makerspet_mini`.

Vì vậy không chạy thêm một micro-ROS Agent trên cùng cổng `8888`.

Nếu chỉ cần chẩn đoán telemetry riêng, dừng `physical.launch.py` trước rồi chạy:

```bash
ros2 run micro_ros_agent micro_ros_agent udp4 -p 8888
```

Mở terminal khác, source môi trường, rồi chạy:

```bash
ros2 run kaiaai_telemetry telem --ros-args \
  --params-file "$SERVICE_ROBOT_ROOT/kaia_ws/install/kaiaai_telemetry/share/kaiaai_telemetry/config/telem.yaml" \
  --params-file "$SERVICE_ROBOT_ROOT/kaia_ws/install/makerspet_mini/share/makerspet_mini/config/telem.yaml"
```

### Terminal 2 - lái bằng bàn phím

```bash
ros2 run kaiaai_teleop teleop_keyboard
```

Giữ terminal này ở trạng thái focus để nhận phím. Dừng bằng `Ctrl+C`.

### Terminal 3 - theo dõi robot bằng RViz

```bash
ros2 launch kaiaai_bringup monitor_robot.launch.py
```

## 5. Tạo và lưu bản đồ

Chỉ bắt đầu SLAM khi `/scan`, `/odom` và TF ổn định, không có lỗi CRC liên tục.
Giữ `physical.launch.py` chạy, sau đó mở terminal mới và chạy:

```bash
ros2 launch kaiaai_bringup cartographer.launch.py
```

Dùng bàn phím hoặc web để lái robot chậm qua toàn bộ khu vực. Khi bản đồ hoàn
chỉnh, tạo thư mục và lưu map:

```bash
mkdir -p "$SERVICE_ROBOT_ROOT/maps"
ros2 run nav2_map_server map_saver_cli \
  -f "$SERVICE_ROBOT_ROOT/maps/map" \
  --ros-args -p save_map_timeout:=60.0
```

Kết quả gồm `maps/map.yaml` và `maps/map.pgm`. Nên sao lưu cả hai file cùng lúc.

## 6. Điều hướng tự động bằng Nav2

### 6.1. Điều hướng trên bản đồ có sẵn

Giữ `physical.launch.py` chạy. Ở terminal mới:

```bash
ros2 launch kaiaai_bringup navigation.launch.py \
  map:="$SERVICE_ROBOT_ROOT/maps/map.yaml"
```

Trong RViz:

1. Dùng **2D Pose Estimate** để đặt vị trí và hướng hiện tại của robot.
2. Dùng **Nav2 Goal** để chọn đích.
3. Đảm bảo đường đi và vùng xung quanh robot không có vật cản nguy hiểm.

### 6.2. Vừa SLAM vừa điều hướng

```bash
ros2 launch kaiaai_bringup navigation.launch.py slam:=True
```

Sau phiên làm việc, lưu bản đồ bằng lệnh `map_saver_cli` ở mục 5.

### 6.3. Tự khám phá vùng chưa biết

Chạy `navigation.launch.py slam:=True` trước, sau đó mở terminal mới:

```bash
ros2 launch explore_lite explore.launch.py
```

Hai phương án khám phá thử nghiệm khác có trong workspace:

```bash
ros2 run nav2_wfd explore
```

```bash
ros2 launch auto_mapper auto_mapper.launch.py \
  map_path:="$SERVICE_ROBOT_ROOT/maps/auto_map" is_sim:=false
```

Các chức năng tự khám phá cần được giám sát trực tiếp. Luôn chuẩn bị nút dừng
khẩn hoặc `Ctrl+C`; không thử gần cầu thang, mép cao hay người đang di chuyển.

## 7. Web điều khiển ROSBridge

Trang web hỗ trợ:

- kết nối/ngắt ROSBridge;
- publish `/cmd_vel` để tiến, lùi, quay và dừng;
- theo dõi `/odom` và `/amcl_pose`;
- điều chỉnh tốc độ thẳng và tốc độ quay;
- vẽ, lưu, nhập/xuất sơ đồ phòng trong trình duyệt;
- lưu các điểm đến và gửi/hủy goal `/navigate_to_pose` của Nav2.

Trang hiện tải `roslib` 1.4.1 từ `cdn.jsdelivr.net`; trình duyệt cần truy cập
Internet ít nhất khi nạp thư viện này. Nếu trang báo không mở được bộ kết nối
robot, kiểm tra kết nối tới CDN trước khi kiểm tra ROSBridge.

### Terminal web 1 - ROSBridge

Sau khi source ROS 2:

```bash
ros2 launch rosbridge_server rosbridge_websocket_launch.xml \
  address:=0.0.0.0 port:=9090
```

### Terminal web 2 - HTTP server

```bash
cd /home/duong/Arduino/ROS2_ServiceRobot
export SERVICE_ROBOT_ROOT="$PWD"
python3 -m http.server 8080 -d "$SERVICE_ROBOT_ROOT/kaiaai-esp32/web"
```

Mở:

- `http://localhost:8080/ros2-control.html` nếu trình duyệt ở cùng máy;
- `http://<IP-máy-ROS>:8080/ros2-control.html` nếu mở từ máy khác.

Trong ô **Địa chỉ kết nối robot**, nhập:

- `ws://localhost:9090` nếu trình duyệt ở cùng máy ROS;
- `ws://<IP-máy-ROS>:9090` nếu trình duyệt ở máy khác.

Muốn gửi điểm đến từ web, phải chạy Nav2 theo mục 6.1 hoặc 6.2. Frame mặc định
là `map`; chỉ dùng `odom` khi chủ động gửi goal trong frame odometry.

> Sơ đồ phòng do web vẽ được lưu ở local storage hoặc file JSON tải xuống; nó
> không thay thế `map.yaml`/`map.pgm` do Cartographer/Nav2 tạo.

## 8. Dùng dòng lệnh để kiểm tra robot

### Node, topic và TF

```bash
ros2 node list
ros2 node info /pet
ros2 topic list

ros2 topic echo /telemetry --once
ros2 topic echo /wifi_state --once
ros2 topic echo /battery_state --once
ros2 topic echo /scan --once
ros2 topic echo /odom --once
ros2 topic echo /joint_states --once
ros2 topic echo /imu --once
ros2 topic echo /cmd_vel --once

ros2 run tf2_ros tf2_echo odom base_link
```

Nếu `base_link` không tồn tại trong cấu hình hiện tại, kiểm tra frame thực tế:

```bash
ros2 topic echo /tf --once
ros2 run tf2_tools view_frames
```

### Tham số của ESP32 trên node `/pet`

Firmware đặt tên node micro-ROS trên ESP32 là `/pet`; đây là nơi chứa các tham
số phần cứng. Node `/kaiaai_telemetry_node` chạy trên máy ROS có nhiệm vụ chuyển
`/telemetry` thành `/scan`, `/odom`, `/battery_state` và `/wifi_state`.

```bash
ros2 node info /pet
ros2 param list /pet
ros2 param get /pet lidar.scan.freq.now
ros2 param get /pet lidar.scan.freq.target
ros2 param set /pet lidar.scan.freq.target 7.0
ros2 param set /pet lidar.scan.freq.target 0.0
```

Giá trị `0.0` trả tần số quét mong muốn về mặc định.

### Kiểm tra cổng dịch vụ

```bash
ss -lunp | grep 8888
ss -lntp | grep 9090
ros2 node list | grep rosbridge
```

Từ một máy khác trong mạng:

```bash
nc -vz <IP-máy-ROS> 9090
```

## 9. Mô phỏng Gazebo

Không cần bật robot thật và không chạy `physical.launch.py` trong phần này.

### Lái mô phỏng thủ công

Terminal 1:

```bash
ros2 launch kaiaai_gazebo world.launch.py
```

Terminal 2:

```bash
ros2 run kaiaai_teleop teleop_keyboard
```

Terminal 3, tùy chọn:

```bash
ros2 launch kaiaai_bringup monitor_robot.launch.py use_sim_time:=true
```

### Mô phỏng tự chạy đơn giản

Sau khi chạy world:

```bash
ros2 launch kaiaai_gazebo self_drive_gazebo.launch.py
```

### Mô phỏng Nav2 với bản đồ mẫu

Sau khi chạy world:

```bash
ros2 launch kaiaai_bringup navigation.launch.py \
  use_sim_time:=true \
  map:="$SERVICE_ROBOT_ROOT/kaia_ws/src/kaiaai_gazebo/map/living_room.yaml"
```

### Mô phỏng SLAM và tự khám phá

Mỗi lệnh chạy trong một terminal đã source môi trường:

```bash
ros2 launch kaiaai_gazebo world.launch.py
```

```bash
ros2 launch kaiaai_bringup navigation.launch.py \
  use_sim_time:=true slam:=True
```

```bash
ros2 launch explore_lite explore.launch.py
```

Lưu map mô phỏng:

```bash
ros2 run nav2_map_server map_saver_cli \
  -f "$SERVICE_ROBOT_ROOT/maps/simulation_map" \
  --ros-args -p save_map_timeout:=60.0
```

Có thể dùng Cartographer thay cho Nav2 SLAM:

```bash
ros2 launch kaiaai_bringup cartographer.launch.py use_sim_time:=true
```

## 10. Kiểm tra và chỉnh URDF

Chỉ kiểm tra model mặc định `makerspet_mini`:

```bash
ros2 launch kaiaai_bringup inspect_urdf.launch.py
ros2 launch kaiaai_bringup edit_urdf.launch.py
```

Sau khi sửa model:

```bash
cd "$SERVICE_ROBOT_ROOT/kaia_ws"
colcon build --symlink-install --packages-select makerspet_mini
source "$SERVICE_ROBOT_ROOT/kaia_ws/install/setup.bash"
```

## 11. Chạy bằng Docker (phương án thay thế)

Docker phù hợp khi không muốn dùng hai workspace native. Dừng các node ROS 2
native trước khi chạy.

Cho phép container mở GUI X11, tải image và chạy container:

```bash
cd /home/duong/Arduino/ROS2_ServiceRobot
xhost +local:root
sudo docker pull kaiaai/kaiaai:iron
sudo docker run --name makerspet -it --rm \
  -v "$PWD/maps:/root/maps" \
  -p 8888:8888/udp \
  -p 4430:4430/tcp \
  -p 9090:9090/tcp \
  -e DISPLAY="$DISPLAY" \
  -e QT_X11_NO_MITSHM=1 \
  -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
  -v "$XAUTHORITY:/root/.Xauthority" \
  kaiaai/kaiaai:iron
```

Chạy lệnh trên từ thư mục gốc `ROS2_ServiceRobot` để `$PWD/maps` đúng vị trí.
Mở thêm shell vào container:

```bash
sudo docker exec -it makerspet bash
```

Kiểm tra môi trường trong container:

```bash
echo "ROS_DISTRO=$ROS_DISTRO"
. /etc/os-release && echo "UBUNTU_CODENAME=$UBUNTU_CODENAME"
```

Kỳ vọng `ROS_DISTRO=iron` và `UBUNTU_CODENAME=jammy`. Các lệnh vận hành từ mục
4 đến mục 10 dùng tương tự trong container; map nằm ở `/root/maps`.

### Sửa lỗi ROS apt snapshot trong image Iron cũ

Chỉ làm khi `apt update` báo `EXPKEYSIG ... ROS Snapshot builder` hoặc không tìm
thấy `ros-iron-rosbridge-server`:

```bash
grep -R "snapshots.ros.org" /etc/apt/sources.list /etc/apt/sources.list.d/*
mv /etc/apt/sources.list.d/ros2-snapshots.list \
  /etc/apt/sources.list.d/ros2-snapshots.list.disabled

apt update
apt install -y curl gnupg2 ca-certificates
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
  | gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu jammy main" \
  > /etc/apt/sources.list.d/ros2.list
apt update
apt install -y ros-iron-rosbridge-server
```

Sau đó:

```bash
source /opt/ros/iron/setup.bash
ros2 pkg list | grep rosbridge
ros2 launch rosbridge_server rosbridge_websocket_launch.xml \
  address:=0.0.0.0 port:=9090
```

## 12. Lỗi thường gặp

### `package 'kaiaai_bringup' not found`

Source lại đúng thứ tự:

```bash
source /opt/ros/iron/setup.bash
source "$SERVICE_ROBOT_ROOT/uros_ws/install/setup.bash"
source "$SERVICE_ROBOT_ROOT/kaia_ws/install/setup.bash"
```

Nếu vẫn lỗi, build lại `kaia_ws` theo mục 3.2.

### `package 'micro_ros_agent' not found`

Source `uros_ws/install/setup.bash`, kiểm tra bằng `ros2 pkg prefix
micro_ros_agent`, rồi build lại `uros_ws` nếu cần.

### Robot không kết nối hoặc Agent không nhận dữ liệu

- Kiểm tra robot và máy ROS cùng Wi-Fi.
- Kiểm tra `dest_ip` đúng IP hiện tại của máy ROS.
- Kiểm tra `dest_port: 8888`.
- Đảm bảo chỉ có một Agent chiếm UDP `8888`.
- Kiểm tra firewall cho UDP `8888`.
- Kiểm tra nguồn ESP32, động cơ và LiDAR ổn định.

### `RESULT_CRC_ERROR` trong telemetry

Kiểm tra Wi-Fi, nguồn, phiên bản firmware/thư viện `micro_ros_kaia`, `dest_ip`,
cấu hình LiDAR và dây tín hiệu. Không chạy SLAM cho đến khi lỗi không còn xuất
hiện liên tục.

### Cartographer dừng bất ngờ

```bash
ros2 topic echo /scan --once
ros2 topic echo /odom --once
ros2 topic echo /imu --once
ros2 run tf2_ros tf2_echo odom base_link
```

Không được có `nan`, timestamp nhảy bất thường hoặc TF bị đứt. Cấu hình
`makerspet_mini` hiện dùng scan và odometry, không dùng IMU trong Cartographer,
nhưng `/imu` vẫn hữu ích để chẩn đoán firmware.

### Web báo mất kết nối

- Không dùng `localhost` nếu browser ở máy khác.
- Kiểm tra `ss -lntp | grep 9090`.
- Bảo đảm ROSBridge listen trên `0.0.0.0:9090`.
- Kiểm tra TCP `9090` bằng `nc`.
- Nếu dùng Docker, container phải có `-p 9090:9090/tcp`.

### Nav2 không nhận goal hoặc robot không chạy

- Xác nhận `/navigate_to_pose` tồn tại: `ros2 action list`.
- Kiểm tra localization: `ros2 topic echo /amcl_pose --once`.
- Đặt **2D Pose Estimate** trước khi gửi goal trên map có sẵn.
- Kiểm tra frame goal là `map`.
- Kiểm tra `/scan`, `/odom`, TF và costmap trong RViz.
- Kiểm tra không có node teleop liên tục publish lệnh trái ngược lên `/cmd_vel`.

## 13. Trình tự khởi động nhanh hằng ngày

1. Bật robot, bảo đảm robot và máy tính cùng Wi-Fi.
2. Terminal 1: source môi trường, chạy `physical.launch.py`.
3. Kiểm tra `/scan`, `/odom`, `/battery_state`.
4. Chọn một tác vụ: teleop, Cartographer hoặc Nav2.
5. Nếu dùng web, chạy thêm ROSBridge và HTTP server.
6. Khi kết thúc, dừng robot trước, sau đó `Ctrl+C` các terminal.

Các lệnh tối thiểu:

```bash
cd /home/duong/Arduino/ROS2_ServiceRobot
export SERVICE_ROBOT_ROOT="$PWD"
source /opt/ros/iron/setup.bash
source "$SERVICE_ROBOT_ROOT/uros_ws/install/setup.bash"
source "$SERVICE_ROBOT_ROOT/kaia_ws/install/setup.bash"
ros2 launch kaiaai_bringup physical.launch.py
```
