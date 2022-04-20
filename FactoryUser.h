#pragma once

#include <iostream>
#include <string>

using namespace std;

#include "Admin.h"
#include "Angajator.h"
#include "Aplicant.h"
class IUser;

class FactoryUser
{
public:
	static IUser* createUserAdmin();
	static IUser* createUserAngajat();
	static IUser* createAplicant();

};
