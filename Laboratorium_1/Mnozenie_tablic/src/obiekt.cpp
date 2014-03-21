#include "obiekt.h"
  
void Obiekt::Show() 
{ 
    if(Tablica != NULL)
    {
      for(int i = 1; i <= Tablica[0]; i++) 
	cout << i << ". " << Tablica[i] << endl; 
      cout << "\n###########\n";
    }
    else
      cerr << "\nError: Wskazana tablica jest pusta!\n";
}  

void Obiekt::Pobierz_dane(string nazwa_pliku)
{
    fstream plik;
    plik.open(nazwa_pliku.c_str(), ios::in | ios::out);
    
    if(plik.good())
    {
      int domyslna_ilosc, ilosc_wierszy = 0;
      if(!	plik.fail())
	 plik >> domyslna_ilosc;
      else
      {
	 cerr << "\nError: Bledna wartosc w pliku.\n";
	 exit(-1);
      }
      
      for(int i = 0 ; !plik.eof(); i++)
	 if(plik.get() == '\n')
	    ilosc_wierszy++;
	 
      if(domyslna_ilosc == ilosc_wierszy)
      {
	 int ilosc = domyslna_ilosc;
	 Tablica = new int[ilosc+1];
	 Tablica[0] = ilosc;
    
	 for(int i = 1; !plik.eof(); i++)
	 {
	    if(!plik.fail())
	       plik >> Tablica[i];
	    else
	    {
	       cerr << "\nError: Bledna wartosc w pliku.\n";
	       exit(-1);
	    }
	 }
      
	 plik.close();
      }
      else
      {
	 cerr << "\nError: Niepoprawny format pliku.\n";
	 exit(-1);
      }
    }
    else
    {
       cerr << "\nError: Bledna nazwa/sciezka pliku.\n";
       exit(-1);
    }
}

void Obiekt::Pomnoz(int mnoznik)
{
  for(int i = 1; i <= Tablica[0]; i++)
    Tablica[i] *= mnoznik;
}

void Obiekt::Czy_rowne(const Obiekt &Porownywany)
{ 
   bool wynik = true;
   
   if(Tablica[0] != Porownywany.Tablica[0])
      cout << "Rozne!\n";
   else
   {
      for(int i = 1; i < Tablica[0]; i++)
	 if(Tablica[i] != Porownywany.Tablica[i])
	    wynik = false;
	 
      if(wynik == true)
	 cout << "Rowne!\n";
      else
	 cout << "Rozne!\n";
   }
}