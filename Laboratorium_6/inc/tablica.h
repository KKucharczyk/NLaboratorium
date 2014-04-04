#ifndef TABLICA_H
#define TABLICA_H

#include "element.h"
#include <string>
#include <vector>

using namespace std;

class Tablica
{
public:
   // Zmienne
   int ilosc_elementow;
   
   vector<Element*> Tablica_indeksow;
   
   // Konstruktory
   Tablica() {ilosc_elementow = 0;}
  
   // Metody
   void Dodaj(int k, int w);
   void Usun(int k);
   void Pobierz(int k);
   void Zmien(int k, int w);
   int IleElementow();
   bool CzyPuste();
   
   
   
};

#endif