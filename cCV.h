#pragma once
#include "ICV.h"

using namespace std;
class cCV : public ICV
{
protected:
	string nume;
	string prenume;
	string nrtel;
	string email;
	string adresa;
	string judet;
	string oras;
	string dataNastere;
	string locStudii;
	string institutie;
	string per_inceput_studii;
	string per_sfarsit_studii;
	string per_inceput_functie;
	string per_sfarsit_functie;
	string functie;
	string domeniu;

public:
	cCV() {}
	string getTel() const override { return this->nrtel; }
	string getNume() const override { return this->nume; }
	string getPrenume() const override { return this->prenume; }
	string getEmail() const override { return this->email; }
	string getAdresa() const override { return this->adresa; }
	string getJudet() const override { return this->judet; }
	string getOras() const override { return this->oras; }
	string getDataNastere() const override { return this->dataNastere; }
	string getLocStudii() const override { return this->locStudii; }

	void setTel(string nrTel) override { this->nrtel = nrTel; }
	void setNume(string nume) override { this->nume = nume; }
	void setPrenume(string prenume) override { this->prenume = prenume; }
	void setEmail(string email) override { this->email = email; }
	void setAdresa(string adresa) override { this->adresa = adresa; }
	void setJudet(string judet) override { this->judet = judet; }
	void setOras(string oras) override { this->oras = oras; }
	void setDataNastere(string dataNastere) override { this->dataNastere = dataNastere; }
	void setLocStudii(string locStudii) override { this->locStudii = locStudii; }
	void setInstitutie(string institutie) override { this->institutie = institutie; }
	void setPerioada_inceput_studii(string s) override { this->per_inceput_studii = s; }
	void setPerioada_final_studii(string s) override { this->per_sfarsit_studii = s; }
	void setFunctiaOcupata(string functie) override { this->functie = functie; }
	void setPerioada_inceput_functie(string s) override { this->per_inceput_functie = s; }
	void setPerioada_final_functie(string s) override { this->per_sfarsit_functie = s; }
	void setDomeniu(string domeniu) override { this->domeniu = domeniu; }
	virtual ~cCV() {}
};

