#ifndef STOS_H
#define STOS_H

#include <iostream>
#include "element.h"

using namespace std;

struct Kolejka
{
  Element *head;
  Element *tail;
  int ilosc_elementow;
  
  // Konstruktory
  Kolejka() {ilosc_elementow = 0; head = NULL; tail = NULL;}
  
  // Metody
  void enqueue(int Nowy);
  void dequeue();
  bool isEmpty();
  int size();
  
  void Show();
};


#endif