1. 安装 ROS Kinetic(LTS) 2016  Unbutu 16.04
2. Robot Operating System （ROS）
    1. 框架
        * 分布式 扩展性好，软件复用率高
        * 进程管理 节点（Node）
        * 进程间通信
    2. 工具 各种包
    3. 功能 控制、规划、视觉 
    4. 社区 软件包管理、文档
3. www.ros.org  WiKi install
下载使用清华的服务器
配置ROS 推荐IDE: RoboWare
4. ROS工程结构
    * catkin工作空间 ROS定制的编译构建系统 组织和管理功能包的文件夹 命令：catkin_make 建立工作空间、编译
    * src: package是catkin编译的基本单元
    * package: 一个package可包含多个可执行文件（节点）
    CMakeLists.txt 规定编译规则 《CMake实践》 与编译相关问题
    package.xml 定义属性 
    代码文件：脚本(shell\Python)/C++源文件 scripts放*.py和*.sh，include放*.h,src放*.cpp
    ROS自定义通信格式消息msg、服务srv、动作action
    launch文件 *.launch
    config文件夹下 配置文件*.yaml
5. 常用指令
    * rospack
    * roscd
    * rosls
    * rosed
    * catkin_create_pkg
    * rosdep

6. MetaPacakge 初学者了解