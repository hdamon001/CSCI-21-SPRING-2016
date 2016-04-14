/*
 * Name        : lab_recursion.cpp
 * Author      : Hunter Damon
 * Description : Recursive Functions
 */

#include "lab_recursion.h"

// CODE FUNCTION DEFINITIONS HERE

/*
 * UPDATE!!!! to match the requirements
 * Convert a decimal number to binary
 * @param number to be converted.
 * @return a stringstream.
 */
stringstream decToBin(int num)
{
	if (num > 1) //note this makes the base case num = 0
	{
		decToBin(num/2); //recursive call
	}

	cout<<(num%2); //outputs in correct order
}

unsigned int binToDec(string binary, unsigned int i = 0)
{
	int sscript = 0;
	if (i < binary.length())
	{
		if (binary[i] == '1')
		{
			sscript = pow(2, i);
		}
		return (sscript + binToDec(binary, i++);
	}
}