#include "stos.h"
#include "chrono.h"

using namespace Pomiar;

int main(int argc, char* argv[])
{ 
   Stos A;
   A.Opcje(argc, argv);
   
   Chrono Time;
   int *Dane = A.Pobierz_dane();
   Time.Eksportuj_dane(Time.elapsedNs().count());
   
   for(int i = 0; i < A.zakres; i++)
      A.push(Dane[i]); 
}