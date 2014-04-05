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
  /*!
   * \brief Określa wielkość problemu
   * 
   * Zmienna określa ile danych ma zostać poddanych działaniu algorytmu. Jest kompatybilna z programem 
   * ./benchmark.
   */
  int zakres;
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
  
  // Przeciążenia operatorów
  // --------------------------
  /*!
   * \brief Pozwala dodawać dwa obiekty
   * 
   * Przeciążenie to pozwala dodawać tablicę jednego obiektu do końca tablicy drugiego obiektu. Dzięki
   * modyfikatorowi const obiekt dodawany ma zapewnioną nietykalność.
   */
  Obiekt   operator +  (const Obiekt &Nowy);
  /*!
   * \brief Pozwala przypisywać jeden obiekt do drugiego
   * 
   * Przeciążenie umożliwia w prosty sposób przypisanie wartości jednego obiektu do drugiego. Obiekt, który
   * jest przepisywany jest nietykalny dzięki modyfikatorowi const.
   */
  Obiekt & operator =  (const Obiekt &Nowy);
  /*! 
   * \brief Pozwala intuicyjnie porównywać obiekty
   * 
   * Przeciążenie umożliwia intuicyjne porównywanie dwóch elementów. Zwracana jest jedna z dwóch wartości: \n
   * - 1 - gdy oba obiekty są identyczne, \n
   * - 0 - gdy oba obiekty są różne.
   */
  bool operator == (const Obiekt &Nowy);
  
  // Metody
  // ----------------
  /*!
   * \brief Umożlwia zwizualizowanie elementów obiektu
   * 
   * Metoda pozwala wypisać całą zawartość obiektu (z wyjątkiem elementu zerowego, tj. długośvi tablicy).
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
  /*!
   * \brief Zamienia elementy o podanych indeksach
   * 
   * Metoda zamienia miejscami elementy tablicy o podanych indeksach. Jedynym ograniczeniem jest 
   * indeks zerowy, który zawiera informację o długości tablicy. Jego zmiana jest niemożliwa, 
   * o tym także poinformuje program w razie ewentualnego błędu.
   * 
   * \param[in] i Indeks pierwszego elementu
   * \param[in] j Indeks drugiego elementu
   */
  void Zamien_elementy(int i, int j);
  /*!
   * \brief Odwraca kolejność tablicy
   * 
   * Metoda powoduje inwersję elementów tablicy. Oczywiście element zerowy zostaje na miejscu.
   */
  void Odwroc_kolejnosc();
  /*!
   * \brief Dodaje jeden element do tablicy
   * 
   * Metoda dodaje jeden element na koniec tablicy poprzez stworzenie nowej, o jeden większej tablicy, do
   * której przepisywane są dane ze starej i dodawany nowy element na samym końcu. Stara tablica zostaje 
   * usunięta. Oczywiście element zerowy zostaje adekwatnie uaktualniony.
   * 
   * \param[in] element Nowy element, który zostanie dodany na koniec tablicy
   */
  void Dodaj_element(int element);
  /*!
   * \brief Dodaje wiele elementów do tablicy
   * 
   * Metoda umożliwia dodanie dużej ilości elementów na koniec istniejącej w obiekcie tablicy.
   * Działa na zasadzie stworzenia nowej, większej tablicy i umieszczeniu w niej elementów obu tablic.
   * Stara tablica zostaje zwolniona, a indeks zerowy uaktualniony.
   * 
   * \param Nowy Obiekt Obiekt, którego tablica zostaje wpisana na koniec istniejącej tablicy w Obiekcie.
   */
  void Dodaj_elementy(Obiekt &Nowy);
};

#endif