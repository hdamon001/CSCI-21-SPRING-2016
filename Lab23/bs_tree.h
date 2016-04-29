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
     bool Remove(int value, BSTNode*& node);//traverses the tree and removes the node containing the target integer
     int FindMin(BSTNode* node) const;//returns the value of the smallest node in the tree
     BSTNode* root_;//points to first node in tree
     unsigned int size_;//maintains size of tree
     
    public:
     BSTree();
     ~BSTree();
     bool Insert(int value);//calls private insert function
     bool Remove(int value);//returns value returned by private function Remove
     int FindMin();//eturn the value returned by private function FindMin
     void Clear();//calls private clear function
     unsigned int size() const;//accessor for size
     string InOrder();//calls private inorder function
};

#endif