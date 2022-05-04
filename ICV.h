#pragma once
#include<string>
#include<iostream>
using namespace std;
class ICV
{
public:
	virtual string getTel() const = 0;
	virtual	string getNume() const = 0;
	virtual string getPrenume() const = 0;
	virtual string getEmail() const = 0;
	virtual string getAdresa() const = 0;
	virtual string getJudet() const = 0;
	virtual string getOras() const = 0;
	virtual string getDataNastere() const = 0;
	virtual string getLocStudii() const = 0;

	virtual void setTel(string) = 0;
	virtual void setNume(string) = 0;
	virtual void setPrenume(string) = 0;
	virtual void setStudii(string) = 0;
	virtual void setEmail(string) = 0;
	virtual void setAdresa(string) = 0;
	virtual void setJudet(string) = 0;
	virtual void setOras(string) = 0;
	virtual void setDataNastere(string) = 0;
	virtual void setLocStudii(string) = 0;
	virtual void setInstitutie(string) = 0;
	virtual void setPerioada_inceput_studii(string) = 0;
	virtual void setPerioada_final_studii(string) = 0;
	virtual void setFunctiaOcupata(string) = 0;
	virtual void setPerioada_inceput_functie(string) = 0;
	virtual void setPerioada_final_functie(string) = 0;
	virtual void setDomeniu(string) = 0;
};

