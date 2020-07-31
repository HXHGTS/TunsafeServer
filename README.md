# TunsafeServer

## 警告⚠：此技术仅限用于个人搭建游戏加速器使用！！！若用于其他违法目的，后果自负！！！

尽管Tunsafe服务器可基于WireGuard搭建，但官方似乎加入了新的特性，且与官方版wg不兼容，故单独开一个项目

直接运行(仅支持CentOS7)：

sudo yum install -y wget gcc

echo "151.101.108.133 raw.githubusercontent.com" >> /etc/hosts

echo "52.78.231.108 github.com" >> /etc/hosts

wget https://github.com/HXHGTS/WireGuardServer/raw/master/preload.sh

sudo chmod +x preload.sh

sudo bash preload.sh

这个执行完成会触发重启且不会提示，是正常情况

yum install -y git

git clone https://github.com/TunSafe/TunSafe.git

cd TunSafe

sudo make && make install

sudo tunsafe start -d TunSafe.conf

客户端下载(Tunsafe)：

[Windows测试版](https://wwa.lanzous.com/iAvZaf3x1he) [Windows正式版](https://wwa.lanzous.com/ioykQf427sb) [TAP](https://wwa.lanzous.com/iGMaCf42d4d) [Android](https://wwa.lanzous.com/iSUxQf3xdgf)

