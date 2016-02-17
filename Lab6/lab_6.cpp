/*
 * Name        : lab_6.cpp
 * Author      : FILL IN
 * Description : Working with Arrays
 */

#include "lab_6.h"

// CODE HERE (FUNCTION DEFINITIONS)
string PrepareForDisplay(int values[], int size, char separator)
{
    stringstream display;
    display<<values[0];
    for (int i=1; i<size; i++)
    {
        display<<separator<<values[i];
    }
    return display.str();
}

bool HasValue(int values[], int size, int value)
{
    for (int i=0; i<size; i++)
    {
        if (values[i]==value)
        {
            return true;
        }
    }
    
    return false;
}

int ValueAt(int values[], int size, int index, bool &error)
{
    error=false;
    if (index>=size||index<0)
    {
        error=true;
        return 0;
    }
    else
    {
        return values[index];
    }
}

int Sum(int values[], int size)
{
    int sum=0;
    for (int i=0; i<size; i++)
    {
        sum=sum+values[i];
    }
    
    return sum;
}

bool SwapValues(int values[], int size, int index1, int index2)
{
    int hold=0;
    if (index1<0 || index2<0 || index1>=size || index2>=size)
    {
        return false;
    }
    else
    {
        hold=values[index1];
        values[index1]=values[index2];
        values[index2]=hold;
        return true;
    }
}