#pragma once
#include "IRecenzie.h"
#include<string>
#include<iostream>
using namespace std;

class Recenzie :
    public IRecenzie
{
protected:
    int idRecenzie;
    static int IdRecenzie;
    int idJob;
    string recenzie;
public:
    Recenzie() {}
    Recenzie(string rec, int idjob)
    { this->recenzie = rec; this->idJob = idjob; this->IdRecenzie++; this->idRecenzie = this->IdRecenzie; }
    int getIdRecenzie() { return this->idRecenzie; }
    string getRecenzie() { return this->recenzie; }

};
