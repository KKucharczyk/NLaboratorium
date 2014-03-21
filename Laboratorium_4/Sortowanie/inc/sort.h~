#ifndef SORT_H
#define SORT_H

/*!
 * \file sort.h
 * \brief Definicja klasy Sort
 * 
 * Plik zawiera definicję klasy Sort.
 */

#include <iostream>
#include "obiekt.h"

using namespace std;

/*!
 * \class Sort
 * \brief Umożliwia sortowanie tablic
 * 
 * Klasa służy do sortowania tablic zawartych w obiektach klasy Obiekt. Posiada metody umozliwiające
 * zarówno sortowanie elementów tablic różnymi algorytmami o różnej wydajności, jak i zapisać aktualne
 * dane z obiektu i przedstawić zestawienie danych (przed sortowanie, po sortowaniu).
 */

class Sort{
public:
   /*! 
    * \brief Zapisuje dane z obiektu Obiekt
    * 
    * Pole służy przy wizualizacji zmian zachodzących w tablicach obiektów. Nie ma żadnego praktycznego
    * znaczenia w ujęciu sortowania elementów.
    */
   int *Zapisane_dane;
   
   /*!
    * \brief Przepisuje dane z obiektu Obiekt
    * 
    * Zadanie metody jest przepisanie elementów z obiektu Obiekt do wewnŧrznej tablicy, aby później
    * możliwe było przystępne przedstawienie owych danych i łatwiejsza lokalizacja błędów. Tablica
    * z której pobierane są dane pozostaje nie naruszona dzięki modyfikatorowi const.
    * 
    * \param Obiekt Obiekt z którego mają zostać przepisane dane
    */
   void Zapisz_dane(const Obiekt Obiekt);
   /*!
    * \brief Pokazuje zmiany w przystępnej formie
    * 
    * Metoda wyświetla dane w postaci dwóch kolumn: lewa odpowiada za dane nie posortowane, prawa
    * za posortowane. Wszystkie elementy są indeksowane. Służy tylko i wyłącznie w celu wizualizacji
    * i nie ma żadnego praktycznego znaczenia w ujęciu algorytmów sortowania. Tablica z której 
    * pobierane są dane pozostaje nie naruszona dzięki modyfikatorowi const.
    * 
    * \param Obiekt Obiekt z którego mają zostać przepisane dane
    */
   void Wizualizuj_zmiany(const Obiekt Obiekt);
   
   /*!
    * \brief Sortowanie elementów metodą Quicksort
    * 
    * Metoda służy do sortowanie elementów tablicy obiektu przesyłanej jako argument metody.
    * Algorytm sortowania szybkiego (ang. quicksort) polega na dzieleniu tablicy na podtablice zgodnie
    * z określonym kryterium (tzw. punkt osiowy), jedna tablica tworzona jest z mniejszych od elementu
    * osiowego elementu, druga z większych od elementu osiowego elemntów. Następnie rekurencyjnie 
    * powtarzane jest dzielenie tablic na podtablice aż do tablic jednoelemntowych.
    * 
    * \param Obiekt Obiekt, którego tablica ma zostać posortowana
    * \param pierwszy Indeks pierwszego elementu, od którego ma się rozpocząć sortowanie
    * \param ostatni Indeks ostatniego elementu, który ogranicza sortowanie
    */ 
   void QuickSort(Obiekt& Obiekt, int pierwszy, int ostatni);
   void MergeSort(Obiekt& Obiekt);
};

#endif