#include "obiekt.h"
#include "czas.h"

int main()
{
   Stoper Czas;
   string nazwa = "Dane_testowe/Dane1.txt";
   string nazwa2 = "Dane_testowe/Dane2.txt";

   Obiekt A, B;
  
   A.Pobierz_dane(nazwa);
   B.Pobierz_dane(nazwa2);
  
   Czas.Start();
   A.Pomnoz(3);
   Czas.Stop();
   
   Czas.Eksport_wyniki();
   
}
