
#include "FactoryUser.h"
#include "Aplicant.h"
#include"Admin.h"

IUser* FactoryUser::createUserAdmin()
{
    IUser*a=new Admin();
    return nullptr;
}

IUser* FactoryUser::createUserAngajat()
{
   // return new Angajator;
    return nullptr;

}

IUser* FactoryUser::createAplicant()
{
    //Aplicant* a=new Aplicant();

   // return a;
    return nullptr;

}

