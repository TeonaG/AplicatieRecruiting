#include "Angajator.h"

std::vector<std::string> Angajator::getInfoProfil() const
{
    std::vector<std::string> v;
    v.push_back(numeCompanie);
    return v;
}
