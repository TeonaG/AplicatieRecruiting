#include "CV.h"
int CV::IDCV = 0;

CV::CV()
{
	this->categorie = " ";
	this->experienta = " ";
	this->liceu = " ";
}

void CV::setIdCv()
{
	this->IDCV++;
	this->idCV = IDCV;
}
