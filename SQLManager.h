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
  //  SQLManager(SQLManager& copyInstance) = delete; // no access for another instance

    //void destroyInstance();

    static SQLManager* instance;
public:
    static SQLManager& getInstance();
    MYSQL* conectare();
    void afisAdmin();
   // void afisAngajator();
    bool autentificareUser(string email,string parola);
    bool isEmail(string email);
    bool inregistrareAngajat(string nume, string prenume, string email, string parola);
    bool inregistrareAngajator(string email, string parola, string NumeCompanie);
    //bool verificPerecheAngajat(string email, string parola);
    //bool deleteUser(string email, string parola);
    int procesareCereriClient(vector<string> vec);
    bool inregistrareCv(string nume, string NrTel, string adresa, string judet, string dataNastere, string prenume, string Email, string oras, string studii, string institutie, string perioadastrat, string perioadaoff, string fct, string angajator, string perioadadela, string domeniu, string panala);

};

