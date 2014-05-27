#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#ifndef HASH_H
#define HASH_H

class hasz
{
private:
   static const int tableSize = 1000;

   
   struct item
   {
      string value;
      item* next;
   };
   
   item* HashTable[tableSize];
   
public:
   
   hasz();
   //hasz(int new_zakres);
   int Hash(string key);
   void AddItem(string value);
   int NumberOfItemsInIndex(int index);
   void PrintTable();
   void PrintItemsInIndex(int index);
   void FindValue(string value);
   void RemoveItem(string value);
   void LoadData(int amount);
   string Int_na_string(int liczba);

};



#endif