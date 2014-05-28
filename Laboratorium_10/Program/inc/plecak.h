#ifndef PLECAK_H_
#define PLECAK_H_
/*!
 * \file
 * \brief Plik z definicją klasy Plecak
 *
 * Plik zawiera definicję klasy Plecak
 */
#include <vector>

using namespace std;
/*!
 * \class Plecak
 * 
 * \brief Modeluje pojęcie plecaka
 *
 * Klasa ta pozwala umieszczać rzeczy w plecaku oraz optymalizuje elementy
 */
class Plecak 
{
public:
/*!
 * \brief Wektor wagi i wartosci przedmiotow
 *
 * Pole opisuje rozwazane przedmioty
 */
	vector<pair<int,int> > Tablica;
/*!
 * \brief Opisuje maksymalna pojemnosc
 *
 * Pole opisuje maksymalna pojemnosc plecaka
 */
	vector<int> Pojemnosc;
/*!
 *  \brief Zmienna wektor, przechowuje ostatni dodany element.
 */
	vector<int> Ostatni;
/*!
 *  \brief Konstruktor podstawowy
 *
 * Podstawowy konstruktor klasy plecak
 */	
	Plecak();
/*!
 *  \brief Metoda wylicza najoptymalniejsza kombinacje przedmiotow
 *
 * Metoda pozwala wyznaczyc najoptymalniejsza kombinacje przedmiotow w plecaku
 * \param[in] wektor Opisuje wszystkie dostepne przedmioty
 * \param[in] maksymalna_pojemnosc Okresla maksymalna pojemnosc plecaka
 */
	void Algorytm(vector<pair<int,int> > Dane,int Granica);
/*!
 *  \brief Zwraca wartosc przedmiotu
 *
 * Metoda zwraca wartosc przedmiotu
 * \return Wartosc przedmiotu
 */
	int Pokaz(int licznik);
/*!
 *  \brief Metoda ukazuje wybrane przedmioty
 *
 * Metoda zwraca wybrane przedmioty
 * \return wektor Zawiera optymalna kombinacje przedmiotow
 */
	vector<pair<int,int> > Wynik(int licznik);
};

#endif