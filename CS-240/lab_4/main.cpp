/*
Author: Liam Cannon
Class : CSI-240
Assignment : Module-04-Lab Assignment 4 - Dynamic Array
Date Due: 2/11/20

  Description : To create and populate a dynamic array, display it, sort it, and display it again,
  Certification of Authenticity :
    I certify that this is entirely my own work, except where I have given
    fully - documented references to the work of others.I understand the
    definitionand consequences of plagiarismand acknowledge that the assessor
    of this assignment may, for the purpose of assessing this assignment :
    -Reproduce this assignmentand provide a copy to another member of
    academic staff;and /or
    -Communicate a copy of this assignment to a plagiarism checking
    service(which may then retain a copy of this assignment on its
      database for the purpose of future plagiarism checking)
*/
#include "functions.h"

int main() {
    srand(time(NULL));

    int size = promptSize();
    int *ptr;

    ptr = new int[size];
    populate(size, ptr);

    display(size, ptr, "Unsorted Array:");

    sort(size, ptr);

    display(size, ptr, "Sorted Array:");

    delete[] ptr;
    ptr = nullptr;
}
