/*
 * Name        : sorting.cpp
 * Author      : Hunter Damon
 * Description : Working with Insertion and Shell Sort
 */
#include "sorting.h"

// CODE HERE -- FUNCTION DEFINITIONS

bool CompareArrays(int array_one[], int array_two[], unsigned int size) {
  for (unsigned int i = 0; i < size; i++)
    if (array_one[i] != array_two[i])
      return false;
  return true;
}

void DisplayArray(int values[]) {
  if (GRADER) {
    for (unsigned int i = 0; i < 5; i++)
      cout << values[i] << ' ';
    cout << endl;
  }
}

int BubbleSort(int the_array[], unsigned int size)//Apply the bubble sort algorithm to sort an array of integers.
{
    int passes = 0;
    for (int i = size - 1; i > 0; i--) 
    {
        passes++;
        for (int j = 0; j < i; j++) 
        {
            if (the_array[j] > the_array[j + 1]) 
            {
                SwapValues(the_array[j], the_array[j + 1]);
            }
        }
    }
    return passes;
}

int OptimizedBubbleSort(int the_array[], unsigned int size)//Apply the optimized bubble sort algorithm to sort an array of integers.
{
    int passes = 0;
    for (int i = size - 1; i > 0; i--)
    {
        bool swapped = false;
        passes++;
        for (int j = 0; j < i; j++)
        {
            if (the_array[j] > the_array[j + 1])
            {
                SwapValues(the_array[j], the_array[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    return passes;
}

int SelectionSort(int the_array[], unsigned int size)//Apply the selection sort algorithm to sort an array of integers.
{
    int smallest = 0;
    int passes = 0;
    for (int i = 0; i < size; i++) 
    {
        passes++;
        smallest = i;
        for (int j = (i + 1); j < size; j++) 
        {
            if (the_array[j] < the_array[smallest])
            {
                smallest = j;
            }
        }
        if (smallest != i) 
        {
            SwapValues(the_array[i], the_array[smallest]);
        }
    }
    return passes;
}

int InsertionSort(int the_array[], unsigned int size)//Apply the insertion sort algorithm to sort an array of integers.
{
    int passes = 0;
    for (int i = 0; i <= (size - 1); i++) 
    {
        passes++;
        int j = i;
        while (j > 0 && the_array[j] < the_array[j - 1]) 
        {
            SwapValues(the_array[j], the_array[j - 1]);
            j = j - 1;
        }
    }
    return passes;
}

int ShellSort(int the_array[], unsigned int size)//Apply the shell sort algorithm to sort an array of integers.
{
    int passes = 0;
    int gap = size / 2;
    while (gap > 0) 
    {
        passes++;
        for (int i = gap; i <= (size - 1); i++) 
        {
            int temp = the_array[i];
            int j = i;
            while (j >= gap && the_array[j - gap] > temp) 
            {
                the_array[j] = the_array[j - gap];
                j = j - gap;
            }
            the_array[j] = temp;
            DisplayArray(the_array);
        }
        gap = gap / 2;
    }
    return passes;
}

void SwapValues(int &value_1, int &value_2) {
  // DO NOT ALTER THE NEXT 3 LINES!!!
  if (GRADER) {
    cout << value_1 << " " << value_2 << endl;
  }
  // Code SWAP Algorithm Here
  int temp = value_1;
  value_1 = value_2;
  value_2 = temp;
}