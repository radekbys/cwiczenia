#include <iostream>
#include"Samolot.h"

using namespace std;

void wypisz_samolot(Samolot sammi);
Samolot korekta(Samolot korygowany ,double kor, int co);

enum param_samolotu { PALIWO, DYSTANS, WYSOKOSC, X, Y, Z };

int main()
{
	Samolot argumentowoskonstruowany(500, 100, 33, 20, 4000, 4000);

	Samolot sam;

	sam.paliwo_l =1000;
	sam.dystans_km = 200;
	sam.wysokosc_m = 8000;
	sam.set_x(66);
	sam.set_y(40);
	sam.set_z(8000);

	wypisz_samolot(sam);

	sam = argumentowoskonstruowany;

	wypisz_samolot(sam);

	Samolot pusty;

	sam = pusty;

	wypisz_samolot(sam);

	system("PAUSE");
	return 0;
}



void wypisz_samolot(Samolot sammi)
{
	cout << endl << "wysokosc [m]: " << sammi.wysokosc_m << endl << "dystans [km]: " << sammi.dystans_km
		<< endl << "paliwo [l]: " << sammi.paliwo_l << endl;
	return;
}

Samolot korekta(Samolot korygowany , double kor, int co)
{
	switch (co)
	{
	case PALIWO:
		korygowany.paliwo_l = kor;
		break;
	case DYSTANS:
		korygowany.dystans_km = kor;
		break;
	case WYSOKOSC:
		korygowany.wysokosc_m = kor;
		break;
	case X:
		korygowany.set_x(kor);
		break;
	case Y:
		korygowany.set_y(kor);
		break;
	case Z:
		korygowany.set_z(kor);
		break;
	}
	
	return korygowany;
}
