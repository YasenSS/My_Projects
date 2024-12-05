#pragma once
#include <string>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>

class InetAddress
{
public:
    explicit InetAddress(uint16_t port = 0,std::string ip = "127.0.0.1");
    explicit InetAddress(const sockaddr_in &addr)
        :addr_(addr)
    {}
    std::string toIp() const;
    std::string toIpPort() const;
    uint16_t toPort() const;
private:
    sockaddr_in addr_;
};







