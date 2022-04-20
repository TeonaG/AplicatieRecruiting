#pragma once
#include "User.h"
#include "LocDeMunca.h"
#include<vector>
class Angajator :
    public User
{
private:
    string numeCompanie;

    vector<ILocDeMunca*>joburi;
public:
    Angajator() {}
    Angajator(string data) { this->DataInrolare = data; }
    ~Angajator() {}

    void setNumeCompanie(string s) { this->numeCompanie = s; }
    string getNumeCompanie() { return this->numeCompanie; }
    void addJob(ILocDeMunca* job) { joburi.push_back(job); }
    vector<ILocDeMunca*> getListJoburi() { return this->joburi; }
    ILocDeMunca* getJob(int nr);
};

