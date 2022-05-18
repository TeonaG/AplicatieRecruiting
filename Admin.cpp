#include "Admin.h"
#include "client.h"
#include "parser.h"

void Admin::registerNewUser(std::vector<std::string> v,Client&client)
{
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));
    client.trimite_mesaj(str);
}

void Admin::deleteUser(std::string email)
{
	std::vector<std::string> to_send;
	to_send.push_back("2");
	to_send.push_back(email);
    //conexiune_server::trimite_la_server(to_send);
}

std::vector<std::string> Admin::getInfoProfil() const
{
	std::vector<std::string> v;
	v.push_back(nume);
	v.push_back(prenume);
	return v;
}


void Admin::seeRegisteredUsers()
{
	std::vector<std::string> to_send;
	to_send.push_back("3");
    //conexiune_server::trimite_la_server(to_send);
}

