/*
 * Name        : lab_5.cpp
 * Author      : FILL IN
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"


void Hello()
{
    cout<<"Hello world!";
}


void PrintMessage(string input)
{
    cout<<input;
}


int GetAnswer()
{
    return 42;
}


int FindLarger(int fvalue, int svalue)
{
    if (fvalue >= svalue)
    {
        return fvalue;
    }
    else if (svalue > fvalue)
    {
        return svalue;
    }
}


string BuildMessage(string input, bool tf)
{
    string output;
    stringstream builder;
    
    if (tf==true)
    {
        for(int i=0; i<input.length(); i++)
        {
            input[i]=toupper(input[i]);
        }
    }
    
    if (input=="")
    {
        return "Message: empty";
    }
    
    builder<<"Message: "<<input;
    output=builder.str();
    return output;
}


string BuildMessage(string input)
{
    string output;
    stringstream builder;
    builder<<"Message: "<<input;
    output=builder.str();
    return output;
}


string BuildMessage()
{
    return "Message: empty";
}