#include "obiekt.h"
#include "sort.h"
#include "chrono.h"

using namespace Pomiar;

int main()
{
   Obiekt A;
   string nazwa = "Dane_testowe.txt";
   A.Pobierz_dane(nazwa);

   Sort Obiekt_sortujacy;
   Obiekt_sortujacy.Zapisz_dane(A);
   Chrono Time;
   Obiekt_sortujacy.QuickSort(A, 1, A.Tablica[0]);
   Time.Eksportuj_dane(Time.elapsedNs().count());
   //Obiekt_sortujacy.Wizualizuj_zmiany(A);
  /*
   Sort Obiekt_sortujacy2;
   A.Pobierz_dane(nazwa);
   Obiekt_sortujacy2.Zapisz_dane(A);
   Chrono Time2;
   Obiekt_sortujacy2.HeapSort(A);
   Time2.Eksportuj_dane(Time2.elapsedNs().count());
   //Obiekt_sortujacy2.Wizualizuj_zmiany(A);
  
   Sort Obiekt_sortujacy3;
   A.Pobierz_dane(nazwa);
   Obiekt_sortujacy3.Zapisz_dane(A);
   Chrono Time3;
   Obiekt_sortujacy3.MergeSort(A, 1, A.Tablica[0]);
   Time3.Eksportuj_dane(Time3.elapsedNs().count());
   //Obiekt_sortujacy3.Wizualizuj_zmiany(A);
   */
}