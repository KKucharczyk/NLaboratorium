#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

#include "hash.h"
#include "BST.h"
#include "chrono.h"

using namespace std;
using namespace Pomiar;

int main()
{
   int zakres;
   fstream plik;

   plik.open("Zakres_temp.txt", ios::in | ios::out);
   plik >> zakres;
   plik.close();

   //===========================================================================================
   // DRZEWO PRZESZUKIWAŃ BINARNYCH
   //===========================================================================================
   /*
   int input = 0;
   BST myTree;
   myTree.LoadData(zakres);
   */
   //cout << "Printing the tree in order\nBefore adding numbers\n";

   //myTree.PrintInOrder();
   /*
   for(int i = 0; i < zakres; i++)
   {
      myTree.AddLeaf(myTree.TreeKeys[i]);
   }*/
   /*
   cout << "Printing the tree in order\nAfter adding numbers\n";

   myTree.PrintInOrder();
   cout << endl;
   */

   /*
   for(int i = 0; i < 16; i++)
   {
      myTree.PrintChildren(TreeKeys[i]);
      cout << endl;
   }
   */
   /*
   cout << "The smallest value is the tree is " << myTree.FindSmallest() << endl;
   */
   /*
   srand(time(NULL));
   int poszukiwana = rand()%zakres+1;
   myTree.Find(poszukiwana);
   
   srand(time(NULL));
   int poszukiwana = rand()%zakres+1;
   
   Chrono Czas_dodawania;
   myTree.RemoveNode(poszukiwana);
   
   Czas_dodawania.Eksportuj_dane(zakres, Czas_dodawania.elapsedNs().count());
   */
   /*
   myTree.PrintInOrder();
   cout << endl;
   myTree.PrintChildren(myTree.ReturnRootKey());
   */
   
   //===========================================================================================
   // TABLICA HASZUJĄCA
   //===========================================================================================
   
   
   hasz Hashy;

 
   Chrono Czas_dodawania;
   
   Hashy.LoadData(zakres);

   Czas_dodawania.Eksportuj_dane(zakres, Czas_dodawania.elapsedNs().count());
      
   return 0;
}