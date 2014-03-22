#include "obiekt.h"
#include "sort.h"
#include "chrono.h"

int main()
{
   Obiekt A;
   string nazwa = "Dane_testowe.txt";
   A.Pobierz_dane(nazwa);

   Sort Obiekt_sortujacy;
   Obiekt_sortujacy.Zapisz_dane(A);
   Obiekt_sortujacy.QuickSort(A, 1, A.Tablica[0]);
   Obiekt_sortujacy.Wizualizuj_zmiany(A);
   
}