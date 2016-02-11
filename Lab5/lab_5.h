/*
 * Name        : lab_5.h
 * Author      : FILL IN
 * Description : Practicing Functions. Use this file to write your
 *               Function Prototypes (what goes above main()).
 */

#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <streambuf>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ios_base;

void Hello();
void PrintMessage(string input);
int GetAnswer();
int FindLarger(int fvalue, int svalue);
string BuildMessage(string input, bool tf);
string BuildMessage(string input);
string BuildMessage();

/*
 * Function Name: Hello
 *
 * Displays "Hello world!" to stdout (cout) (no newline character after)
 *
// CODE HERE (FUNCTION PROTOTYPE)
void Hello()
{
    cout<<"Hello world!";
}

/*
 * Function Name: PrintMessage
 *
 * Displays the string parameter to stdout (no newline character)
 * @param const string& - The string to display to stdout
 *
// CODE HERE (FUNCTION PROTOTYPE)


void PrintMessage(string input)
{
    cout<<input;
}
/*
 * Function Name: GetAnswer
 *
 * Returns the integer value 42.
 * @return int - The value 42
 *
// CODE HERE (FUNCTION PROTOTYPE)


int GetAnswer()
{
    return 42;
}
/*
 * Function Name: FindLarger
 *
 * Returns the larger of the two parameter values. Should work correctly
 * if the values are equivalent (returns either one)
 * @param int - The first value
 * @param int - The second value
 * @return int - The larger of the two values, or either one if they are equal
 *
// CODE HERE (FUNCTION PROTOTYPE)


int FindLarger(int fvalue, int svalue)
{
    if(fvalue=>svalue)
    {
        return fvalue;
    }
    else if(svalue>fvalue)
    {
        return svalue;
    }
}
/*
 * Function Name: BuildMessage
 *
 * Return the string "Message: STRING", where STRING is replaced by the value of
 * the first parameter (string). If second parameter (bool) is true, convert
 * first parameter (string) to all uppercase letters before concatenating it
 * with "Message: ". If first parameter is the empty string, return
 * "Message: empty".
 * @param string - A message.
 *               - Defaults to "" (empty string)
 * @param bool - To indicate if we should uppercase letters or not
 *             - Defaults to false
 *
// CODE HERE (FUNCTION PROTOTYPE)


string BuildMessage(string input, bool tf)
{
    stringstream builder;
    
    if (tf==true)
    {
        toupper(input);
    }
    
    if (input=="")
    {
        return "Message: empty";
    }
    
    builder<<"Message: "<<input;
    builder>>input;
    return input;
}*/

#endif
