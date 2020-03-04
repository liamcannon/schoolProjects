
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

#include "book.h"

Book::Book()
{
	bName = "";
	bType = Type(-1);
	bPages = 0;
	bOunces = 0;
	for (int i = 0; i < 5; i++)
	{
		bReviews[i] = 0;
	}
}

Book::Book(const string &name, Type type, int pages, float ounces, const string &checkFileName)
{
	bName = name;
	bType = type;
	bPages = pages;
	bOunces = ounces;
	for (int i = 0; i < 5; i++)
	{
		bReviews[i] = 0;
	}
	addReviews(checkFileName);
}

string Book::formatReportLine()
{
	stringstream ss;
	ss << bName << " | Type: " << this->getTypeName() << "  Pages: " << this->bPages
	 << "  Weight(lbs): " << this->getWeightLbs() <<
	  "  Average Stars: " << this->calculateAverageReview() 
	  << "  Most Frequent Review: " << this->getMostFrequentReview();
	return ss.str();
}

float Book::getWeightLbs()
{
	return (bOunces / 16);
}

string Book::getTypeName()
{
	return TYPE_WORDS[(int)bType];
}

void Book::addReviews(const string &reviewFile)
{
	ifstream input(reviewFile);

	for (int i = 0; i < 5 && !input.eof(); i++)
	{
		input >> bReviews[i];
	}
}

float Book::calculateAverageReview()
{
	int amount = 0;
	float total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += bReviews[i];
		amount += bReviews[i] * (i + 1);
	}
	return amount / total;
}

int Book::getMostFrequentReview()
{
	int frequent = 0;

	for (int i = 0; i < 5; i++)
	{
		if (bReviews[i] > bReviews[frequent])
			frequent = i;
	}
	return frequent;
}

void Book::getReviews(int reviewsArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		reviewsArray[i] = bReviews[i];
	}
}

Book Book::operator=(const Book &book)
{
	this->bName = book.bName;
	this->bType = book.bType;
	this->bPages = book.bPages;
	this->bOunces = book.bOunces;
	for (int i = 0; i < 5; i++)
	{
		this->bReviews[i] = book.bReviews[i];
	}
	return *this;
}
int Book::operator+(const Book &book)
{
	return this->bPages + book.bPages;
}
int Book::operator+(int num)
{
	return this->bPages + num;
}
int Book::operator-(const Book &book)
{
	return this->bPages - book.bPages;
}
int Book::operator-(int num)
{
	return this->bPages - num;
}
