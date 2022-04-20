#pragma once
#include "User.h"
class Admin :
    public User
{
public:

    Admin() {}
    Admin(string nume, string prenume, string email, string parola);
 

    void seeConnectedUsers();
    void registerNewUser(int id);
    void deleteUser(int id);

    ~Admin() ;
};

