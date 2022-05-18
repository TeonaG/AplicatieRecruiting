#include "FactoryUser.h"

IUser* FactoryUser::createUserAdmin(vector<string>v)
{
	return new Admin(v);
}

IUser* FactoryUser::createUserAdmin()
{
	return new Admin();
}

IUser* FactoryUser::createUserAngajat(vector<string>v)
{
	return new Angajat(v);
}

IUser* FactoryUser::createAngajator(vector<string>v)
{
	return new Angajator(v);
}
