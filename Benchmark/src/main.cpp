#include "benchmark.h"

int main(int argc, char* argv[])
{
   Benchmark Test1;
   Test1.Opcje(argc, argv);
   Test1.Testuj_program();
   Test1.Oblicz_sredni_czas();
   Test1.Opracuj_dane();
}