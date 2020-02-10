//  Liam Cannon
//  programmer.h
//  Lab-4
#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

const int UPPER_BOUND = 51;
const int SPACING = 5;


int promptSize();
void populate(int size, int *ptr);
void display(int size, int *ptr, string firstLine);
void sort(int size, int *ptr);