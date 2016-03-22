/*
Hunter Damon
lab13
*/

#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

template <typename T>
class Box
{
    public:
     Box();
     Box(T newContents);
     T getContents();
     void setContents(T contents);
     template <typename U>
     friend ostream& operator <<(ostream &out, const Box<U> &content);
     
    private:
     T contents;
};

/*template <typename N>
N Sum(N inputArray[], int size);
*/
template <typename T>
Box<T>::Box()
{
    
}

template <typename T>
Box<T>::Box(T newContents)
{
    contents=newContents;
}

template <typename T>
T Box<T>::getContents()
{
    return contents;
}

template <typename T>
void Box<T>::setContents(T input)
{
    contents=input;
}

template <typename T>
ostream& operator <<(ostream &out, const Box<T> &content)
{
  out<<content.contents;
  return out;
}

template <typename N>
N Sum(N input[], unsigned int size)
{
    N sum = N();
    for (int i=0; i<size; i++)
    {
        sum = sum+input[i];
    }
    return sum;
}

#endif