#ifndef GENERATOR_H
#define GENERATOR_H

/*!
 * \file generator.h
 * \brief Definicja klasy Generator
 * 
 * Zawiera definicję klasy Generator
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

/*!
 * \class Generator
 * \brief Klasa umożliwia generowanie plików z losowymi liczbami
 * 
 * Klasa pozwala na szybkie stworzenie pliku o dowolnej nazwie zawierającego
 * określoną ilość liczb wylosowanych z konkretnego zakresu. 
 */

class Generator{
public:
   /*!
    * \brief Wskaźnik na tablice z danymi
    * 
    * Pole służy do stworzenia dynamicznej tablicy, w której zostaną umieszczone wygenerowane dane.
    */
   int *Wskaznik;
   /*!
    * \brief Przechowuje żądaną ilość liczb
    * 
    * Pole przechowuje informacje o żądanej ilości liczb, jakie mają zostać wygenerowane.
    */
   int ilosc_liczb;
   /*!
    * \brief Przechowuje zakres, w jakim losowane są liczby
    * 
    * Pole przechowuje granicę, do której mogą zostać losowane wartości.
    */
   int zakres;
   /*!
    * \brief Zawiera nazwę pliku wyjściowego
    * 
    * Pole przechowuje nazwę pliku, do którego powinny zostać zapisane wyniki pracy programu.
    */
   string nazwa;
   
   /*!
    * \brief Umożliwia komunikację z programem z command line'a
    * 
    * Metoda umożliwia ustawianie opcji działania programu za pośrednictwem command line'a. Dostępne
    * opcje to:\n
    * -o [nazwa_pliku]     - określa nazwę pliku, do którego mają zostać wygenerowane dane \n
    * -z [liczba]          - określa górną granicę wartości losowanych liczba \n
    * -a [liczba]          - określa ilość liczb, jakie mają zaostać stworzone \n
    */
   void Opcje(int argc, char* argv[]);
   /*!
    * \brief Generuje dane na podstawie podanych opcji
    * 
    * Metoda tworzy dynamiczną tablicę, by następnie wypełnić ją określoną ilością danych z określonego
    * przedziału.
    */
   void Generuj_dane();
   /*!
    * \brief Zapisuje wyniki do pliku
    * 
    * Metoda zapisuje wygenerowane dane do pliku, którego nazwa określona została na podstawie metody Opcje.
    * Wrażliwość programów na ostatni endl została wyeliminowana dzięki odpowiednim warunkom.
    */
   void Zapisz_do_pliku();
   
};

#endif