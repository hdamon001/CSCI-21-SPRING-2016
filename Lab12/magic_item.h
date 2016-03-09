#ifndef MAGIC_H
#define MAGIC_H

#include "item.h"

class MagicItem: public Item
{
    public:
     MagicItem(string name = "magicitem", unsigned int value = 0, string description = "no description", unsigned int mana_required = 0);
     virtual ~MagicItem();
     void set_description(string input);
     void set_mana_required(int input);
     string description();
     int mana_required();
     string ToString();
     
    private:
     string description_;
     unsigned int mana_required_;
};

#endif