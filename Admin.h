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
    Admin() { this->rol = 1; }
    Admin(vector<string>v) :User(v) { this->nume = v[2]; this->prenume = v[3]; this->rol = 1; }
    void seeRegisteredUsers();
    void registerNewUser(std::vector<std::string>);
    void deleteUser(std::string);
    std::vector<std::string> getInfoProfil() const override;
    virtual ~Admin() {}
};
