//
//  sort.h
//  
//  Functions for bubble sort, selection sort, and insertion sort.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#ifndef sort_hpp
#define sort_hpp

#include <algorithm> // for swap()

using namespace std;

namespace csi281 {
    
    // Performs an in-place ascending sort of *array* of size *length*
    // using the bubble sort algorithm
    template <typename T>
    void bubbleSort(T array[], const int length) {
        bool sorted = false;
        T tmp;
        do{
            sorted = true;
            for(int i = 0; i < length - 1; i++) {
                if(array[i] > array[i + 1]) {
                    tmp = array[i + 1];
                    array[i + 1] = array[i];
                    array[i] = tmp;
                    sorted = false;
                }
            }
        }while(!sorted);
    }
    
    // Performs an in-place ascending sort of *array* of size *length*
    // using the selection sort algorithm
    template <typename T>
    void selectionSort(T array[], const int length) {
        int min;
        T tmp;
        for(int i = 0; i < length; i++) {
            min = i;
            for(int j = i; j < length; j++) {
                if(array[j] < array[min]) {
                    min = j;
                }
            }
            tmp = array[min];
            array[min] = array[i];
            array[i] = tmp;
        }
        //source for help https://www.geeksforgeeks.org/selection-sort/
    }
    
    // Performs an in-place ascending sort of *array* of size *length*
    // using the insertion sort algorithm
    template <typename T>
    void insertionSort(T array[], const int length) {
        T tmp;
        int j;
        for(int i = 0; i < length; i++) {
             tmp = array[i];
             j = i - 1;

            while(j >= 0 && array[j] > tmp) { // iterating over all the elements from index i to index 0
                array[j + 1] = array[j]; //  shifts everything foward
                j--;
            }
            array[j + 1] = tmp;// inserting the determined number
        }
    }// source for some help https://www.geeksforgeeks.org/insertion-sort/
}


#endif /* sort_hpp */
