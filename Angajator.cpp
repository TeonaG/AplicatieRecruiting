#include "Angajator.h"



ILocDeMunca* Angajator::getJob(int nr)
{
	for (int i = 0; i < this->joburi.size(); i++)
		if (i == nr)
			return joburi[i];
}
