#include "sort.h"
#include "obiekt.h"

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
   for(int i = 1; i < Obiekt.zakres+1; i++)
      cout << i << ". " << Zapisane_dane[i] << "    " << Obiekt.Tablica[i] << endl; 
}

void Sort::StrukturaKopca(Obiekt &Obiekt, int id, int hs)
{
   int left=(2*id);
   int right=(2*id)+1;
   int large;
   
   if((left<=hs)&&(Obiekt.Tablica[left]>Obiekt.Tablica[id]))
      large=left;
   
   else
      large=id;
   
   if((right<=hs)&&(Obiekt.Tablica[right]>Obiekt.Tablica[large]))
      large=right;
   
   if(id!=large)
   {
      Obiekt.Zamien_elementy(id, large);
      Sort::StrukturaKopca(Obiekt, large, hs);
   }
}

void Sort::BudujKopiec(Obiekt &Obiekt, int hs)
{
   for(int i=Obiekt.Tablica[0]/2; i > 0; i--)
      Sort::StrukturaKopca(Obiekt, i, hs);
}

void Sort::HeapSort(Obiekt &Obiekt)
{
   int hs = Obiekt.Tablica[0];
   Sort::BudujKopiec(Obiekt, hs);
   for(int i=hs;i>1;i--)
   {
      Obiekt.Zamien_elementy(1,i);
      hs--;
      Sort::StrukturaKopca(Obiekt, 1, hs);
   }
}

void Sort::Merge(Obiekt &Obiekt, int poczatek, int koniec, int srodek)
{
    int i, j, k;
    int *Tab = new int[Obiekt.Tablica[0]+1];
    i = poczatek;
    k = poczatek;
    j = srodek + 1;
    
    while (i <= srodek && j <= koniec)
    {
        if (Obiekt.Tablica[i] < Obiekt.Tablica[j])
        {
            Tab[k] = Obiekt.Tablica[i];
            k++;
            i++;
        }
        else
        {
            Tab[k] = Obiekt.Tablica[j];
            k++;
            j++;
        }
    }
    while (i <= srodek)
    {
        Tab[k] = Obiekt.Tablica[i];
        k++;
        i++;
    }
    while (j <= koniec)
    {
        Tab[k] = Obiekt.Tablica[j];
        k++;
        j++;
    }
    for (i = poczatek; i < k; i++)
    {
        Obiekt.Tablica[i] = Tab[i];
    }
}

void Sort::MergeSort(Obiekt& Obiekt, int poczatek, int koniec)
{
    int srodek;
    if (poczatek < koniec)
    {
        srodek=(poczatek+koniec)/2;
        Sort::MergeSort(Obiekt,poczatek,srodek);
        Sort::MergeSort(Obiekt,srodek+1,koniec);
        Sort::Merge(Obiekt,poczatek,koniec,srodek);
    }
    return;
}

/*
   + sprawozdanie (najlepsze, najgorsze przypadki, jaka złożoność, poruszyć to w sprawku, ustosunkować się)
*/