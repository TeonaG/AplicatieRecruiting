#pragma once
#include "CExceptie.h"

class ConnException:public CExceptie
{
public:
	ConnException(std::string exceptie, int cod):CExceptie(exceptie,cod){}
	virtual ~ConnException(){}
};

