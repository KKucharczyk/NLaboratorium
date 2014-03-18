#include "kolejka.h"

void Kolejka::enqueue(int Nowy)
{
   if(Tablica == NULL)
   {
      Tablica = new int;
      *Tablica = Nowy;
   }
   else
   {
      int *Wskaznik = new int[ilosc_elementow+1];
      
      for(int i = 0; i < ilosc_elementow; i++)
	 Wskaznik[i] = Tablica[i];
      
      Wskaznik[ilosc_elementow] = Nowy;
      delete Tablica;
      Tablica = Wskaznik;
   }
   ilosc_elementow+=1;
}

void Kolejka::dequeue()
{
   if(ilosc_elementow > 0)
   {
      int *Wskaznik = new int[ilosc_elementow-1];
      for(int i = 0; i < ilosc_elementow; i++)
	 Wskaznik[i] = Tablica[i+1];
      delete Tablica;
      Tablica = Wskaznik;;
   }
   else
      cerr << "\nError: Brak elementow w kolejce do usuniecia.\n";

   ilosc_elementow-=1;
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
   if(ilosc_elementow > 0)
      for(int i = 0; i < ilosc_elementow; i++)
	 cout << i+1 << ". " << Tablica[i] << endl;
   else
      cerr << "\nError: Kolejka pusta.\n";
}

int Kolejka::size()
{
  return ilosc_elementow;
}
   