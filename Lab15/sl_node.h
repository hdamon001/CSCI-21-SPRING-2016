/*
Hunter Damon
Singly-linked list
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>

class SLNode
{
    private:
     SLNode *next_node_;
     int contents_;
    
    public:
     SLNode();
     SLNode(int contents);
     ~SLNode();
     void set_contents(int contents);
     int contents();
     void set_next_node(SLNode* ptr);
     SLNode* next_node();
};

#endif