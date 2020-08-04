#!/bin/sh

apt update -y

apt upgrade -y

sudo apt install gcc g++ wget -y

echo "151.101.108.133 raw.githubusercontent.com" >> /etc/hosts

echo "52.78.231.108 github.com" >> /etc/hosts

echo "net.core.default_qdisc = fq" >> /etc/sysctl.conf

echo "net.ipv4.tcp_congestion_control = bbr" >> /etc/sysctl.conf

echo "net.ipv4.ip_forward = 1" >> /etc/sysctl.conf
