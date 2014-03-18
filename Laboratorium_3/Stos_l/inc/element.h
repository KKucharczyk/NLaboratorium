#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
using namespace std;

struct Element{
  int Dane;
  Element *Previous;
  
  // Konstruktory
  Element() {Previous = NULL;}
  Element(Element *Wskaznik) {Previous = Wskaznik;}
  Element(Element *Wskaznik, int informacja) {Previous = Wskaznik; Dane = informacja;}
  
  // Metody
  void SetPrevious(Element *Nowy);
  void SetDane(int Nowy);
  int Wyswietl() {return Dane;}
  
};

#endif