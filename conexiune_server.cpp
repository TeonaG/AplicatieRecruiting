#include "conexiune_server.h"
#include "parser.h"
#include "IExceptie.h"

SOCKET conexiune_server::conexiune_la_server;
std::string conexiune_server::sir_primit;
std::string conexiune_server::sir_de_trimis;

conexiune_server::conexiune_server()
{
    WSADATA wsaData;
    this->iResult=WSAStartup(MAKEWORD(2,2),&wsaData);

    if (this->iResult != 0)
    {
        std::cout<<"WSAStartup failed with error: %d\n"<<this->iResult;
        exit(-1);
    }
    ZeroMemory(&this->hints,sizeof(this->hints));
    this->hints.ai_family=AF_UNSPEC;
    this->hints.ai_protocol=IPPROTO_TCP;
    this->hints.ai_socktype=SOCK_STREAM;

    this->iResult=getaddrinfo(DEFAULT_IP,DEFAULT_PORT,&this->hints,&this->result);
    if(this->iResult!=0)
    {
        std::cout<<"getaddrinfo failed with error: "<<this->iResult;
        WSACleanup();
    }
}

bool conexiune_server::conectare_la_server()
{
    bool con=false;
    //incercam conexiunea la o adresa pana reusim

    for(ptr=result;ptr!=nullptr;ptr=ptr->ai_next)
    {
        conexiune_la_server=socket(ptr->ai_family,ptr->ai_socktype,ptr->ai_protocol);
        if(conexiune_la_server==INVALID_SOCKET)
        {
            std::cout<<"socket failed with error: "<<WSAGetLastError();
            WSACleanup();
            return false;
        }

        iResult=connect(conexiune_la_server,ptr->ai_addr,(int)ptr->ai_addrlen);
        if(this->iResult==SOCKET_ERROR)
        {
            std::cout<<"Could not connect to server, error: "<<WSAGetLastError()<<std::endl;
            closesocket(conexiune_la_server);
            conexiune_la_server=INVALID_SOCKET;
            continue;
        }
        else
        {
            con=true;
            break;
        }
    }
    return con;
}

bool conexiune_server::inchide_conexiunea()
{
    if(closesocket(this->conexiune_la_server==SOCKET_ERROR))
    {
        if(WSAGetLastError()==WSAENOTSOCK)
            return true;
        std::cout<<"Failed to close the socket. Winsock error: "<<std::to_string(WSAGetLastError());
        return false;
    }
    return true;
}

void conexiune_server::trimite_sir(std::string str)
{
    int check=send(conexiune_la_server,str.c_str(),str.length(),NULL);
   //if (check == SOCKET_ERROR)
      //  throw FactoryException::generate_ConnException("Packet loss", 1);
}

void conexiune_server::primire_sir(std::string& str)
{
    int l = str.length();
    char* v = new char[l + 1];
    v[l] = 0;
    int check = recv(conexiune_la_server, v, l, NULL); //in v retinem sirul citit de la server
    str = v;
    delete[] v;

    if (check == SOCKET_ERROR)
        throw FactoryException::generate_ConnException("Packet loss", 1);
}

void conexiune_server::trimite_la_server(std::vector<std::string>v)
{
    parser&instance=parser::getInstance();
    sir_de_trimis=instance.parse_string(v,'/');
    trimite_sir(sir_de_trimis);
}

std::vector<std::string> conexiune_server::primire_de_la_server()
{
    parser& instance = parser::getInstance();
    primire_sir(sir_primit); //sir primit va deveni sirul citit de la server
    return instance.unparse_string(sir_primit, '/');
}