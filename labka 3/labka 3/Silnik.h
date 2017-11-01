#ifndef _SILNIK_H_
#define _SILNIK_H_


class Silnik
{

	
	Silnik & operator =(const Silnik sil);


public:

	bool stan;
	int szybkosc;


	Silnik();
	~Silnik();
};


#endif
