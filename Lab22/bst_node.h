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
     BSTNode* left_child_;
     BSTNode* right_child_;
     int contents_;

    public:
     BSTNode();
     BSTNode(int contents);
     ~BSTNode();
     void set_contents(int contents);
     int contents() const;
     int& contents();
     void set_left_child(BSTNode* tot);
     void set_right_child(BSTNode* tot);
     BSTNode* left_child() const;
     BSTNode*& left_child();
     BSTNode* right_child() const;
     BSTNode*& right_child();
};

#endif