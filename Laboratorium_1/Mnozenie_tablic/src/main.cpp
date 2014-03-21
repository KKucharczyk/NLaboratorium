#include "obiekt.h"
#include "chrono.h"

int main()
{
   using namespace Pomiar;
   
   string nazwa = "Dane1.txt";
   string nazwa2 = "Dane_testowe/Dane2.txt";

   Obiekt A, B;
   A.Pobierz_dane(nazwa);
   
   Chrono Time;
   A.Pomnoz(999);
   Time.Eksportuj_dane(Time.elapsedNs().count());
}