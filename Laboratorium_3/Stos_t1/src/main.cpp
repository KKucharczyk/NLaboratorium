#include "stos.h"
#include "chrono.h"

using namespace Pomiar;

int main(int argc, char* argv[])
{
   // Tworzenie elementu stosu
   Stos A;

   int *Dane = A.Pobierz_dane();
   
   Chrono Time;
   for(int i = 0; i < A.zakres; i++)
      A.push(Dane[i]);
   Time.Eksportuj_dane(Time.elapsedNs().count());
}