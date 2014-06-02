#include "Bialy_pionek.h"

bool Bialy_pionek::Ruch(int _x, int _y, int plansza[8][8])
{
    if(_x == x + 1 && _y == y + 1 && plansza[x][y] == 0)
    {
        cout << plansza[x - 1][y - 1] << endl;
        plansza[x - 1][y - 1] = 0;
        plansza[x][y] = 1;
 
        cout << plansza[x][y] << endl;
 
        x++;
        y++;
 
        cout << plansza[x - 1][y - 1] << endl;
        cout << "Ruch w prawo." << endl;
 
        return 1;
    }

    if(_x == x - 1 && _y == y + 1 && plansza[x - 2][y] == 0)
    {
        plansza[x - 1][y - 1] = 0;
        plansza[x - 2][y] = 1;
 
        x--;
        y++;

        cout << "Ruch w lewo." << endl;
        return 1;
    }
 
    cout << "Nie mozna wykonac ruchu." << endl;
 
    return(0);
}

bool Bialy_pionek::Bicie(int _x, int _y, int plansza[8][8])
{
    if(_x == x + 2 && _y == y + 2 && plansza[x+1][y+1] == 2)
    {
        plansza[x][y] = 0;
        plansza[x + 1][y + 1] = 0;
        plansza[x + 2][y + 2] = 1;
 
        x = x + 2;
        y = y + 2;
        cout << "Bicie w prawo" << endl;
        return 1;
    }

    if(_x == x - 2 && _y == y + 2 && plansza[x-1][y+1] == 2)
    {
        plansza[x][y] = 0;
        plansza[x-1][y+1] = 0;
        plansza[x-2][y+2] = 1;
 
        x = x-2;
        y = y+2;
        cout << "Bicie w lewo" << endl;
        return 0;
    }
    return -1;
}

Bialy_pionek::Bialy_pionek(int _x, int _y, bool _damka):Pionek(_x, _y, damka)
{
    x = _x;
    y = _y;
    damka = _damka;
}