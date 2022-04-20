#pragma once
#include "User.h"
#include "CV.h"
#include "Recenzie.h"
#include<vector>
class Aplicant :
    public User
{
protected:
    ICV* cvAplicant;
    vector<pair< IRecenzie*, int >>recenzii;

public:
    Aplicant() {}
    Aplicant(string nume, string prenume, ICV* cv) { nume = nume, prenume = prenume, cvAplicant = cv; };
    virtual ~Aplicant() {}

    void addCv(ICV* cv) { this->cvAplicant = cv; }
    ICV* getCV() {
        return cvAplicant;
    }
    void addRenzie(IRecenzie* rec, int id) {
        recenzii.push_back(make_pair(rec, id));
    }
    IRecenzie* getRecenzie(int idR);
};

