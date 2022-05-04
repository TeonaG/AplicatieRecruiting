#pragma once
#include <vector>
#include <string>
#include "User.h"

class Angajat:public User
{
private:
	string nume;
	string prenume;
public:
	Angajat() { this->rol = 3; }
	Angajat(vector<string>v) :User(v) { this->nume = v[2]; this->prenume = v[3]; this->rol = 3; }
	void cautare_job(std::vector<std::string>);
	void trimite_cv(std::string);
	std::vector<std::string> getInfoProfil() const override;
	virtual ~Angajat() {}
};

