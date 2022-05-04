#pragma once
#include "User.h"
#include <string>
#include <vector>

class Admin : public User
{
private:
    string nume;
    string prenume;
public:
    Admin() { }
    Admin(string nume, string prenume) { this->nume = nume, this->prenume = prenume; }
    vector<string> getInfoProfil() const override;

};
