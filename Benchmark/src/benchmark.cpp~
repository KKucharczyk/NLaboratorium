#include "benchmark.h"

string Benchmark::Int_na_string(int liczba)
{
   ostringstream ss;
   ss << liczba;
   string napis = ss.str();
   string przerwa = " ";
   nazwa_programu = nazwa_programu + przerwa + napis;
   cout << nazwa_programu << endl;
   
   return napis;
}

void Benchmark::Testuj_program()
{
   
   fstream plik;
   plik.open("Zakres_temp.txt", ios::out | ios::app);
   plik << wielkosc_problemu;
   plik.close();
   
   for(int i = 0; i < ilosc_petli; i++)
      system(nazwa_programu.c_str());
   
   unlink("Zakres_temp.txt");
}

void Benchmark::Opracuj_dane()
{
   fstream plik;
   
   plik.open("Wyniki.csv", ios::out | ios::app);
   plik << wielkosc_problemu << "," << ilosc_petli \
	<< "," << sredni_czas_trwania << endl;  
}

int Benchmark::Opcje(int argc, char **argv)
{
   for(int i = 1; i < argc; i++)
   {
      if(argv[i][0] != '-')
      {
	 cerr << "Error: Blad w linii polecen. [-opcja parametr]\n";
	 return -1;
      }
      
      switch(argv[i][1])
      {
	 case 'i':
	 {
	    if(++i < argc)
	       nazwa_programu = argv[i];
	    break;
	 }
	 
	 case 'l':
	 {
	    if(++i < argc)
	       ilosc_petli = atoi(argv[i]);
	    break;
	 }
	 
	 case 'p':
	 {
	    if(++i < argc)
	       wielkosc_problemu = atoi(argv[i]);
	    break;
	 }
      }
      
   }
   return 1;
}

void Benchmark::Oblicz_sredni_czas()
{
   int licznik = 1;
   double *Wskaznik;
   double suma = 0, srednia_wartosc;
   fstream plik;
   
   plik.open("Wyniki_temp.txt", ios::in | ios::out);
   
   if(plik.good())
   {
      for(int i = 0; !plik.eof(); i++)
	 if(plik.get() == '\n')
	    licznik++;
      if(licznik == 1)
      {
	 plik >> srednia_wartosc;
	 sredni_czas_trwania = srednia_wartosc;
      }
      else if(licznik > 1)
      {
	 plik.clear();
	 plik.seekg(0, ios::beg);
     
	 Wskaznik = new double[licznik];
   
	 for(int i = 0; i <= licznik; i++)
	    plik >> Wskaznik[i];
   
	 for(int i = 0; i < licznik; i++)
	    suma = suma + Wskaznik[i];
   
	 srednia_wartosc = suma/(licznik);
	 sredni_czas_trwania = srednia_wartosc;

	 delete Wskaznik;
	 plik.close();
      }
      else
	 cerr << "\nError: Brak danych z testowanego programu.\n";
      
  
      unlink("Wyniki_temp.txt");
   }
   else
      cerr << "\nError: Brak pliku z danymi z testowanego programu.\n";
}