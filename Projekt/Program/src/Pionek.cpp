#include "Pionek.h"

Pionek::Pionek(int _x, int _y, bool _damka)
{
	x = _x;
	y = _y;
	damka = _damka;
}

int Pionek::Pozycja_x()
{
	return x;
}

int Pionek::Pozycja_y()
{
	return y;
}

void Pionek::Zaznacz()
{
	wybor = true;
}
	
void Pionek::Odznacz()
{
	wybor = false;
}

bool Pionek::CzyZaznaczony()
{
	return wybor;
}