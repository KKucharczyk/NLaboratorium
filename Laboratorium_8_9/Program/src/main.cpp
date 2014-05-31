#include "graf.h"

using namespace std;

int main()
{
	string nazwa = "dane.txt";
	Graf G;
	G.LoadData(nazwa);
	//G.ShowVertexes();
	//G.ShowEdges();

	G.BFS(1);
	cout << "\n\n";
	G.DFS(1);

	return 0;
}