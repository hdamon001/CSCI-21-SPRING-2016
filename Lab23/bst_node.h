/*
Lab 21 Trees
Hunter Damon
CSCI 21
*/

#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

class BSTNode
{
    private:
     BSTNode* left_child_;//pointer for a node's left child
     BSTNode* right_child_;//pointer for a node's right child
     int contents_;//contents of node

    public:
     BSTNode();//default constructor
     BSTNode(int contents);//constructor with parameter for node's contents
     ~BSTNode();//destructor
     void set_contents(int contents);//mutator for contents
     int contents() const;//accessor for contents
     int& contents();
     void set_left_child(BSTNode* tot);//mutator for left child
     void set_right_child(BSTNode* tot);//mutator for right child
     BSTNode* left_child() const;//accessor for left child
     BSTNode*& left_child();
     BSTNode* right_child() const;//accessor for right child
     BSTNode*& right_child();
};

#endif