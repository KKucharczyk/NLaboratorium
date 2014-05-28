#include "plecak.h"

Plecak::Plecak() 
{
	;
}

void Plecak::Algorytm(vector<pair<int,int> > Dane, int Granica)
{
	Tablica = Dane;

	Pojemnosc.resize(Granica + 1);
	Ostatni.resize(Granica + 1);

	for(unsigned int i = 0; i < Tablica.size(); i++)
		for(int j = Granica - Tablica[i].first; j >= 0; j--)
			if(Pojemnosc[j + Tablica[i].first] < Pojemnosc[j] + Tablica[i].second)
			{
				Pojemnosc[j + Tablica[i].first] = Pojemnosc[j] + Tablica[i].second;
				Ostatni[j + Tablica[i].first] = i;
			}
}

int Plecak::Pokaz(int licznik)
{
	int k = 0;
	for(int i = 0; i <= licznik; i++)
		if(k < Pojemnosc[i])
			k = Pojemnosc[i];
	return k;
}

vector<pair<int,int> > Plecak::Wynik(int licznik)
{
	int k = 0;
	int temp = 0;
	vector<pair<int,int> > Wynik;

	for(int i = 0; i <= licznik; i++)
		if(k < Pojemnosc[i])
		{
			k = Pojemnosc[i];
			temp = i;
		}
	
	while (temp > 0)
	{
		Wynik.push_back(Tablica[Ostatni[temp]]);
		temp = temp - Tablica[Ostatni[temp]].first;
	}
	
	return Wynik;
}