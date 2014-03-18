#include "kolejka.h"

void Kolejka::enqueue(int Nowy)
{
   if(head == NULL || tail == NULL)
   {
      head = new Element();
      head->Dane = Nowy;
      tail = head;
   }
   else
   {
      Element *Wskaznik = new Element;
      tail->Next = Wskaznik;
      Wskaznik->Dane = Nowy;
      
      tail = Wskaznik;
   }
   ilosc_elementow+=1;
   
}

void Kolejka::dequeue()
{
   ilosc_elementow-=1;
   if(ilosc_elementow > 0)
      head = head->Next;
   else
      cerr << "\nError: Brak elementow w kolejce do usuniecia.\n";
}

bool Kolejka::isEmpty()
{
  if(ilosc_elementow == 0)
    return true;
  else
   return false;
}

void Kolejka::Show()
{
   cout << "\nHead: " << head->Wyswietl() << "   Tail: " << tail->Wyswietl() << endl; 
}

int Kolejka::size()
{
  return ilosc_elementow;
}
