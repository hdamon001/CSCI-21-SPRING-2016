/*
 * Hunter Damon
 * Lab 12
 * item inheritance
 */
 
#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

class Item {
    public:
     Item(string name_ = "item", unsigned int value_ = 0);
     virtual ~Item();
     void set_name(string input);
     void set_value(int input);
     string name();
     int value();
     string ToString();
     
    private:
     string name_;
     unsigned int value_;
};

#endif