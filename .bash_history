cd Desktop/
tar -xzvf VMwareTools-10.3.22-15902021.tar.gz 
cd vmware-tools-distrib/
sudo ./vmware-install.pl 
sudo apt install open-vm-tools
sudo apt update
sudo apt install open-vm-tools
sudo apt purge thunderbird*
sudo apt purge libre*
sudo apt purge libreoff*
sudo apt purge libreoffice*
sudo apt purge amazo*
sudo apt auto remove
sudo apt autoremove
sudo apt uninstall rythm*
sudo apt purge rythm*
sudo apt uninstall rythm*
sudo apt install open-vm-tools-desktop -y
reboot
cd Desktop/
sudo cp libmsc.so /usr/local/lib
sudo sh -c '. /etc/lsb-release && echo "deb http://mirrors.tuna.tsinghua.edu.cn/ros/ubuntu/ `lsb_release -cs` main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt install curl # if you haven't already installed curl
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net:80 --recv-key     421C365BD9FF1F717815A3895523BAEEB01FA116
sudo apt-key del 421C365BD9FF1F717815A3895523BAEEB01FA116
sudo apt update
sudo gedit /etc/apt/sources.list
sudo apt update
sudo nano /etc/apt/sources.list
sudo sh -c '. /etc/lsb-release && echo "deb http://mirrors.ustc.edu.cn/ros/ubuntu/ $DISTRIB_CODENAME main" > /etc/apt/sources.list.d/ros-latest.list'
sudo nano /etc/apt/sources.list.d
sudo nano /etc/apt/sources.list.
sudo nano /etc/apt/sources.list
sudo nano /etc/apt/sources.list.d/ros-latest.list 
sudo sh -c 'echo "deb http://mirrors.ustc.edu.cn/ros/ubuntu/ $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt update
wget https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -O - | sudo apt-key add -
sudo apt-key adv --keyserver hkp://pool.sks-keyservers.net --recv-key 0xB01FA116
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv 76F1A20FF987672F
sudo apt update
sudo nano /etc/apt/sources.list
sudo nano /etc/apt/sources.list.d/ros-latest.list 
sudo apt update
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key 0xB01FA116
sudo apt update
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv F42ED6FBAB17C654
sudo apt update
sudo apt-get install ros-kinetic-desktop-full
sudo apt install ros-kinetic-desktop-full
sudo apt-get install python3-pip
sudo pip install rosdepc
sudo pip3 install rosdepc
sudo rosdepc init
rosdepc update
sudo apt install git
mkdir -p tutorial_ws/src
cd tutorial_ws/
l
git clone https://gitee.com/mwtjc/ROS-Academy-for-Beginners.git
rosdep install --from-paths src --ignore-src --rosdistro=kinetic -y     
l
rosdep install --from-paths src --ignore-src --rosdistro=kinetic -y     
l
rosdepc install --from-paths src --ignore-src --rosdistro=kinetic -y     
rosdepc install --from-paths src --ignore-src -r -y 
rosdepc update
rosdepc install --from-paths src --ignore-src -r -y 
rosdepc install --from-paths src --ignore-src --rosdistro=kinetic -y     
rosdepc update --include-eol-distros
rosdepc install --from-paths src --ignore-src --rosdistro=kinetic -y     
catkin_make
sudo apt install python-rosinstall
echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc
source ~/.bashrc 
catkin_make
echo "source ~/tutorial_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc 
roslaunch robot_sim_demo robot_spawn.launch
rostopic list
roscore
rosrun gazebo_ros gazebo ebo
rosrun gazebo_ros gazebo 
