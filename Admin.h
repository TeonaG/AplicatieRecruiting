#pragma once
#include "User.h"
class Admin :
    public User
{
public:
    Admin() {}
    Admin(string email, string parola) :User(email, parola) {}


    void seeConnectedUsers();
    void registerNewUser(int id);
    void deleteUser(int id);

    ~Admin();
};

