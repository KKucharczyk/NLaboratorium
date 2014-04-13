#ifndef BST_H
#define BST_H

#include "bstnode.h"

using namespace std;

class BST
{
public:
   // Pola
   int* root;
   
   // Konstruktory
   BST()  {root = 0;}
   ~BST() {clear();}
   
   // Metody
   void clear()
   {
     // clear(root);
      root = 0;
   }
   
   bool IsEmpty() const
   {
      return root == 0;
   }
   
   int Search(BSTNode *p, const int& el)
   {
      while(p != 0)
	 if(el == p->el)
	    return p->el;
	 return 0;
   }
   
   BSTNode* Add(BSTNode *n1, BSTNode *n2)
   {
      BSTNode *n = new BSTNode;
      n1->top = n;  n2->top = n;
      n->left = n1; n->right = n2;
      n->top = 0;
      
      return n;
   }
   
   
};

#endif