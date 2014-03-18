#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
using namespace std;

struct Element{
  int Dane;
  Element *Next;
  
  // Konstruktory
  Element() {Next = NULL;}
  Element(Element *Wskaznik) {Next = Wskaznik;}
  Element(Element *Wskaznik, int informacja) {Next = Wskaznik; Dane = informacja;}
  
  // Metody
  void SetNext(Element *Nowy);
  void SetDane(int Nowy);
  int Wyswietl() {return Dane;}
  
};

#endif