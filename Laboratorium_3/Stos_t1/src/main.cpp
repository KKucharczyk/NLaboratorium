#include "stos.h"
#include "chrono.h"

int main(int argc, char* argv[])
{
   // Tworzenie elementu stosu
   Stos A;

   int *Dane = A.Pobierz_dane();
   
   for(int i = 0; i < A.zakres; i++)
      A.push(Dane[i]);
}