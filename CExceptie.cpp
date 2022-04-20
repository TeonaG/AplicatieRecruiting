#include "CExceptie.h"

string CExceptie::getMessage()
{
    return exceptie;
}

int CExceptie::getCode()
{
    return cod;
}

void CExceptie::printExceptie()
{
}




CExceptie::~CExceptie()
{
     exceptie.erase();
     cod = 0;

}
