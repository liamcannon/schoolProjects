//
//  sort.h
//
//  Functions for merge sort, quicksort, and a hybrid sort.
//  You SHOULD modify this file.
//
//  IMPORTANT NOTE: For this particular assignment you may not add
//  any additional utility functions.
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

#include <algorithm> // for swap(), merge()
#include <random>

using namespace std;

namespace csi281
{

    // Performs an in-place ascending sort of *array*
    // using the merge sort algorithm
    // *start* is the first element of the array to start sorting from
    // *end* is the end element for the elements to be sorted
    // *end* will be the length of the array - 1 for a first run
    // NOTE: Your solution MUST use std::inplace_merge
    // http://www.cplusplus.com/reference/algorithm/inplace_merge/

    //wrote a merge to practice
    /*
    template <typename T>
    void merge(T array[], int start1, int start2, int end1, int end2)
    {
        int cursor1 = start1;
        int cursor2 = start2;
        int *sortedArray = new int[(end1 - start1) + (end2 - start2) + 2];
        for (int i = 0; i < (end1 - start1) + (end2 - start2) + 2; i++)
        {
            if (array[cursor1] < array[cursor2])
            {
                sortedArray[i] = array[cursor1];
                cursor1++;
            }
            else
            {
                sortedArray[i] = array[cursor2];
                cursor2++;
            }
        }
        for (int j = start1; j <= end2; j++)
        {
            array[j] = sortedArray[j];
        }
        delete[] sortedArray;
    }
*/
    template <typename T>
    void mergeSort(T array[], const int start, const int end)
    {
        if (start < end)
        {
            int m = (start + end) / 2;
            mergeSort(array, start, m);
            mergeSort(array, m + 1, end);

            inplace_merge(array + start, ((array + m) + 1), ((array + end) + 1));
        }
    }

    // setup random number generator
    static random_device rd;
    static mt19937 rng(rd());
    // you can use uniform_int_distribution and rng to create
    // a random int in a certain range

    // Performs an in-place ascending sort of *array*
    // using the quicksort algorithm
    // *start* is the first element of the array to start sorting from
    // *end* is the end element for the elements to be sorted
    // *end* will be the length of the array - 1 for a first run
    // NOTE: Your solution should use std::swap
    // http://www.cplusplus.com/reference/algorithm/swap/
    // NOTE: Your solution MUST use a random pivot
    // TIP: It may be helpful to swap the pivot to the end,
    // sort the center of the range, and then move the pivot back to
    // the appropriate place
    template <typename T>
    void quickSort(T array[], const int start, const int end)
    {
        T pivot = array[(end + start) / 2];
        int i, j;
        i = start;
        j = end;

        while (j >= i)
        {
            while (array[i] < pivot)
            {
                i++;
            }
            while (array[j] > pivot)
            {
                j--;
            }
            if (i <= j)
            {
                swap(array[i], array[j]);
                i++;
                j--;
            }
        }
        if (j > start)
            quickSort(array, start, j);
        if (i < end)
            quickSort(array, i, end);
    }

    // Performs an in-place ascending sort of *array*
    // using the insertion sort algorithm
    // *start* is the first element of the array to start sorting from
    // *end* is the end element for the elements to be sorted
    // *end* will be the length of the array - 1 for a first run
    // NOTE: You can modify your old implementation from assignment 4
    // OR if you believe yours was incorrect, email me and I will
    // send you mine assuming you are done with assignment 4,
    // but you will still need to modify it for this assignment
    // as described below
    // NOTE: You will need to modify the implementation to only
    // sort part of the array as per the parameters of this version
    template <typename T>
    void insertionSort(T array[], const int start, const int end)
    {
        T tmp;
        int j;
        for (int i = start + 1; i < end + 1; i++)
        {
            tmp = array[i];
            j = i - 1;
            while (j >= 0 && array[j] > tmp)
            {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = tmp;
        } //from assignment 4 with changes to work with start and end
    }

    // Performs an in-place ascending sort of *array*
    // using merge sort until there is less than 10 elements, and then
    // the insertion sort algorithm
    // *start* is the first element of the array to start sorting from
    // *end* is the end element for the elements to be sorted
    // *end* will be the length of the array - 1 for a first run
    // TIP: You can copy your implementation of merge sort in here, and
    // should be able to call the insertionSort above
    template <typename T>
    void hybridSort(T array[], const int start, const int end)
    {
        int CHECK = 10;
        if (end - start <= CHECK)
            insertionSort(array, start, end);
        else
        {
            int mid = (start + end) / 2;
            mergeSort(array, start, end);
            // mergeSort(array, mid+1, end);

            inplace_merge((array + start), ((array + mid) + 1), ((array + end) + 1));
        }
    }

} // namespace csi281

#endif /* sort_hpp */
