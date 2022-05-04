#pragma once
#include <string>
using namespace std;
class ILocDeMunca
{
public:
	virtual void setDomeniu(string) = 0;
	virtual void setFunctie(string) = 0;
	virtual void setAngajator(string) = 0;
	virtual void setJudet(string) = 0;
	virtual void setOras(string) = 0;
	virtual void setProgram(string) = 0;
	virtual string getDomeniu() const = 0;
	virtual string getFunctie() const = 0;
	virtual string getAngajator() const = 0;
	virtual string getJudet() const = 0;
	virtual string getOras() const = 0;
	virtual string getProgram() const = 0;
};
