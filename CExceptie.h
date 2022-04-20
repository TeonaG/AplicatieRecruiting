#pragma once
#include "IExceptie.h"
class CExceptie :
    public IExceptie
{private:
    string exceptie;
    int cod;
public:
    CExceptie(string exceptie, int cod) :exceptie(exceptie), cod(cod) {}

    string getMessage();
    int getCode();
    void printExceptie()  override;

    ~CExceptie();
};

