#pragma once
#include<utility>
#include "ILocDeMunca.h"
using namespace std;
#include<iostream>
#include<string>
#include<vector>

class LocDeMunca : public ILocDeMunca
{
private:
    string oras;
    string judet;
    string domeniu;
    string program;
    string functie;
    string angajator;
   // float salariu;
   // pair<int, int>program;
public:
    LocDeMunca();
    LocDeMunca(vector<string>);
	void setDomeniu(string domeniu) override { this->domeniu = domeniu; }
	void setFunctie(string functie) override { this->functie = functie; }
	void setAngajator(string angajator) override { this->angajator = angajator; }
	void setJudet(string judet) override { this->judet = judet; }
	void setOras(string oras) override { this->oras = oras; }
	void setProgram(string program) override { this->program = program; }
	string getDomeniu() const override { return this->domeniu; }
	string getFunctie() const override { return this->functie; }
	string getAngajator() const override { return this->angajator; }
	string getJudet() const override { return this->judet; }
	string getOras() const override { return this->oras; }
	string getProgram() const override { return this->program; }
	virtual ~LocDeMunca(){}
};

