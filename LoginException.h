#pragma once
#include "CExceptie.h"
class LoginException : public CExceptie
{
public:
    LoginException(std::string exceptie,int cod):CExceptie(exceptie,cod) {}
    virtual ~LoginException(){}
};


