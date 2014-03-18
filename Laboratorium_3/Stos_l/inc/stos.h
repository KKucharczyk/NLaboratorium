#ifndef STOS_H
#define STOS_H

#include <iostream>
#include "element.h"

using namespace std;

struct Stos
{
  Element *tail;
  int ilosc_elementow;
  
  // Konstruktory
  Stos() {ilosc_elementow = 0; tail = NULL;}
  
  // Metody
  void push(int Nowy);
  void pop();
  bool isEmpty();
  int size();
  
  int Show();
};


#endif