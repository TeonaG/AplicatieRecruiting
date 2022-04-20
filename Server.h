#pragma once
#undef UNICODE
#define WIN32_LEAN_AND_MEAN
#include"Admin.h"
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>

#include <iostream>
#include <vector>
#include <string>
#include <thread>

using namespace std;

class Server
{
public:
	Server(int PORT);
	bool ListenForNewConnection();
	vector<IUser*>useri;
private:
	SOCKET Connections[100];
	thread connectionThreads[100];

	addrinfo* result;
	addrinfo hints;
	SOCKET ListenSocket;
	int iResult;
	int ConnectionCounter = 0;
	bool CloseConnection(int index);

	bool ProcessString(int index, string value);
	static void ClientHandler(int index);

};
static Server* serverPtr;