#include "stos.h"
#include <chrono>

int main(int argc, char* argv[])
{
   
   using namespace std::chrono;
   
   Stos A;
   A.Opcje(argc, argv);
   
   int *Dane = A.Pobierz_dane();
  
   auto start=high_resolution_clock::now();
   
   for(int i = 0; i < A.zakres; i++)
      A.push(Dane[i]);
   
   auto diff=duration_cast<nanoseconds>(high_resolution_clock::now()-start);
  	      
   fstream plik;
   plik.open("Wyniki_temp.txt", ios::out | ios::app);
   
   plik << diff.count() << endl;
   
   plik.close();
  
}