1. `ls` list 列出当前路径下所有的文件(文件夹&文件名）
`ls -l` 显示文件详细信息
`ls -a` 显示所有文件
`ls -lh` 适合人类看的形式
2. `cd` 移动到指定目录下 
`cd ..` 返回上级目录
`cd ../..`  返回上上级目录
`cd /(绝对路径)`
3. `touch  xxx`新建文件 可以同时创建多个文件
4. `cp xxx xxx`复制文件到当前文件夹
`cp -i xxx`询问是否copy
`cp xxx xxx/`copy到某个文件夹
`cp -R xxx/ xxx/` 递归形式copy文件内所有内容
`cp file* xxx/`copy所有文件到文件夹中
5. `mv xxx xxx/` move 剪切
6. `mkdir xxx` make directory创建folder
`mkdir xxx/xxx` 生成下一级目录
7. `rmdir` 有文件的folder无法移除
`rm -r xxx` 递归方式一个个删除
8. `rm xxx`移除文件
`rm -i xxx`interactive询问
`rm -I xxx xxx xxx` 大于等于3个文件才会询问
9. `nano` 编辑文件
10. `cat` 终端中显示文件内容
`cat xxx1 > xxx2` 把xxx1的内容放到xxx2中
`cat xxx1 xxx2 > xxx3` 合并放到xxx3中
`cat xxx1 >> xxx2 `把文件xxx1内容加到xxx2后面
11. 文件权限管理  前三个User 后三个group 最后三个外部的人
-r 读权限 -w 读权限 -x excute执行权限
`chmod` change mode `chmod u+r xxx` （user） 谁+怎么修改  哪个文件 `chmod u-r xxx`  u(users) g(group) o(other) a(all) `ug+r`同时
Linux权限数字表示
12. Python文件开头告诉文件怎么执行 `#! /user/bin/python3`
13. Ubuntu 安装SSH `sudo apt-get install openssh-server`
其他Mac或Linux电脑终端 `ssh name@IP addr`   `exit`退出Linux
14. Windows SSH软件 PuTTY 
Linux上`ifconfig`找到IP addr `inet`
15. 手机通过SSH远程Linux 手机端下载SSH App
16. TeamViewr（外网）和VNC（局域网下） 图形化控制
17. Linux当作云计算平台  `ssh name@IP addr python3 < xxx.py`本地文件推到Linux执行
18. 两台电脑、局域网下、共享文件夹
Linux创建文件夹并共享 终端输入 `sudo smbpasswd -a name` 创建密码
在另一台电脑找到共享文件夹 可以创建或删除文件