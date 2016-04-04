#ifndef LIST_H
#define LIST_H

#include "sl_node.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using std::string;
using std::stringstream;

class SLList
{
    private:
     SLNode* head_;
     SLNode* tail_;
     unsigned int size_;
    
    public:
     SLList(); //Default Constructor
     ~SLList();//Destructor
     void InsertHead(int contents); //creates a new dynamic SLNode with the contents of the parameter and attaches as the new head of the list
     void InsertTail(int contents); //creates a new dynamic SLNode with the contents of the parameter and attaches as the new tail of the list
     void RemoveHead(); //removes the head node from the list, or does nothing if the list is empty
     void RemoveTail();
     int GetHead() const;
     int GetTail() const;
     void Clear(); //clears the entire contents of the list, freeing all memory associated with all nodes
     unsigned int size() const; //accessor for size_
     string ToString() const; //returns a string representation of the contents of all nodes in the list
};

#endif