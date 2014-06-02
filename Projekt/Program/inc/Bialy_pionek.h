#ifndef BIALY_PIONEK
#define BIALY_PIONEK

#include "Pionek.h"

struct Bialy_pionek : Pionek
{
public:
	bool Ruch(int _x, int _y, int plansza[8][8]);
	bool Bicie(int _x, int _y, int plansza[8][8]);
	Bialy_pionek(int _x = -1, int _y = -1, bool _damka = false);
};

#endif