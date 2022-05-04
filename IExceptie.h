#pragma once
using namespace std;
#include<iostream>
#include<string>

class IExceptie
{
public:
	virtual string getMesaj() = 0;
	virtual int getCode() = 0;
	virtual void printExceptie() = 0;
};

class FactoryException
{
public:
	static IExceptie* generate_LoginException(std::string, int);
	static IExceptie* generate_PSWException(std::string, int);
	static IExceptie* generate_ConnException(std::string, int);
};
