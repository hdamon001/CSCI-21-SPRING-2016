#include "sl_list.h"

SLList::SLList()
{
    head_=NULL;
    size_=0;
}

SLList::~SLList()
{
    Clear();
}

void SLList::InsertHead(int contents)
{
    SLNode *new_node = new SLNode(contents);
    (*new_node).set_next_node(head_);
    head_ = new_node;
    size_++;
}

void SLList::RemoveHead()
{
    if (size_ != 0) 
    {
        SLNode *temp = head_;
        head_ = (*temp).next_node();
        delete temp;
        size_--;
    }
}

void SLList::Clear()
{
    while (head_!=NULL)
    {
        RemoveHead();
    }
}

unsigned int SLList::size() const
{
    return size_;
}

string SLList::ToString() const
{
   stringstream out;
   if (size_ != 0)
   {
       SLNode *temp = head_;
       while (temp!=NULL)
       {
           out<<(*temp).contents();
           if ((*temp).next_node()!=NULL)
           {
               out<<", ";
           }
           temp=(*temp).next_node();
       }
       return out.str();
   }
   return "";
}