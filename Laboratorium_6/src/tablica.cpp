#include "tablica.h"

/*
void Tablica::Dodaj(int k, int w)
{
   if(ilosc_elementow == 0)
   {
      this->Tablica_indeksow = new *Element(0,w);
   }
   
   else
   {
      Element* Temp = new Element[ilosc_elementow+1];
      for(int i = 0; i < ilosc_elementow+1; i++)
	 Temp[i] = this->Tablica_indeksow[i];
      //Temp[ilosc_elementow+1] = new Element(ilosc_elementow+1, w);
      
      delete [] this->Tablica_indeksow;
      Tablica_indeksow = Temp;
      
   }
   this->ilosc_elementow++;
}*/

bool Tablica::CzyPuste()
{
   if(ilosc_elementow == 0)
      return 1;
   else 
      return 0;
}

int Tablica::IleElementow()
{
   return this->ilosc_elementow;
}