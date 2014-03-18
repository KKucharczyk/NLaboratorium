#ifndef STOS_H
#define STOS_H

#include <iostream>

using namespace std;

struct Kolejka
{
   int *Tablica;
   int ilosc_elementow;
  
  // Konstruktory
  Kolejka() {ilosc_elementow = 0; Tablica = NULL;}
  
  // Metody
  void enqueue(int Nowy);
  void dequeue();
  bool isEmpty();
  int size();
  
  void Show();
};


#endif