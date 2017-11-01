#include "Silnik.h"



Silnik & Silnik::operator=(const Silnik sil)
{
	this->stan = sil.stan;
	this->szybkosc = sil.szybkosc;
	return *this;
}

Silnik::Silnik()
{
}


Silnik::~Silnik()
{
}
