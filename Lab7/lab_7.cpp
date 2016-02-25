/*
 * Name        : lab_7.cpp
 * Author      : FILL IN
 * Description : Working with File I/O
 */
#include "lab_7.h"

// CODE HERE -- FUNCTION DEFINITION FOR ProcessFile()
bool ProcessFile(string filename)
{
    int count;
    ifstream inputStream;
    inputStream.open(filename.c_str());
    
    if (inputStream.fail())
    {
        return false;
    }
    
    while (inputStream>>count)
    {
        if (count==10) {
            OnTen();
        }
        else if (count==20) {
            OnTwenty();
        }
        else if (count==30) {
            OnThirty();
        }
        else if (count==40) {
            OnForty();
        }
        else if (count==50) {
            OnFifty();
        }
        else {
            OnError();
        }
    }
   
    inputStream.close();
    return true;
}


void ProcessArguments(int argc, char* argv[])
{
    stringstream arg;
    for (int i=1; i<argc; i++)
    {
        arg<<argv[i];
        if (arg.str()=="10") {
            OnTen();
        }
        else if (arg.str()=="20") {
            OnTwenty();
        }
        else if (arg.str()=="30") {
            OnThirty();
        }
        else if (arg.str()=="40") {
            OnForty();
        }
        else if (arg.str()=="50") {
            OnFifty();
        }
        else {
            OnError();
        }
        arg.str("");
    }
}