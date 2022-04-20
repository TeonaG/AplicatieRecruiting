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

