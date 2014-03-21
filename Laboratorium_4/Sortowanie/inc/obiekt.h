#ifndef OBIEKT_H
#define OBIEKT_H

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Obiekt{
public:
  
  int *Tablica;
  
  // Konstruktory
  // ---------------

  Obiekt()              {Tablica = NULL;}
  Obiekt(int *Wskaznik) {Tablica = Wskaznik;}
  Obiekt(int ilosc)     {Tablica = new int[ilosc];}
  
  // Przeciążenia operatorów
  // --------------------------
  Obiekt   operator +  (const Obiekt &Nowy);
  Obiekt & operator =  (const Obiekt &Nowy);
  bool operator == (const Obiekt &Nowy);
  
  // Metody
  // ----------------
  void Show();
  void Pobierz_dane(string nazwa_pliku);
  void Pomnoz(int mnoznik);
  void Czy_rowne(const Obiekt &Porownywany);
  void Zamien_elementy(int i, int j);
  void Odwroc_kolejnosc();
  void Dodaj_element(int element);
  void Dodaj_elementy(Obiekt &Nowy);
};

#endif