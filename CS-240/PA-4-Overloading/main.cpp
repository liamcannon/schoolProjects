//
//  main.cpp
//  lab3
//
//
//  Modified by: Murat K. Gungor
//  Thanks to Brian R. Hall
//
// Author: Liam Cannon
// Class: CSI-240
// Assigmnet: PA_4
// Date Due: March 6th
// Description: holds onto values for different books
/* Certification of Authenticity :
I certify that this is entirely my own work, except where I have given
fully - documented references to the work of others.I understand the
definitionand consequences of plagiarismand acknowledge that the assessor
of this assignment may, for the purpose of assessing this assignment :
	-Reproduce this assignmentand provide a copy to another member of
	academic staff; and /or
	-Communicate a copy of this assignment to a plagiarism checking
	service(which may then retain a copy of this assignment on its
		database for the purpose of future plagiarism checking)
*/

#include <iostream>
#include <fstream>
#include <string>
#include "book.h"

using namespace std;

int main()
{
	const string FILENAME("books.txt");

	ifstream input(FILENAME);

	if (input.good())
	{
		while (!input.eof())
		{
			string name;
			int type;
			int pages;
			float ounces;
			string checkFileName;
			getline(input, name);
			input >> type >> pages >> ounces >> checkFileName;
			input.ignore(INT_MAX, '\n'); //ignore the newline char at the end of the line

			//create Book object here!
			Book book(name, Type(type), pages, ounces, checkFileName);

			//write out report line for movie here!

			cout << book << endl;
		}
	}
	else
	{
		cout << "File not found: " << FILENAME << endl;
	}

	// system("pause");
	return 0;
}