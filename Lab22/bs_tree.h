/*
BS Tree
Hunter Damon
CSCI 21
*/

#ifndef BST_H
#define BST_H


#include "bst_node.h"

using namespace std;

class BSTree
{
    private:
     bool Insert(int value, BSTNode*& node);
     void Clear(BSTNode*& node);
     string InOrder(BSTNode* node);
     BSTNode* root_;
     unsigned int size_;
     
    public:
     BSTree();
     ~BSTree();
     bool Insert(int value);
     void Clear();
     unsigned int size() const;
     string InOrder();
};

#endif