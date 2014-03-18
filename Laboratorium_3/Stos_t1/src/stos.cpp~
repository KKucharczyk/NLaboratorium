#include "stos.h"

void Stos::push(int Nowy)
{
   if(Tablica == NULL)
      Tablica = new int;
   
   int nowa_ilosc = ilosc_elementow+1;
   
   int *Wskaznik = new int[nowa_ilosc];
   for(int i = 0; i < ilosc_elementow; i++)
      Wskaznik[i] = Tablica[i];
   Wskaznik[nowa_ilosc-1] = Nowy;
   
   delete Tablica;
   Tablica = Wskaznik;
   
   ilosc_elementow++;
}

void Stos::pop()
{
   if(ilosc_elementow != 0)
   {
      int nowa_ilosc = ilosc_elementow-1;
      int *Wskaznik = new int[nowa_ilosc];

      for(int i = 0; i < nowa_ilosc; i++)
	 Wskaznik[i] = Tablica[i];

      delete Tablica;
      Tablica = Wskaznik;
      ilosc_elementow--;
   }
   else
      cerr << "\nError: Nie mozna wziac elementu, stos pusty.\n";
}

bool Stos::isEmpty()
{
  if(ilosc_elementow != 0)
    return true;
  return false;
}

void Stos::Show()
{
  for(int i = 0; i<ilosc_elementow; i++)
    cout << Tablica[i] << endl;
}

int Stos::size()
{
  return ilosc_elementow;
}

int* Stos::Pobierz_dane()
{
   int *Tablica_danych;

   fstream plik;

   plik.open("Zakres_temp.txt", ios::in);
      
   if(plik.good())
      plik >> zakres;
      
   plik.close();
   
   Tablica_danych = new int[zakres];
   plik.open("Dane_testowe.txt", ios::in);
   
   if(plik.good())
      for(int i = 0; i < zakres; i++)
	 plik >> Tablica_danych[i];
   else
      cerr << "\nError: Nie otwarto pliku Dane_testowe.txt\n";
   
   plik.close();
      
   return Tablica_danych;
}

void Stos::Eksportuj_dane(double czas)
{
   fstream plik;
   plik.open("Wyniki_temp.txt", ios::out | ios::app);
   plik << czas << endl;
   plik.close(); 
}