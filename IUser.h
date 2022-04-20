#pragma once
using namespace std;
#include<iostream>
#include<string>
class IUser
{public:

	virtual string  getParola() = 0;
	virtual void setNume(string nume) = 0;
	virtual void setPrenume(string prenume) = 0;
	virtual void setEmail(string) = 0;
	virtual void setParola(string) = 0;
	virtual void setDataInrolare(string) = 0;
	virtual void setRol(int) = 0;
	virtual void setUserID(int) = 0;
	virtual void setConexiune(string nume, string prenume, string email, string data, int id, int rol) = 0;
	virtual void setStatus() = 0;

	virtual	string getNume() = 0;
	virtual string getPrenume() = 0;
	//virtual string getuser() = 0;
	virtual string getemail() = 0;
	virtual string getdataInrolare() = 0;
	virtual int getRol() = 0;
	virtual int getUserID() = 0;
	virtual bool getConnectionStatus() = 0;

};

