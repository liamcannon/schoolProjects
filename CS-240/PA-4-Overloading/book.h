//
//  book.h
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

#ifndef __lab3__book__
#define __lab3__book__

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

enum Type
{
	UNKNOWN = -1,
	PAPERBACK,
	HARDBACK
};

const string TYPE_WORDS[] = {"Paperback", "Hardback"};

class Book
{
public:
	//default constructor - not actually used but should be implemented anyway
	Book();
	//constructor
	Book(const string &name, Type type, int pages, float ounces, const string &checkFileName);
	//destructor
	~Book(){};

	string formatReportLine();				   //return a string with all the info for the book
	float getWeightLbs();					   //calculate and return the weight of the book in lbs
	string getTypeName();					   //return the string which correlates with the book type
	void addReviews(const string &reviewFile); //reads the passed in reviews file and adds review data to the book
	double calculateAverageReview();			   //calculate the average of the reviews
	//accessors
	int getMostFrequentReview(); //get the review (number of stars) with the highest count
	string getName() { return bName; };
	Type getType() { return bType; };
	int getPages() { return bPages; };
	float getOunces() { return bOunces; };

	Book operator=(const Book &book);
	int operator+(const Book &book);
	int operator+(int num);
	int operator-(const Book &book);
	int operator-(int num);
	friend ostream &operator<<(ostream &out, Book &book)
	{
		out << book.formatReportLine();
		return out;
	}
	friend istream &operator>>(istream &in, Book &book)
	{
		string tmp;
		in >> tmp;
		book.addReviews(tmp);
		return in;
	}

private:
	string bName;  //name of the book
	Type bType;	//the type of book (Type is an enumerated type)
	int bPages;	//how many pages the book contains
	float bOunces; //how much the book weighs in ounces
	int bReviews[5];
	void getReviews(int reviewsArray[], int size); //fill reviewsArray with reviews
};

#endif /* defined(__lab3__book__) */
