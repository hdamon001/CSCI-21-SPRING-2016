#include "sl_list.h"

SLList::SLList()
{
    head_=NULL;
    tail_=NULL;
    size_=0;
}

SLList::~SLList()
{
    Clear();
}

void SLList::InsertHead(int contents)
{
    SLNode *new_node = new SLNode(contents);
    if (head_==NULL)
    {
        tail_ = new_node;
    }
    (*new_node).set_next_node(head_);
    head_ = new_node;
    size_++;
}

void SLList::InsertTail(int contents)
{
    if (size_==0)
    {
        InsertHead(contents);
    }
    else
    {
        SLNode* new_node = new SLNode(contents);
        (*tail_).set_next_node(new_node);
        tail_ = new_node;
        size_++;
    }
}

void SLList::RemoveHead()
{
    if (size_ == 1)
    {
        tail_ = head_;
    }
    if (size_ != 0) 
    {
        SLNode *temp = head_;
        head_ = (*temp).next_node();
        delete temp;
        size_--;
    }
}

void SLList::RemoveTail()
{
    if (size_ == 1)
    {
        Clear();
    }
    else if (size_ > 1)
    {
        SLNode *temp = tail_;
        SLNode *iterater = head_;
        while ((*iterater).next_node()!=tail_)
        {
            iterater=(*iterater).next_node();
        }
        tail_ = iterater;
        (*tail_).set_next_node(NULL);
        delete temp;
        size_--;
    }
}

int SLList::GetHead() const
{
    if (head_!=NULL)
    {
        return (*head_).contents();
        
    }
    else 
    {
        return 0;
    }
}

int SLList::GetTail() const
{
   if (tail_!=NULL)
    {
        return (*tail_).contents();
    }
    else 
    {
        return 0;
    }
}

void SLList::Clear()
{
    tail_=NULL;
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