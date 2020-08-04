#include <stdio.h>
#include <stdlib.h>

int run_mode;
int main()
{
    printf("请选择操作:\n1.搭建Tunsafe服务器\n2.启动Tunsafe服务器\n3.显示服务器信息\n4.关闭Tunsafe服务器\n5.退出\n请输入:");
    scanf("%d", &run_mode);
    if (run_mode == 1) {
        CreateServer();
    }
    else if (run_mode == 2) {
        RunServer();
    }
    else if (run_mode == 3) {
        RunServer();
    }
    else if (run_mode == 4) {
        StopServer();
    }
    else if (run_mode == 5) {
        exit(0);
    }
    return 0;
}
int CreateServer() {
    system("apt install git -y");
    system("apt-get install clang-6.0");
    system("git clone https://github.com/TunSafe/TunSafe.git");
    system("cd TunSafe");
    system("make && make install");
    printf("Tunsafe服务器搭建完成!\n");
    return 0;
}

int RunServer() {
    if ((fopen("wg0.conf", "r")) != NULL) {
        system("tunsafe start -d wg0.conf");
        printf("检测到wg0.conf文件,Tunsafe服务器已启动!\n");
    }
    else {
        printf("请将wg0.conf文件生成后放入/root文件夹下!\n");
    }
    return 0;
}

int StopServer() {
    system("tunsafe stop tun0");
    printf("Tunsafe服务器已停止!\n");
    return 0;
}

int ShowInfo() {
    printf("Tunsafe服务器信息如下:\n");
    system("tunsafe show");
    return 0;
}