#pragma once
#include "CExceptie.h"
class PSWException: public CExceptie
{
public:
	PSWException(std::string exceptie, int cod):CExceptie(exceptie,cod) {}
	virtual ~PSWException(){}
};

