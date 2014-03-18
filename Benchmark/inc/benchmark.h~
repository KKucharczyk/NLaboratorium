#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>

using namespace std;

class Benchmark{
public:
   string nazwa_programu;
   int wielkosc_problemu;
   int ilosc_petli;
   double sredni_czas_trwania;
   
   // Konstruktor
   Benchmark() {wielkosc_problemu = 0; ilosc_petli = 0;};
   
   // Metody
   string Pobierz_nazwe() {return nazwa_programu;};
   int Pobierz_petle()    {return ilosc_petli;};
   int Pobierz_wielkosc() {return wielkosc_problemu;};
   
   string Int_na_string(int liczba);
   
   int Opcje(int argc, char **argv);
   void Testuj_program();
   void Oblicz_sredni_czas();
   void Opracuj_dane();
   
};


#endif