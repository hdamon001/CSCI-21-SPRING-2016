#ifndef FOOD_H
#define FOOD_H

#include "item.h"

class FoodItem: public Item
{
    public:
     FoodItem(string name = "fooditem", unsigned int value = 0, unsigned int calories = 0, string unit_of_measure = "nounits", double units = 0.0);
     virtual ~FoodItem();
     void set_calories(int input);
     void set_unit_of_measure(string input);
     void set_units(double input);
     int calories();
     string unit_of_measure();
     double units();
     string ToString();
     
    private:
     unsigned int calories_;
     string unit_of_measure_;
     double units_;
};

#endif