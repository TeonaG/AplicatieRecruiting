#pragma once
using namespace std;
#include<iostream>
#include<string>
#include<vector>
//#include "ICV.h"

class IUser
{
public:
	virtual void setEmail(string) = 0;
	virtual void setParola(string) = 0;
	virtual void setDataInrolare(string) = 0;
	virtual void setUserID(int) = 0;
	virtual void setStatus() = 0;
	virtual string getEmail() const = 0;
	virtual string getDataInrolare() const = 0;
	virtual int getRol() const = 0;
	virtual int getUserID() const = 0;
	virtual bool getConnectionStatus() const = 0;
	virtual vector<string> getInfoProfil() const = 0;
	//virtual ICV* getCV() const = 0;
	//virtual void setCV(ICV*) = 0;
};


