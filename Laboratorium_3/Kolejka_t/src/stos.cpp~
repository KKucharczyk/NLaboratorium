#include "stos.h"

void Stos::push(int Nowy)
{
   if(tail == NULL)
   {
      tail = new Element();
      tail->Dane = Nowy;
   }
   else
   {
      Element *Wskaznik = new Element;
      Wskaznik->Previous = tail;
      Wskaznik->Dane = Nowy;
      
      tail = Wskaznik;
   }
   ilosc_elementow+=1;
  
}

void Stos::pop()
{
   ilosc_elementow--;
   if(ilosc_elementow > 0)
      tail = tail->Previous;
   else
      cerr << "\nError: Brak elementow na stosie do usuniecia.\n";
}

bool Stos::isEmpty()
{
  if(ilosc_elementow == 0)
    return true;
  else
   return false;
}

int Stos::Show()
{
  return tail->Wyswietl();
}

int Stos::size()
{
  return ilosc_elementow;
}
