#pragma once
#include<utility>
#include "ILocDeMunca.h"
using namespace std;
#include<iostream>
#include<string>
class LocDeMunca :
    public ILocDeMunca
{
private:
    string oras;
    string judet;
    string domeniu;
    string tip; //full sau part-time
    float salariu;
    pair<int, int>program;
public:
    LocDeMunca() {}
    virtual ~LocDeMunca() {};
    void addOras(string oras) {
        this->oras = oras;
    };
    void addjudet(string judet) {
        this->judet = judet;
    };
    void addDomeniu(string domeniu) {
        this->domeniu = domeniu;
    };
    void addtip(string tip)
    {
        this->tip = tip;
    };
    void addsalariu(float salariu) { this->salariu = salariu; }
    void addprogram(int inceput, int sfarsit) { program.first = inceput, program.second = sfarsit; }




};

