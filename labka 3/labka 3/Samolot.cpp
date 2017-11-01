#include "Samolot.h"



Samolot & Samolot::operator=(const Samolot kopy)
{
	this->paliwo_l = kopy.paliwo_l;
	this->dystans_km = kopy.dystans_km;
	this->wysokosc_m = kopy.wysokosc_m;
	this->x = kopy.x;
	this->y = kopy.y;
	this->z = kopy.z;

	return *this;
}

void Samolot::set_x(double i)
{
	x = i;
}

void Samolot::set_y(double i)
{
	y = i;
}

void Samolot::set_z(double i)
{
	z = i;
}

double Samolot::get_x()const
{
	return x;
}

double Samolot::get_y()const
{
	return y;
}

double Samolot::get_z()const
{
	return z;
}

double Samolot::get_masa() const
{
	return masa_t;
}

Samolot::Samolot()
{
	paliwo_l = 0;
	dystans_km = 0;
	x = 0;
	y = 0;
	z = 0;
	wysokosc_m = 0;
}


Samolot::Samolot(double ppaliwo, double ddystans_km, double xx,
	double yy, double zz, double wwysokosc_m)
	:
	paliwo_l(ppaliwo),
	dystans_km(ddystans_km),
	x(xx),
	y(yy),
	z(zz),
	wysokosc_m(wwysokosc_m)
{
}


Samolot::~Samolot()
{
}
