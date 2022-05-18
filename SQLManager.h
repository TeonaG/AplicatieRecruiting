#pragma once
#include <iostream>
#include <locale>
#include<mysql.h>
#include<string>
#include<vector>
using namespace std;
class SQLManager
{private:
    SQLManager();
    ~SQLManager() {}
   SQLManager(SQLManager& copyInstance) = delete; // no access for another instance

 //   void destroyInstance();

    static SQLManager* instance;
public:
    static SQLManager& getInstance();
    MYSQL* conectare();

    void afisAdmin();
    void afisAngajator();
    bool autentificareUser(string email, string parola);

    bool isEmail(string email);
    bool inregistrareAngajat(string email, string parola, string nume, string prenume);
    bool inregistrareAngajator(string email, string parola, string NumeCompanie);
    bool addjob(string  Domeniu, string Functie, string Angajator, string judet, string Oras, string ProgramDeLucru);
    bool addRecenzie(string Receznie, string Nota, string Angajator);
    bool deleteUser(string email, string parola);
    bool sendIdCv(string idA, string idCv);
    int procesareCereriClient(vector<string> vec);
    bool inregistrareCv(string id,string Nume, string Prenume, string NumarTel, string Email, string Adresa, string Judet, string Oras, string DataNastere, string Studii, string Locul, string Institutie, string PerioadaDeLaStudii, string PerioadaPanaLaStudii, string FunctiaOcupata, string Domeniu, string Angajator, string PerioadaDeLa, string PerioadaPanaLa);
    vector<string> dateuser(string email,string pass,string rol);
    vector<string> SendCV(string id);
    vector<string>  sendDate(string data);
    vector<string> filtrare(string Domeniu, string judet, string Oras);
    string SendId(string nume);

};

