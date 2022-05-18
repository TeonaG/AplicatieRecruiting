#ifndef CONEXIUNE_SERVER_H
#define CONEXIUNE_SERVER_H

#define WIN32_LEAN_AND_MEAN

#include<iostream>
#include<string>
#include <vector>
#include<stdlib.h>
#include <stdio.h>

#include <Windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")

#define DEFAULT_PORT "27015"
#define DEFAULT_IP "127.0.0.1"

class conexiune_server
{
private:
    int iResult;
    struct addrinfo*result=nullptr;
    struct addrinfo*ptr=nullptr;
    struct addrinfo hints;

    static SOCKET conexiune_la_server;
    static std::string sir_primit;
    static std::string sir_de_trimis;

public:
    conexiune_server();
    bool inchide_conexiunea();
    bool conectare_la_server();

    static void trimite_la_server(std::vector<std::string>);
    static std::vector<std::string> primire_de_la_server();

    static void trimite_sir(std::string);
    static void primire_sir(std::string&);
  //  static void trimite_int(int&);
  //  static void primire_int(int&);
  //  static void trimite_bool(bool);
 //   static void primire_bool(bool);

};

#endif // CONEXIUNE_SERVER_H
