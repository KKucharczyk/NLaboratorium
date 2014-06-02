#include <iostream>
#include "Pionek.h"
#include "Bialy_pionek.h"
#include "Plansza.h"

int main()
{
 	Plansza Glowna;

    Bialy_pionek Biale[12] = {Bialy_pionek(0,0,0),
    						  Bialy_pionek(2,0,0),
    						  Bialy_pionek(4,0,0),
    						  Bialy_pionek(6,0,0),
    						  Bialy_pionek(1,1,0),
    						  Bialy_pionek(3,1,0),
    						  Bialy_pionek(5,1,0),
    						  //Bialy_pionek(7,1,0),     <--- Tu jest segmentation fault nie wiem dlaczego, jest miejsce
    						  Bialy_pionek(0,2,0),
    						  Bialy_pionek(2,2,0),
    						  Bialy_pionek(4,2,0),
    						  Bialy_pionek(6,2,0)
    };
     
    Glowna.Wypisz_pionki(Biale);
 
    return 0;
}