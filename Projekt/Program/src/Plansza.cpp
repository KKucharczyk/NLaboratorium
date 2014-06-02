#include "Plansza.h"

Plansza::Plansza()
{
	*plansza = new int[8];
	for(int i = 0; i < 8; i++)
		plansza[i] = new int[8];

	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++)
			plansza[i][j] = 0;

	// Wypełnienie białymi
	for(int i = 0; i < 8; i += 2)
	{
		plansza[0][i] = 1;
		plansza[1][i+1] = 1;
		plansza[2][i] = 1;
	}

	// Wypełnienie czarnymi
	for(int i = 0; i < 8; i += 2)
	{
		plansza[7][i]   = 2;
		plansza[6][i+1] = 2;
		plansza[5][i]   = 2;
	}

}

int Plansza::Wczytaj_x()
{
    char litera;
    int x = 9;
 
    cout << "A - H: ";
     
    while(x == 9)
    {
        cin >> litera;
        litera = toupper(litera);
        switch (litera)
        {
            case 'A':   x = 1;
                        break;
            case 'B':   x = 2;
                        break;
            case 'C':   x = 3;
                        break;
            case 'D':   x = 4;
                        break;
            case 'E':   x = 5;
                        break;
            case 'F':   x = 6;
                        break;
            case 'G':   x = 7;
                        break;
            case 'H':   x = 8;
                        break;
            default :   cout << "Podaj litere A-H: ";
        }
    }
 
    return x;
}
 
int Plansza::Wczytaj_y()
{
    int y = 9;
 
    cout << "1 - 8: ";
    cin >> y; 
    while(y < 1 || y > 8)
    {
        cout << "Podaj numer: 1-8: ";
        cin >> y;
    }
 
    return y;
}

int Plansza::Lokalizuj(Bialy_pionek Biale[12], int x, int y)
{
    int licznik;
 
    for (licznik = 0; licznik < 12; licznik++)
    {
        if (Biale[licznik].Pozycja_x() == x && Biale[licznik].Pozycja_y() == y)
        {
            Biale[licznik].Zaznacz();
            return(licznik);
        }
    }
 
    return(licznik);
}

void Plansza::Wypisz_pionki(Bialy_pionek Biale[12])
{
    int licznik;
 
    for(licznik = 0; licznik < 12; licznik++)
        cout << "Bialy pionek " << licznik << " ma pozycje: " 
             << Biale[licznik].Pozycja_x() << ", " 
             << Biale[licznik].Pozycja_y() << endl;
}

void Plansza::Pokaz_plansze(int plansza[8][8])
{
    int i,j;
 
    cout <<  "|----|----|----|----|----|----|----|----|" << endl;
 
    for(i = 7; i >= 0; i--)
    {
        for(j = 0; j < 8; j++)
        {
            cout << "| " << Plansza::Konwertuj(plansza[i][j]) << "  ";
        }
 
        cout <<  "|" << endl << "|----|----|----|----|----|----|----|----|" << endl;
    }
}

char Plansza::Konwertuj(int numer)
{
    switch(numer)
    {
        case 0  :   return(' ');
                    break;
        case 1  :   return('b');
                    break;
        case 2  :   return('c');
                    break;
        case 3  :   return('B');
                    break;
        case 4  :   return('C');
                    break;
        default :   return('!');
    }
}