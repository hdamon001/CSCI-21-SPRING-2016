#include "magic_item.h"

MagicItem::MagicItem(string name, unsigned int value, string description, unsigned int mana)
{
    set_name(name);
    set_value(value);
    description_=description;
    mana_required_=mana;
}

MagicItem::~MagicItem()
{
    
}

void MagicItem::set_description(string input)
{
    description_=input;
}

void MagicItem::set_mana_required(int input)
{
    mana_required_=input;
}

string MagicItem::description()
{
    return description_;
}

int MagicItem::mana_required()
{
    return mana_required_;
}

string MagicItem::ToString()
{
    stringstream out;
    out<<name()<<", $"<<value()<<", "<<description_<<", requires "<<mana_required_<<" mana";
    return out.str();
}