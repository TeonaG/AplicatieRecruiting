#include "Server.h"

Server::Server(int PORT)
{

	WSADATA wsaData;

	ListenSocket = INVALID_SOCKET;

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0)
	{
		printf("WSAStartup failed with error: %d\n", iResult);
		exit(0);
	}

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	// Resolve the server address and port
	iResult = getaddrinfo(NULL, std::to_string(PORT).c_str(), &hints, &result);
	if (iResult != 0)
	{
		printf("getaddrinfo failed with error: %d\n", iResult);
		WSACleanup();
		exit(0);
	}

	// Create a SOCKET for connecting to server
	ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (ListenSocket == INVALID_SOCKET)
	{
		printf("socket failed with error: %ld\n", WSAGetLastError());
		freeaddrinfo(result);
		WSACleanup();
		exit(0);
	}

	// Setup the TCP listening socket
	iResult = bind(ListenSocket, result->ai_addr, (int)result->ai_addrlen);
	if (iResult == SOCKET_ERROR)
	{
		std::cout << "Bind failed with error: " << WSAGetLastError() << std::endl;
		freeaddrinfo(result);
		closesocket(ListenSocket);
		WSACleanup();
		exit(0);
	}

	freeaddrinfo(result);

	//listen for incoming connection
	iResult = listen(ListenSocket, SOMAXCONN);
	if (iResult == SOCKET_ERROR)
	{
		printf("listen failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		exit(0);
	}

	serverPtr = this;
}

bool Server::ListenForNewConnection()
{

	SOCKET ClientSocket = INVALID_SOCKET;
	ClientSocket = accept(ListenSocket, NULL, NULL);
	if (ClientSocket == INVALID_SOCKET)
	{
		printf("accept failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return false;
	}

	else // sucessfull connection
	{
		std::cout << "Client connected" << std::endl;
		Connections[ConnectionCounter] = ClientSocket;

		// authentify user
		// + loads into memory and sends the client user data
		/*if (!Authentify(ConnectionCounter)) {
			return false;
		}*/

		connectionThreads[ConnectionCounter] = thread(ClientHandler, ConnectionCounter);

		ConnectionCounter++;
		return true;
	}
}



bool Server::ProcessString(int index, string value)
{//This function is responsible for all the processing
	//Make a protocol
	//E.g. 1$data$in$parsed$mode
	// 1-> function name, i.e. give me my student grades
	// the next data parsed by the delimiter "$" is the one which is to be processed by the respective function
	// getStudentGrade(...), the params are the data to be given by the unparsed string
	// 1$UserID$SubjectID
	// getStudentGrade(int userID, int SubjectID) => returns grade for the user with userID 
	// at subject with subjectID


	return true;
}



void Server::ClientHandler(int index)
{
	string receiveString;
	while (true)
	{
		//Receive Messages
		if (!serverPtr->ProcessString(index, receiveString))
			break;
	}

	cout << "Lost contact with client: id = " << index << endl;

	serverPtr->CloseConnection(index);
}
bool Server::CloseConnection(int index)
{
	//this->userList.erase(userList.begin() + index);
	//userList[index - 1]->setUserID(-1);
	if (closesocket(Connections[index]) == SOCKET_ERROR)
	{
		cout << "Failed closing Error: " << WSAGetLastError() << endl;
		connectionThreads[index].detach();
		ConnectionCounter--;
		return false;
	}
	connectionThreads[index].detach();
	ConnectionCounter--;
	return true;
}

