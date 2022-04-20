#include "Aplicant.h"

IRecenzie* Aplicant::getRecenzie(int idR)
{
    for (int i = 0; i < recenzii.size(); i++)
        if (recenzii[i].first->getIdRecenzie() == idR)
            return recenzii[i].first;
}
