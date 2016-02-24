/*
 * Name        : Assignment 1
 * Author      : Hunter Damon
 * Description : FILL IN
 * Sources     : FILL IN
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)
bool CheckAlphabetic(string value)
{
    if (value=="")//will return false if the string is empty
    {
        return false;
    }
    
    for (int i=0; i<value.length(); i++)
    {
        if (!isalpha(value[i]))//checks to see if each character is a letter
        {
            return false;
        }
    }
    
    return true;
}

int CountWords(string input)
{
    if(input=="")
    {
        return 0;
    }
    
    int words=1;//there are always 1 more words then there are spaces
    
    for (int i=0; i<input.length(); i++)
    {
        if (input[i]==' ')
        {
            words++;//adds 1 word for each space
        }
    }
    \
    return words;
}

bool EncryptString(string &input, int shift)
{
    if (input=="")
    {
        return false;
    }
    for (int i=0; i<input.length(); i++)//loop runs through each character in a string
    {
        if (!isalpha(input[i]))//checks to make sure they are letters
        {
            return false;
        }
        else if (shift>0)
        {
            for (int j=0; j<shift; j++)//shifts each letter by the shift factor
            {
                if (input[i]=='z')
                {
                    input[i]='a';
                }
                else if (input[i]=='Z')
                {
                    input[i]='A';
                }
                else
                {
                    input[i]++;
                }
            }
        }
        else if (shift<0)
        {
            for (int j=0; j<abs(shift); j++)//does the same thing but in reverse when the shift number is negative
            {
                if (input[i]=='a')
                {
                    input[i]='z';
                }
                else if (input[i]=='A')
                {
                    input[i]='Z';
                }
                else
                {
                    input[i]--;
                }
            }
        }
    }
    return true;
}

bool DecryptString(string &input, int shift)//same as Encrypt just shifts them in opposite directions
{
    if (input=="")
    {
        return false;
    }
    for (int i=0; i<input.length(); i++)
    {
        if (!isalpha(input[i]))
        {
            return false;
        }
        else if (shift>0)
        {
            for (int j=0; j<shift; j++)
            {
                if (input[i]=='a')
                {
                    input[i]='z';
                }
                else if (input[i]=='A')
                {
                    input[i]='Z';
                }
                else
                {
                    input[i]--;
                }
            }
        }
        else if(shift<0)
        {
            for (int j=0; j<abs(shift); j++)
            {
                if (input[i]=='z')
                {
                    input[i]='a';
                }
                else if (input[i]=='Z')
                {
                    input[i]='A';
                }
                else
                {
                    input[i]++;
                }
            }
        }
    }
    return true;
}

double ComputeAverage(double value[], unsigned int size)
{ 
    double sum=0.0;
    
    for (int i=0; i<size; i++)
    {
        sum=sum+value[i];//forms the sum of the array
    }
    
    double average=sum/size;//equation to find average
    
    return average;
}

double FindMinValue(double value[], unsigned int size)
{
    double min=value[0];
    
    for (int i=0; i<size; i++)
    {
        if (value[i]<min)
        {
            min=value[i];//compares each number to find the lowest
        }
    }
    
    return min;
}

double FindMaxValue(double value[], unsigned int size)
{
    double max=value[0];
    
    for (int i=0; i<size; i++)
    {
        if (value[i]>max)
        {
            max=value[i];//compares each number to find the highest
        }
    }
    
    return max;
}