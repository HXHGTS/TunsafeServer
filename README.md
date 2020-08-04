# TunsafeServer

## 警告⚠：此技术仅限用于个人搭建游戏加速器使用！！！若用于其他违法目的，后果自负！！！

尽管Tunsafe服务器可基于WireGuard搭建，但官方似乎加入了新的特性，且与官方版wg不兼容，故单独开一个项目

直接运行：

yum install gcc gcc-c++ wget -y

mkdir -p /etc/wireguard

cd /etc/wireguard

wget https://github.com/HXHGTS/TunsafeServer/raw/master/tunsafe

make install

sudo tunsafe start -d TunSafe.conf

客户端下载(Tunsafe)：

[Windows测试版](https://wwa.lanzous.com/iAvZaf3x1he) [Windows正式版](https://wwa.lanzous.com/ioykQf427sb) [TAP](https://wwa.lanzous.com/iGMaCf42d4d) [Android](https://wwa.lanzous.com/iSUxQf3xdgf)

