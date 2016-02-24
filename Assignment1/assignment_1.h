/*
 * Name        : Assignment 1  
 * Author      : Hunter Damon
 * Description : FILL IN
 * Sources     : FILL IN
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here
#include <iostream>
#include <string>
#include <cstdlib>
#include <streambuf>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ios_base;

// Declare Function Prototypes Here (What goes above main)
bool CheckAlphabetic(string input);
int CountWords(string input);
bool EncryptString(string &input, int shift);
bool DecryptString(string &input, int shift);
double ComputeAverage(double value[], unsigned int size);
double FindMinValue(double value[], unsigned int size);
double FindMaxValue(double value[], unsigned int size);

#endif /* ASSIGNMENT_1_H */
