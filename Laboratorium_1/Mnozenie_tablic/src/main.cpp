#include "obiekt.h"

int main()
{
   string nazwa = "Dane_testowe/Dane1.txt";
   string nazwa2 = "Dane_testowe/Dane2.txt";

   Obiekt A, B;
  
   A.Pobierz_dane(nazwa);
   B.Pobierz_dane(nazwa2);
  
   A.Pomnoz(3);
}
