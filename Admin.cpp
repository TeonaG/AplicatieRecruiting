#include "Admin.h"

Admin::Admin(string nume, string prenume, string email, string parola):User(email, parola)
{  this->prenume = prenume; this->nume = nume; 
ID++;
this->id = ID;
}

void Admin::seeConnectedUsers()
{
}

void Admin::registerNewUser(int id)
{
}

void Admin::deleteUser(int id)
{
}

Admin::~Admin()
{
}
