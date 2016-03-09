#include "item.h"

Item::Item(string name, unsigned int value)
{
    name_=name;
    value_=value;
}

Item::~Item()
{
    
}

void Item::set_name(string input)
{
    name_=input;
}

void Item::set_value(int input)
{
    value_=input;
}

string Item::name()
{
    return name_;
}

int Item::value()
{
    return value_;
}

string Item::ToString()
{
    stringstream out;
    out<<name_<<", $"<<value_;
    return out.str();
}