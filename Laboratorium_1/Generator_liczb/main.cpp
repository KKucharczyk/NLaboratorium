#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
   int ilosc_liczb = 100;
   int zakres = 100;
   
   fstream plik;
   plik.open("Dane_testowe.txt", ios::out);
   
   plik << ilosc_liczb << endl;
   for(int i = 0; i < 100; i++)
      plik << rand()%zakres + 1 << endl;
   
   plik.close();
}