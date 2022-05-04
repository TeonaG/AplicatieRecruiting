#include "Angajat.h"

void Angajat::cautare_job(std::vector<std::string>v)
{
	std::vector<std::string> to_send;
	to_send.push_back("4");
	for (int i = 0; i < v.size(); i++)
		to_send.push_back(v[i]);
	//conexiune_server::trimite_la_server(to_send);
}

void Angajat::trimite_cv(std::string angajator)
{
	std::vector<std::string> to_send;
	to_send.push_back("5");
	to_send.push_back(angajator);
	//conexiune_server::trimite_la_server(to_send);
}

std::vector<std::string> Angajat::getInfoProfil() const
{
	std::vector<std::string> v;
	v.push_back(nume);
	v.push_back(prenume);
	return v;
}

