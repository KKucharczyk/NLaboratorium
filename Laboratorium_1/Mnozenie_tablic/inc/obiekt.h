#ifndef OBIEKT_H
#define OBIEKT_H

/*!
 * \file obiekt.h
 * \brief Zawiera definicję klasy Obiekt
 * 
 * Plik zawiera definicję klasy Obiekt.
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*!
 * \class Obiekt
 * \brief Klasa umożliwia tworzenie przydatnej struktury
 * 
 * Klasa pozwala na tworzenie bardzo przydatnej, uniwersalnej struktury bardzo podatnej na wszelki
 * modyfikacje (np. sortowanie). Jej najważniejszym elementem jest wskaźnik umozliwiający stworzenie
 * dynamicznej tablicy. Dane w niej przechowywane mogą być w różnoraki sposób modyfikowane dzięki
 * zaimplementowanym metodom.
 */

class Obiekt{
public:
  /*!
   * \brief Umożliwia tworzenie uniwersalnych tablicy
   * 
   * Pole pozwala na tworzenie uniwersalnych tablic o zdefiniowanych przez użytkownika wielkościach.
   * Pole to jest podstawowym polem klasy.
   */
  int *Tablica;
  
  // Konstruktory
  // ---------------
   /*!
    * \brief Inicjuje obiekt pustym wskaźnikiem
    * 
    * Prosty konstruktor, jego zadanie ogranicza się do dezaktywowania wskaźnika, by w razie czego
    * na nic nie pokazywał i nie wprowadzał w ewentualny błąd.
    */
  Obiekt()              {Tablica = NULL;}
  /*!
   * \brief Inicjuje obiekt określonym wskaźnikiem
   * 
   * Kontruktor pozwala zainicjować obiekt już istniejącą tablicą danych, dzięki czemu nie trzeba jej
   * ponownie przepisywać.
   */
  Obiekt(int *Wskaznik) {Tablica = Wskaznik;}
  
  /*!
   * \brief Wyświetla zawartość obiektu
   * 
   * Metoda służy do wyświetlenia zawartości tablicy Obiektu. Jest ona stworzona do kontrolowania działnia
   * tablicy i nie ma żadnego znaczenia dla algorytmów.
   * 
   */
  void Show();
  /*!
   * \brief Pobiera dane z określonego pliku
   * 
   * Metoda umożliwia pobranie danych  pliku o określonej nazwie. Plik jest sprawdzany pod względem 
   * swojego formatu, tj. czy zachowany jest następujący układ:
   * \verbatim
   * indeks
   * 1.     	       | ilość elementów
   * 2.     	       | element_1
   * 3.    	       | element_2
   * .
   * .
   * .
   * ilość_elementów+1 | element ilość_elementów-1
   * \endverbatim
   * \param[in] nazwa_pliku Zawiera nazwę pliku, z którego pobierane są dane
   */
  void Pobierz_dane(string nazwa_pliku);
  /*!
   * \brief Mnoży elemnty tablicy Obiektu
   * 
   * Metoda służy do multiplikowania elementów tablicy przez określoną liczbę.
   * 
   * \param[in] mnoznik Wartość, o jaką mają zostać pomnożone elementy
   */
  void Pomnoz(int mnoznik);
  /*!
   * \brief Sprawdza, czy Obiekty są sobie równe
   * 
   * Metoda sprawdza, czy dwa obiekty są sobie równe. Milczy w przypaku optymistycznym, wyświetla 
   * stosowny komunikat w przypadku przeciwnym.
   * 
   * \param[in] Porownywany Nazwa porównywanego obiektu
   */
  void Czy_rowne(const Obiekt &Porownywany);
};

#endif