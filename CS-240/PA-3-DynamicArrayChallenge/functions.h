//Liam Cannon

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

class DynamicArray
{
private:
    int arraySize;
    string *arr;

public:
    DynamicArray()
    {
        arraySize = 0;
        arr = new string[arraySize];
    }
    DynamicArray(string fileName)
    {
        string temp;
        ifstream fin(fileName);
        while (!fin.eof())
        {
            fin >> temp;
            arraySize++;
        }
        arr = new string[arraySize];
    }
    ~DynamicArray() {
        delete[] arr;
        arr = nullptr;
    }
    void fillArrayFile(string fileName)
    {
        ifstream fin(fileName);

        for (int i = 0; i < arraySize; i++)
        {
            fin >> arr[i];
        }
    }
    string displayInfo()
    {
        stringstream info;
        info << "Size of the Array: " << arraySize << endl;
        for (int i = 0; i < arraySize; i++)
        {
            info << arr[i] << "\n";
        }

        return info.str();
    }
};