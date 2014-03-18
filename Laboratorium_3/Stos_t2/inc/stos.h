#ifndef STOS_H
#define STOS_H

#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;

class Stos
{
public:
  int *Tablica;
  int ilosc_elementow;
  int wielkosc_tablicy;
  int zakres;
  
  // Konstruktory
  Stos() {Tablica = NULL; ilosc_elementow = 0; wielkosc_tablicy = 0;}
  Stos(int wielkosc) {Tablica = new int[wielkosc]; ilosc_elementow = 0; wielkosc_tablicy = wielkosc;}
  
  // Metody
  void push(int Nowy);
  void pop();
  bool isEmpty();
  int size();
  
  void Show();
  int Opcje(int argc, char **argv);
  int* Pobierz_dane();
};


#endif