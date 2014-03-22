#include "stos.h"
#include "chrono.h"

int main(int argc, char* argv[])
{ 
   Stos A;
   A.Opcje(argc, argv);
   
   int *Dane = A.Pobierz_dane();
  
   for(int i = 0; i < A.zakres; i++)
      A.push(Dane[i]); 
}