#ifndef CZAS_H
#define CZAS_H

#include <time.h>
#include <fstream>
#include <iostream>

using namespace std;

class Stoper
{
   public:
   timespec tS;
   
   // Konstruktor
   Stoper() {tS.tv_sec = 0; tS.tv_nsec = 0;};
   
   // Metody
   inline void Start()  {clock_settime(CLOCK_PROCESS_CPUTIME_ID, &tS);};
   inline void Stop()   {clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tS);};
   
   long int Pokaz_czas_s()  {return tS.tv_sec;};
   long int Pokaz_czas_ns() {return tS.tv_nsec;};
   
   void Eksport_wyniki() 
   {
      fstream plik;
      plik.open("Wyniki_temp.txt", ios::out | ios::app);
   
      if(plik.good())
	 plik << tS.tv_nsec << endl;
      plik.close(); 
   };
   
   
};



#endif