//
//  functions.cpp
//  lab1
//
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//
/*
EDITOR?: Liam Cannon

	Class : CSI - 240
	Assignment : Module-01-Lab Assignment 1 - 2D Array

	Description :
		Using arrays to read data and output it into the console
		
	I certify that this is entirely my own work, except where I have given
			fully - documented references to the work of others.I understand the
			definitionand consequences of plagiarismand acknowledge that the assessor
			of this assignment may, for the purpose of assessing this assignment :
			-Reproduce this assignmentand provide a copy to another member of
			academic staff; and /or
			-Communicate a copy of this assignment to a plagiarism checking
			service(which may then retain a copy of this assignment on its
				database for the purpose of future plagiarism checking)
			* /
*/

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "functions.h"

using namespace std;


int loadLanguages( const string& filename, string names[], int maxLanguages )
{
	int numNames = 0;
   
	ifstream input(filename);
	if( input.is_open() )
	{
		while( !input.eof() && numNames < maxLanguages )
		{
			getline( input, names[numNames] );
			numNames++;
		}
		input.close();
	}
	return numNames;
}


bool loadInfo( const string& filename, int infoArray[][INFO], int numLanguages )
{
	// just a stub
   // modify to load the 2D array (infoArray) with the data stored in info.txt
	ifstream fin;
	fin.open(filename);
	if (!fin.is_open()) {
		cout << "failed loading" << endl;
	}
	while (!fin.eof()) {
		for (int i = 0; i < numLanguages; i++) {
			for (int j = 0; j < INFO; j++) {
				fin >> infoArray[i][j];
			}
		}
	}
	cout << infoArray;
	fin.close();
   return true;
}


string formatReportLine( int languageRank, int infoArray[][INFO], string names[] )
{
	// just a stub
   // modify to build each output line for each language, and align the output so its organized
   // hint: to return a string that concatenates strings and ints, use a stringstream
	stringstream list;
	
	list << setw(15) << left << names[languageRank] << setw(13) << right << infoArray[languageRank][0] << setw(9) << "" << infoArray[languageRank][1];

   return list.str();
}