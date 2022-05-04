#pragma once
#include "IExceptie.h"

class CExceptie : public IExceptie
{
protected:
    string exceptie;
    int cod;
public:
    CExceptie(string exceptie, int cod) :exceptie(exceptie), cod(cod) {}
    string getMesaj() override { return this->exceptie; }
    int getCode() override { return this->cod; }
    void printExceptie() override { std::cout << this->exceptie << " " << this->cod << std::endl; }
    virtual ~CExceptie() {}
};

