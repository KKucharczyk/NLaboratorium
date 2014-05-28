#ifndef BST_H
#define BST_H
/*!
 * \file
 * 
 * \brief Zawiera definicję klasy BST_H
 */
#include <fstream>

/*!
 * \class BST
 * 
 * \brief Modeluje pojęcie drzewa binarnego
 * 
 * Klasa modeluje pojęcie drzewa przeszukiwań binarnych
 */
class BST
{
private:
   /*!
    * \brief Węzeł
    * 
    * Struktura pomocnicza, będąca węzłem w drzewie
    */
   struct node
   {
      int key;
      node* left;
      node* right;
   };
   /*!
    * \brief Zawiera korzen drzewa
    * 
    * Pole zawiera korzen drzewa
    */
   node* root;
   
   /*!
    * \brief Dodaje gałąź
    */
   void AddLeafPrivate(int key, node* Ptr);
   /*!
    * \brief Drukuje w kolejności drzewo
    */
   void PrintInOrderPrivate(node* Ptr);
   /*!
    * \brief Zwraca wartość węzła
    * 
    * \return Wezel
    */
   node* ReturnNodePrivate(int key, node* Ptr);
   /*!
    * \brief Wyszukuje najmniejszą wartość w drzewie
    * 
    * \return Najmniejszy element
    */
   int FindSmallestPrivate(node* Ptr);
   /*!
    * \brief Usuwa korzen
    */
   void RemoveRootMatch();
   /*!
    * \brief Usuwa węzeł
    */
   void RemoveNodePrivate(int key, node* parent);
   /*!
    * \brief Usuwa konkretny element
    */
   void RemoveMatch(node* parent, node* match, bool left);
   /*!
    * \brief Wyszukuje dany klucz
    */
   bool FindPrivate(int key, node* Ptr);
   
public:
   /*!
    * \brief Podstawowy konstruktor
    */
   BST();
   /*!
    * \brief Wskaźnik z kluczami
    */
   int* TreeKeys;
   /*!
    * \brief Ilość danych
    */
   int amount;
   /*!
    * \brief Tworzy węzeł
    */
   node* CreateLeaf(int key);
   /*!
    * \brief Dodaje gałąź
    */
   void AddLeaf(int key);
   /*!
    * \brief Drukuje w kolejności
    */
   void PrintInOrder();
   /*!
    * \brief Zwraca dany klucz
    */
   node* ReturnNode(int key);
   /*!
    * \brief Zwraca klucz korzenia
    */
   int ReturnRootKey();
   /*!
    * \brief Drukuje potomków
    * 
    * Pomocnicza.
    */
   void PrintChildren(int key);
   /*!
    * \brief Znajduje najmniejszy element
    */
   int FindSmallest();
   /*!
    * \brief Usuwa węzeł
    */
   void  RemoveNode(int key);
   /*!
    * \brief Znajduje dany kluczami
    */
   void Find(int key);
   /*!
    * \brief Ładuje dane
    */
   void LoadData(int amount);
};

#endif