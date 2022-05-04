#include "Admin.h"

vector<string> Admin::getInfoProfil() const
{

	std::vector<std::string> v;
	v.push_back(nume);
	v.push_back(prenume);
	return v;
}
