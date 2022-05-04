#include "IExceptie.h"
#include "PSWException.h"
#include "LoginException.h"
#include "ConnException.h"

IExceptie* FactoryException::generate_LoginException(std::string str, int cod)
{
	return new LoginException(str, cod);
}

IExceptie* FactoryException::generate_PSWException(std::string str, int cod)
{
	return new PSWException(str, cod);
}

IExceptie* FactoryException::generate_ConnException(std::string str, int cod)
{
	return new ConnException(str, cod);
}
