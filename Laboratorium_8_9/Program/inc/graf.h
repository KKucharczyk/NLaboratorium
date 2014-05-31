#ifndef GRAF_H
#define GRAF_H

#include <iostream>
#include <string.h>
#include <fstream>
#include <queue>
#include <stack>

using namespace std;

/*!
 * \file 
 * \brief Zawiera definicje klasy Graf
 */

/*!
 * \class Graf
 * \brief Modeluje pojecie grafu
 */

 class Graf
 {
 private:
 	/*!
 	 * \brief Ilość wierzchołków
 	 *
 	 * Pole przechowuje ilość wierzchołków grafu
 	 */
 	int V;
 	/*!
 	 * \brief Ilość krawędzi
 	 *
 	 * Pole przechowuje ilość krawędzi grafu
 	 */
 	int E;
 	/*!
 	 * \brief Macierz sąsiedztwa
 	 *
 	 * Pole przechowuje informacje o wszelkich połączeniach w grafie
 	 */
 	int **Sasiedztwo;
 	/*!
 	 * \brief Pole określające maksymalny rozmiar macierzy sąsiedztwa
 	 */
 	const static int MaxPojemnosc = 100;

 public:
 	/*!
 	 * \brief Konstruktor podstawowy
 	 *
 	 * Konstruktor inicjuje graf pusty
 	 */
 	 Graf();
 	/*!
 	 * \brief Konstruktor dodatkowy
 	 *
 	 * Konstruktor inicjuje graf poprzez stworzenie macierzy sąsiedztwa o wielkości równej ilości wierzhołków
 	 * \param[in] _V Ilość wierzchołków
 	 */
 	Graf(int _V);
 	/*!
 	 * \brief Destruktor
 	 *
 	 * Destruktor zwalnia pamięć zajętą przez macierz sąsiedztwa
 	 */
 	~Graf();
 	/*!
 	 * \brief Metoda dodaje krawędź
 	 *
 	 * Metoda pozwala dodać krawędź do grafu
 	 */
 	bool InsertEdge(int v1, int v2, int w);
 	/*!
 	 * \brief Metoda usuwająca krawędź
 	 *
 	 * Metoda pozwala usunąć krawędź
 	 * \param[in] v1 Pierwszy wierzchołek
 	 * \param[in] v2 Drugi wierzchołek
 	 * \param[in] w Wartość wierzchołka
 	 */
 	bool DeleteEdge(int v1, int v2);
 	/*!
 	 * \brief Metoda zliczająca połączenia wierzchołka
 	 *
 	 * Metoda pozwala zliczyć połączenia wierzchołka
 	 * \param[in] v1 Pierwszy wierzchołek
 	 * \param[in] v2 Drugi wierzchołek
 	 */
 	int Degree(int v);
 	/*!
 	 * \brief Metoda szukająca
 	 *
 	 * Metoda pozwala sprawdzić, czy dane połączenie istnieje
 	 */ 	
 	bool SearchEdge(int v, int u);
 	/*!
 	 * \brief Metoda ukazująca zależności krawędzi
	 *
	 * Metoda pozwala prześledzić działanie grafu i obserwować zależności zachodzące pomiędzy węzłami
	 * \param[in] v Pierwszy wezel
	 * \param[in] u Drugi wezel
	 */
 	void ShowEdges();
 	/*!
 	 * \brief Metoda ukazuje połączenia węzłów
 	 * 
 	 * Metoda pozwala zwizualizować w jaki sposób połączone są konkretne wierzchołki
 	 */
 	void ShowVertexes();
 	/*!
 	 * \brief Metoda ładuje dane z pliku
 	 *
 	 * Metoda załadowuje dane z pliku w postaci gotowego grafu.
 	 * \param[in] Nazwa_pliku Nazwa pliku z danymi
 	 */
 	void LoadData(string Nazwa_pliku);
 	/*!
 	 * \brief Metoda przeszukiwania wszerz
 	 *
 	 * Metoda umożliwia przeszukiwanie grafu w wszerz
 	 * \param[in] x Początkowy węzeł
 	 */
 	void BFS(int x);
	/*!
 	 * \brief Metoda przeszukiwania wgłąb
 	 *
 	 * Metoda umożliwia przeszukiwanie grafu w wgłąb
 	 * \param[in] x Początkowy węzeł
 	 */
 	
 	void DFS(int x);
 };



#endif