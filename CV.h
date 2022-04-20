#pragma once
#include "ICV.h"

using namespace std;
class CV:
	public ICV
{protected:
	int idCV;
	string nume;
	string prenume;
	string nrtel;
	static int IDCV;
	string categorie;
	string liceu;
	string experienta;
	string domeniiActivare;
	int idAngajat;
	string alteInformatii;
	string studiiSuperioare;
public:
	CV();
	CV(string nume,string prenume,string nrtel,string categorie, string liceu, string experienta, string domeniiActivare,string alteInformatii) :nume(nume),prenume(prenume),nrtel(nrtel),categorie(categorie), liceu(liceu), experienta(experienta), domeniiActivare(domeniiActivare) ,alteInformatii(alteInformatii) {}
	int getIdCV() { return this->idCV; }
	string getCat()  {return this->categorie;}
	string getTel() {return this->nrtel;}
	string getNume() { return this->nume; }
	string getPrenume() { return this->prenume; }
	string getLiceu() { return liceu; }
	string getexperienta() {return experienta;}
	string getDomeniuactivare() { return domeniiActivare; }
	int getidAngajat() { return idAngajat; };
	string getAlteinformatii() { return this->alteInformatii; }
	string getStudiiSuperioare() { return this->studiiSuperioare; }

	void setIdCv();
	void setCat(string cat) { this->categorie = cat; }
	void setTel(string tel) { this->nrtel = tel; }
	void setNume(string nume) { this->nume = nume; }
	void setPrenume(string pren) { this->prenume = prenume; }
	void setLiceu(string lic) { this->liceu = lic; }
	void setExperienta(string exp) { this->experienta = exp; }
	void setDomeniu(string domeniu) { this->domeniiActivare = domeniu; }
	void setAlteInf(string inf) { this->alteInformatii = inf; }
	void setStudi(string std) { this->studiiSuperioare =std; }
	virtual  ~CV() {};
};

