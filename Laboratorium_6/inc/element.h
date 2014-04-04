#ifndef ELEMENT_H
#define ELEMENT_H

class Element
{
public:
   int wartosc;
   int klucz;
   
   Element() {klucz = 0; wartosc = 0;}
   Element(int k, int w) {klucz = k; wartosc = w;}
};


#endif