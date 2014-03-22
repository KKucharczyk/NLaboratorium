#include "sort.h"

void Sort::QuickSort(Obiekt& Obiekt, int pierwszy, int ostatni)
{
   if(pierwszy == 0)
      cerr << "\nError:Element [0] to dlugosc tablicy - nie mozna go modyfikowac.\n";
   else
   {
      int i = pierwszy;
      int j = ostatni;
      int element_osiowy = Obiekt.Tablica[(i+j)/2];
   
      do
      {
	 while(Obiekt.Tablica[i] < element_osiowy) i++;
	 while(Obiekt.Tablica[j] > element_osiowy) j--;
      
	 if(i <= j)
	 {
	    Obiekt.Zamien_elementy(i,j);
	    i++; j--;
	 }
      } while(i <= j);
   
      if(j > pierwszy) QuickSort(Obiekt, pierwszy, j);
      if(i < ostatni)  QuickSort(Obiekt, i, ostatni);
   }
}

void Sort::Zapisz_dane(const Obiekt Obiekt)
{
   Zapisane_dane = new int[Obiekt.Tablica[0]+1];
   
   for(int i = 0; i < Obiekt.Tablica[0]+1; i++)
      Zapisane_dane[i] = Obiekt.Tablica[i];
}

void Sort::Wizualizuj_zmiany(const Obiekt Obiekt)
{
   cout << "\nTablica przed i po:\n\n";
   for(int i = 1; i < Obiekt.Tablica[0]+1; i++)
      cout << i << ". " << Zapisane_dane[i] << "    " << Obiekt.Tablica[i] << endl; 
}
/*
void Sort::MergeSort(Obiekt& Obiekt)
{
   
   if(Obiekt.Tablica[0] > 1)
   {
      Obiekt *Tab_l = new Obiekt[(Obiekt.Tablica[0])/2];
      Obiekt *Tab_p = new Obiekt[(Obiekt.Tablica[0])/2];
      
      int middle = Obiekt.Tablica[0]/2;
      int i = 1;
      
      while(i <= Obiekt.Tablica[0]) 
      {
	 if(Obiekt.Tablica[i] < middle)
	    
      }
      
   }
   else
      cerr << "\nError: Nie mozna sortowac jednoelementowej tablicy.\n";
    
}
*/
/*
 * 
 * 
   MERGE 
   HEAP
   INTROSPEKTYW
   + sprawozdanie (najlepsze, najgorsze przypadki, jaka złożoność, poruszyć to w sprawku, ustosunkować się)
*/