#ifndef BSTNODE_H
#define BSTNODE_H

using namespace std;

class BSTNode
{
public:
   int el; // Element przechowywany
   BSTNode *top, *left, *right;
   
   BSTNode()
   {
      left = right = 0;
   }
   
   BSTNode(const int& e, BSTNode *t = 0, BSTNode *l = 0, BSTNode *r = 0)
   {
      el = e; top = t; left = l; right = r;
   }
};

#endif