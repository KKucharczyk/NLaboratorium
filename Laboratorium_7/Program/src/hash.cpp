#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

hasz::hasz()
{
   for(int i = 0; i < tableSize; i++)
   {
      HashTable[i] = new item;
      HashTable[i]-> value = "empty"; 
      HashTable[i]-> next = NULL; 
   }
}

void hasz::AddItem(string value)
{
   int index = Hash(value);
   
   if(HashTable[index]->value == "empty")
   {
      HashTable[index]->value = value;
   }
   else
   {
      item* Ptr = HashTable[index];
      item* n = new item;
      n->value = value;
      n->next = NULL;
      
      while(Ptr->next != NULL)
      {
	 Ptr = Ptr->next;
      }
      Ptr->next = n;
   }
}

int hasz::NumberOfItemsInIndex(int index)
{
   int count = 0;
   
   if(HashTable[index]->value == "empty")
   {
      return count;
   }
   else 
   {
      count++;
      item* Ptr = HashTable[index];
      while(Ptr->next != NULL)
      {
	      count++;
	      Ptr = Ptr->next;
      }
   }
   return count;
}

void hasz::PrintTable()
{
   int number;
   
   for(int i = 0; i < tableSize; i++)
   {
      number = NumberOfItemsInIndex(i);
      cout << "------------------\n"; 
      cout << "index = " << i << endl;
      cout << HashTable[i]->value << endl;
      cout << "# of items = " << number << endl;
      cout << "------------------\n"; 
   }
}

void hasz::PrintItemsInIndex(int index)
{
   item *Ptr = HashTable[index];
   
   if(Ptr->value == "empty")
   {
      cout << "Index = " << index << " is empty.\n";
   }
   else
   {
      cout << "index " << index << " contain following items:\n";
      while(Ptr != NULL)
      {
	      cout << "-----------------\n";
	      cout << Ptr->value << endl;
	      cout << "-----------------\n";
	      Ptr = Ptr->next;
      }
   }
}

int hasz::Hash(string key)
{
   int hash = 0;
   int index;
   
   for(int i = 0; i < static_cast<int>(key.length()); i++)
   {
      hash = hash + static_cast<int>(key[i]);
      //cout << "hash = " << hash << endl;
   }
   
   index = (hash % tableSize);
   
   return index;
}

void hasz::FindValue(string value)
{
   int index = Hash(value);
   bool foundValue = false;
   //string value;
   
   item* Ptr = HashTable[index];
   while(Ptr != NULL)
   {
      if(Ptr->value == value)
      {
	      foundValue = true;
	   }
      Ptr = Ptr->next;
   }
   if(foundValue == true)
      ;//cout << "Value found = " << value << endl;
   else
      ;//cout << value << " was not found in the hash table.\n";
}

void hasz::RemoveItem(string value)
{
   int index = Hash(value);
   
   item* delPtr;
   item* P1;
   item* P2;
   
   // Case 0 - bucket's empty
   if(HashTable[index]->value == "empty")
   {
      //cout << value << " was not found in the Hash Table.\n";
   }
   
   // Case 1 - 1 item matching
   else if(HashTable[index]->value == value && HashTable[index]->next == NULL)
   {
      HashTable[index]->value = "empty";
      
      //cout << value << " was removed from the Hash Table.\n";
   }
      
   // Case 2 - item match, other things
   else if(HashTable[index]->value == value)
   {
      delPtr = HashTable[index];
      HashTable[index] = HashTable[index]->next;
      delete delPtr;
      
      //cout << value << " was removed from the Hash Table.\n";
   }
   
   
   // Case 3 - bucket contain, not first
   else
   {
      P1 = HashTable[index]->next;
      P2 = HashTable[index];
      
      while(P1 != NULL && P1->value != value)
      {
	      P2 = P1;
	      P1 = P1->next;
      }
      
      // Case 3.1 - no match
      if(P1 == NULL)
      {
	      //cout << value << " was not found in the Hash Table.\n";
      }
      
      // Case 3.2 - match is foundValue
      else
      {
	      delPtr = P1;
	      P1 = P1->next;
	      P2->next = P1;
	 
	      delete delPtr;
	      //cout << value << " was removed from the Hash Table.\n";
      }
   }
}

void hasz::LoadData(int amount)
{
   fstream file;
   int dummy;
   int liczba;

   file.open("Dane_testowe.txt", ios::in | ios::out);
   file >> dummy;

   for(int i = 0; i < amount; i++)
   {
      file >> liczba;
      string napis = Int_na_string(liczba);
      AddItem(napis);
      napis.clear();
   }

   file.close();
}

string hasz::Int_na_string(int liczba)
{
   ostringstream ss;
   ss << liczba;
   string napis = ss.str();
   
   return napis;
}