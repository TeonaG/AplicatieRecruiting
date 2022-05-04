#pragma once
#include "IUser.h"
#include <vector>
#include <string>

class User : public IUser
{
protected:
    int id;
    int rol;
    string parola;
    string email;
    bool status;
    string DataInrolare;
   // ICV* cv;
public:
    User() {}
    User(vector<string>v) { this->email = v[0]; this->parola = v[1]; this->status = false; }
    void setEmail(string email) override { this->email = email; }
    void setParola(string parola) override { this->parola = parola; }
    void setDataInrolare(string data) override { this->DataInrolare = data; }
    void setUserID(int nr) override { this->id = nr; }
    void setStatus() override { this->status = true; }
    string getEmail() const override { return this->email; }
    string  getDataInrolare() const override { return this->DataInrolare; }
    int getRol() const override { return this->rol; }
    int getUserID() const override { return this->id; }
    bool getConnectionStatus() const override { return this->status; }
   // void setCV(ICV* cv) override { this->cv = cv; }
   // ICV* getCV() const override { return this->cv; }
    virtual ~User(){}
};

