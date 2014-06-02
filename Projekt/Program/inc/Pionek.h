#ifndef PIONEK_H
#define PIONEK_H

#include <iostream>
using namespace std;

struct Pionek
{
protected:	
	int x;
	int y;
	bool damka;
	bool wybor;

public:
	Pionek(int _x, int _y, bool _damka);

	int Pozycja_x();
	int Pozycja_y();

	void Zaznacz();
	void Odznacz();
	bool CzyZaznaczony();

};




#endif