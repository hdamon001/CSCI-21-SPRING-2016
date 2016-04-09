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
    SLNode *new_node = new SLNode(contents); //create new node with specified contents
    if (head_==NULL)
    {
        tail_ = new_node;//sets tail to the node also if the size was zero
    }
    (*new_node).set_next_node(head_);//sets new node to what head was pointing at
    head_ = new_node;//sets head to new node
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
        SLNode* new_node = new SLNode(contents);//does what InsertHead does but for the tail
        (*new_node).set_next_node(NULL);
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
        SLNode *temp = tail_;//points temp at what tail is pointing at
        SLNode *iterater = head_;//points iterater at what head is pointing at
        while ((*iterater).next_node()!=tail_)//while iterater isnt pointing at the same thing as tail
        {
            iterater=(*iterater).next_node();//make iterater equal to the next node
        }
        tail_ = iterater;//set tail to what iterater is pointing at (the node before tail)
        (*tail_).set_next_node(NULL);//set new tail to null
        delete temp;//deletes old tail
        size_--;
    }
}

int SLList::GetHead() const//returns head
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

int SLList::GetTail() const//returns tail
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

void SLList::Clear()//clears list
{
    tail_=NULL;
    while (head_!=NULL)
    {
        RemoveHead();
    }
}

unsigned int SLList::size() const//returns size
{
    return size_;
}

string SLList::ToString() const
{
   stringstream out;
   if (size_ != 0)
   {
       SLNode *temp = head_;//points temp pointer at head
       while (temp!=NULL)
       {
           out<<(*temp).contents();//add the contents of temo to the stringstream
           if ((*temp).next_node()!=NULL)
           {
               out<<", ";//add separator if it isnt the last node
           }
           temp=(*temp).next_node();//set temo to next node
       }
       return out.str();
   }
   return "";
}