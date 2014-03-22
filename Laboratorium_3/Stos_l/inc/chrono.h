#ifndef CHRONO_H
#define CHRONO_H

/*!
 * \file chrono.h
 * \brief Zawiera definicję klasy Chrono
 * 
 * Plik zawiera definicję klasy Chrono.
 */

#include <chrono>
#include <fstream>

using namespace std::chrono;

namespace Pomiar
{
   typedef std::chrono::high_resolution_clock clock;
   typedef std::chrono::microseconds microseconds;
   typedef std::chrono::milliseconds milliseconds;
   typedef std::chrono::nanoseconds nanoseconds;
 
   clock::time_point now(){return clock::now();}
 
   microseconds intervalUs(const clock::time_point& t1, const clock::time_point& t0)
   {
      return std::chrono::duration_cast<microseconds>(t1 - t0);
   }
 
   milliseconds intervalMs(const clock::time_point& t1,const clock::time_point& t0)
   {
      return std::chrono::duration_cast<milliseconds>(t1 - t0);
   }
 
   nanoseconds intervalNs(const clock::time_point& t1,const clock::time_point& t0)
   {
      return std::chrono::duration_cast<nanoseconds>(t1 - t0);
   }
 
   /*!
    * \class Chrono
    * \brief Stworzona do pomiarów czasu
    * 
    * Klasa służy do mierzenia czasu wykonywania metod. Możliwe jest uzyskanie czasu działania w:\n 
    * - milisekundach, \n
    * - mikrosekundach, \n
    * - nanosekundach. \n
    * Dodatkowo klasa umożliwia zapisywanie wyników pracy do plików o nazwie "Wyniki_temp.txt", które
    * analizowane są przez program do bechmarku.
    */
   class Chrono
   {
      /*!
       * \brief Wskaźnik na moment rozpoczęcia pomiaru
       * 
       * Pole służy za kontener przechowujący w pamięci moment rozpoczęcia pomiaru.
       */
      clock::time_point start_;
   public:
      /*!
       * \brief Konstruktor rozpoczynający pomiar czasu
       * 
       * Konstruktor pozwala w prosty sposób rozpocząć pomiar czasu, tj. poprzez zdefiniowanie
       * obiektu klasy Chrono.
       */
      Chrono() : start_(clock::now()){}
      /*!
       * \brief Resetuje zegar
       * 
       * Metoda resetuje i załącza ponownie pomiar.
       */
      clock::time_point restart() { start_ = clock::now(); return start_;}
      /*!
       * \brief Zwraca czas działania w mikrosekundach
       * 
       * Metoda zwraca czas działania konkretnego fragmentu kodu w mikrosekundach.
       * \return Zwraca czas w mikrosekundach
       */
      microseconds elapsedUs()    { return intervalUs(now(), start_);}
      /*!
       * \brief Zwraca czas działania w milisekundach
       * 
       * Metoda zwraca czas działania konkretnego fragmentu kodu w milisekundach.
       * \return Zwraca czas w milisekundach
       */
      milliseconds elapsedMs()    { return intervalMs(now(), start_);}
      /*!
       * \brief Zwraca czas działania w nanosekundach
       * 
       * Metoda zwraca czas działania konkretnego fragmentu kodu w nanosekundach.
       * \return Zwraca czas w nanosekundach
       */
      nanoseconds elapsedNs()    { return intervalNs(now(), start_);}
      /*!
       * \brief Eksportuje dane do pliku
       * 
       * Metoda umożliwia zapisanie upływu czasu fragmentu kodu do pliku o nazwie "Wyniki_temp.txt". 
       * Pomiary są dopisywane, dzięki czemu dane nie są tracone.
       * 
       * \param[in] czas Czas, który ma zostać zapisany
       */
      void Eksportuj_dane(double czas)
      {
	 fstream plik;
	 plik.open("Wyniki_temp.txt", ios::out | ios::app);
	 plik << czas << endl;
	 plik.close(); 
      }
   };
 
} 

#endif