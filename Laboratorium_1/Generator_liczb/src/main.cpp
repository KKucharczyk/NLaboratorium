#include "generator.h"

int main(int argc, char* argv[])
{
   Generator Alpha;
   
   Alpha.Opcje(argc, argv);
   Alpha.Generuj_dane();
   Alpha.Zapisz_do_pliku();
}