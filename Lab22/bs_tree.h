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
     bool Insert(int value, BSTNode*& node);//inserts new node in numerical order
     void Clear(BSTNode*& node);//clears entire tree
     string InOrder(BSTNode* node);//outputs all nodes in numerical order
     BSTNode* root_;//points to first node in tree
     unsigned int size_;//maintains size of tree
     
    public:
     BSTree();
     ~BSTree();
     bool Insert(int value);//calls private insert function
     void Clear();//calls private clear function
     unsigned int size() const;//accessor for size
     string InOrder();//calls private inorder function
};

#endif