#include "graf.h"

Graf::Graf()
{
	V = 0;
	E = 0;

	Sasiedztwo = new int*[MaxPojemnosc];
	for(int i = 0; i < MaxPojemnosc; i++)
	{
		Sasiedztwo[i] = new int [MaxPojemnosc];
		for(int j = 0; j < MaxPojemnosc; j++)
			Sasiedztwo[i][j] = 0;
	}
}

Graf::Graf(int _V)
{
	cout << "Lubie cipki";
	V = _V;
	Sasiedztwo = new int*[_V];
	for(int i = 0; i < _V; i++)
	{
		Sasiedztwo[i] = new int [V];
		for(int j = 0; j < V; j++)
			Sasiedztwo[i][j] = 0;
	}
}

Graf::~Graf()
{
	if(Sasiedztwo != NULL)
		for(int i = 0; i < V; i++)
			delete Sasiedztwo[i];
	delete Sasiedztwo;
}

bool Graf::InsertEdge(int v1, int v2, int w)
{
	Sasiedztwo[v1][v2] = Sasiedztwo[v2][v1] = w;
	return true;
}

bool Graf::DeleteEdge(int v1, int v2)
{
	if(Sasiedztwo[v1][v2] == 0 || Sasiedztwo[v2][v1] == 0)
		return false;
	Sasiedztwo[v1][v2] = 0;
	return true;
}

int Graf::Degree(int v)
{
	int Wynik = 0;
	for(int i = 0; i < V; i++)
		if(Sasiedztwo[v][i] != 0)
			Wynik++;
	return Wynik;
}

bool Graf::SearchEdge(int v1, int v2)
{
	if(Sasiedztwo[v1][v2] != 0 && Sasiedztwo[v2][v1] != 0)
		return true;
	return false;
}

void Graf::ShowEdges()
{
	for(int i = 0; i < MaxPojemnosc; i++)
		for(int j = 0; j < MaxPojemnosc; j++)
			if(Sasiedztwo[i][j] != 0)
			{
				cout << "Wierzcholek [" << i << "]: ";
				cout << Sasiedztwo[i][j] << endl;
			} 
}

void Graf::ShowVertexes()
{
	for(int i = 0; i < MaxPojemnosc; i++)
		for(int j = 0; j < MaxPojemnosc; j++)
			if(Sasiedztwo[i][j] != 0)
			{	
				cout << "Wierzcholek [" << i << "] ---> ";
				cout << "Wierzcholek [" << j << "]";
				cout << endl;
			}
}

void Graf::LoadData(string Nazwa_pliku)
{
	fstream plik;
	int v1, v2, c;
	plik.open(Nazwa_pliku.c_str(), ios::in | ios::out);
	if(plik.good())
	{

		plik >> V;
		plik >> E;

		while(!plik.eof())
		{
			plik >> v1;
			plik >> v2;
			plik >> c;

			InsertEdge(v1, v2, c);
			v1 = v2 = c = 0;
		} 
	}

	else
	{
		cout << "Blad otwarcia pliku!\n";
	}
	
	plik.close();
}