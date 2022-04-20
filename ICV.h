#pragma once
#include<string>
#include<iostream>
using namespace std;
class ICV
{
public:
	virtual int getIdCV() = 0;
	virtual string getCat() = 0;
	virtual string getTel() = 0;
	virtual	string getNume() = 0;
	virtual string getPrenume() = 0;
	virtual string getLiceu() =0 ;
	virtual string getexperienta() = 0;
	virtual string getDomeniuactivare() = 0;
	virtual int getidAngajat()= 0;
	virtual string getAlteinformatii() = 0;
	virtual string getStudiiSuperioare()= 0;

	virtual void setIdCv() = 0;;
	virtual void setCat(string cat) = 0;
	virtual void setTel(string tel) = 0;
	virtual void setNume(string nume) = 0;
	virtual void setPrenume(string pren) = 0;
	virtual void setLiceu(string lic) = 0;
	virtual void setExperienta(string exp) = 0;
	virtual void setDomeniu(string domeniu) = 0;
	virtual void setAlteInf(string inf) = 0;
	virtual void setStudi(string std) = 0;
	
};


