#include "generator.h"

void Generator::Opcje(int argc, char* argv[])
{
   for(int i = 1; i < argc; i++)
      {
	 if(argv[i][0] != '-')
	    cerr << "Error: Blad w linii polecen. [-opcja parametr]\n";
	 else
	 {
	    switch(argv[i][1])
	    {
	       case 'o':
	       {
		  if(++i < argc)
		     nazwa = argv[i];
		  break;
	       }
	 
	       case 'z':
	       {
		  if(++i < argc)
		     zakres = atoi(argv[i]);
		  break;
	       }
	 
	       case 'a':
	       {
		  if(++i < argc)
		     ilosc_liczb = atoi(argv[i]);
		  break;
	       }
	    }
	 }
      }
}

void Generator::Generuj_dane()
{
   srand(time(NULL));
   
   Wskaznik = new int[ilosc_liczb];
   for(int i = 0; i < ilosc_liczb; i++)
   {
      Wskaznik[i] = rand()%zakres+1;
      cout << Wskaznik[i] << endl;
      
   }
}

void Generator::Zapisz_do_pliku()
{
   fstream plik;
   plik.open(nazwa.c_str(), ios::out);
   
   plik << ilosc_liczb << endl;
   for(int i = 0; i < ilosc_liczb; i++)
   {
      if(i == ilosc_liczb-1)
	 plik << Wskaznik[i];
      else
	 plik << Wskaznik[i] << endl;
   }
   plik.close();
}
