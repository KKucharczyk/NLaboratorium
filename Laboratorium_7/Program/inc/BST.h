#ifndef BST_H
#define BST_H

#include <fstream>

class BST
{
private:
   struct node
   {
      int key;
      node* left;
      node* right;
   };
   
   node* root;
   
   void AddLeafPrivate(int key, node* Ptr);
   void PrintInOrderPrivate(node* Ptr);
   node* ReturnNodePrivate(int key, node* Ptr);
   int FindSmallestPrivate(node* Ptr);
   void RemoveRootMatch();
   void RemoveNodePrivate(int key, node* parent);
   void RemoveMatch(node* parent, node* match, bool left);
   bool FindPrivate(int key, node* Ptr);
   
public:
   
   BST();
   int* TreeKeys;
   int amount;
   node* CreateLeaf(int key);
   void AddLeaf(int key);
   void PrintInOrder();
   node* ReturnNode(int key);
   int ReturnRootKey();
   void PrintChildren(int key);
   int FindSmallest();
   void  RemoveNode(int key);
   void Find(int key);
   void LoadData(int amount);
};

#endif