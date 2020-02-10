//  Liam Cannon
//  functions.cpp
//  lab-4
#include "functions.h"

// function implementation

//asking the user for a size of the array
int promptSize()
{
    int size;
    do
    {
        cout << "Enter the array size: ";
        cin >> size;
    } while (size < 0);

        return size;
}
// putting values into the empty array
void populate(int size, int *ptr)
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % UPPER_BOUND;
    }
}
// displaying and the array in a formatted structure along with sorted vs unsorted
void display(int size, int *ptr, string firstLine)
{
    cout << firstLine << endl;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        cout << setw(SPACING) << left << ptr[i];
        if (count == 9)
        {
            cout << endl;
            count = 0;
        }
    }
    cout << endl;
}
// sorting the array using a bubble sort
void sort(int size, int *ptr)
{
    int temp;
    bool swapped = true;
    while(swapped)
    {
        swapped = false;
        for (int j = 0; j < size - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
                swapped = true;
            }
        }
    }
}