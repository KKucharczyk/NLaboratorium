#include <iostream>
#include <fstream>
#include <vector>
#include "plecak.h"

using namespace std;

int main()
{
	fstream plik;
	int Pojemnosc;
	unsigned int Ilosc;
	vector<pair<int,int> > przedmioty;
	unsigned int Waga , Wartosc;

	plik.open("Dane.txt", ios::in | ios::out);
	plik >> Pojemnosc;
	plik >> Ilosc;

	for(unsigned int i = 0; i < Ilosc; i++)
	{
		plik >> Waga;
		plik >> Wartosc;
		przedmioty.push_back(make_pair(Waga , Wartosc));
	}

	plik.close();

	Plecak plecak;
	
	plecak.Algorytm(przedmioty ,Pojemnosc);
	
	vector<pair<int,int> > wynik = plecak.Wynik(Pojemnosc);
	
	for(unsigned int i = 0; i < wynik.size(); i++)
		cout << wynik[i].first << " " << wynik[i].second << endl;
}

