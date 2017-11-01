#ifndef _SAMOLOT_H_
#define _SAMOLOT_H_

#include "Silnik.h"
#include "Radio.h"

class Samolot
{
public:
	double paliwo_l;	
	double dystans_km;
//private:
	double x, y, z;
//public:
	double wysokosc_m;
	char* sygnatura;
	const double masa_t = 200;
	Silnik psilnik;

	Samolot & operator =(const Samolot kopy);

	void set_x(double i);
	void set_y(double i);
	void set_z(double i);
	double get_x()const;
	double get_y()const;
	double get_z()const;
	double get_masa()const;

	Samolot();
	Samolot(double ppaliwo, double ddystans_km, double xx,
		double yy, double zz, double wwysokosc_m);
	~Samolot();
};


#endif
