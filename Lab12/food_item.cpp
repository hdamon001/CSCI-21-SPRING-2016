#include "food_item.h"

FoodItem::FoodItem(string name, unsigned int value, unsigned int calories, string unit_of_measure, double units)
{
    calories_=calories;
    unit_of_measure_=unit_of_measure;
    units_=units;
    set_name(name);
    set_value(value);
}

FoodItem::~FoodItem()
{
    
}

void FoodItem::set_calories(int input)
{
    calories_=input;
}

void FoodItem::set_unit_of_measure(string input)
{
    unit_of_measure_=input;
}

void FoodItem::set_units(double input)
{
    units_=input;
}

int FoodItem::calories()
{
    return calories_;
}

string FoodItem::unit_of_measure()
{
    return unit_of_measure_;
}

double FoodItem::units()
{
    return units_;
}

string FoodItem::ToString()
{
    stringstream out;
    stringstream unit;
    unit<<fixed<<setprecision(2)<<units_;
    out<<name()<<", $"<<value()<<", "<<unit.str()<<" "<<unit_of_measure_<<", "<<calories_<<" calories";
    return out.str();
}