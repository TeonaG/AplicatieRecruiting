#pragma once
#include "User.h"
#include "LocDeMunca.h"
#include<vector>
class Angajator :
    public User
{
private:

    string numeCompanie;
    std::vector<ILocDeMunca*> joburi;

public:

    Angajator() { this->rol = 2; }
    Angajator(vector<string>v) :User(v) { this->numeCompanie = v[2]; this->rol = 2; }
    void setNumeCompanie(string numeCompanie) { this->numeCompanie = numeCompanie; }
    string getNumeCompanie() { return this->numeCompanie; }
    void addJob(ILocDeMunca* job) { this->joburi.push_back(job); }
    vector<ILocDeMunca*> getListJoburi() { return this->joburi; }
    ILocDeMunca* getJob(int nr) { return this->joburi[nr]; }
    std::vector<std::string> getInfoProfil() const override;
    virtual ~Angajator() {}
};

