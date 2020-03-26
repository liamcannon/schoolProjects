
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

const int SIZE = 5;

Book::Book()
{
	bName = "";
	bType = Type(-1);
	bPages = 0;
	bOunces = 0;
	for (int i = 0; i < SIZE; i++)
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
	for (int i = 0; i < SIZE; i++)
	{
		bReviews[i] = 0;
	}
	addReviews(checkFileName);
}

string Book::formatReportLine()
{
	stringstream ss;
	ss << bName << " | Type: " << this->getTypeName() << "  Pages: " << this->bPages << "  Weight(lbs): " 
	<< this->getWeightLbs() << "  Average Stars: " 
	<< this->calculateAverageReview() << "  Most Frequent Review: " << this->getMostFrequentReview();
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
	int reviews[SIZE];

	for (int i = 0; i < SIZE && !input.eof(); i++)
	{
		input >> bReviews[i];
	}
}

double Book::calculateAverageReview()
{
	double total = 0;
	double amount = 0;

	  for (int i = 0; i < SIZE;i++) {
        total += bReviews[i] * (SIZE-i);
        amount += bReviews[i];
    }
	total /= amount;

	return total;
}

int Book::getMostFrequentReview()
{
	int mostFrequent = 0;
	int reviews = 0;
    getReviews(bReviews, SIZE);
    for (int i = 0; i < SIZE; i++) {
        if (bReviews[i] > reviews) {
            reviews = bReviews[i];
			switch(i) {
				case 0:
					mostFrequent = 5;
					break;
				case 1:
					mostFrequent = 4;
					break;
				case 2:
					mostFrequent = 3;
					break;
				case 3:
					mostFrequent = 2;
					break;
				case 4:
					mostFrequent = 1;
					break;
				case 5:
					mostFrequent = 0;
					break;
				default:
					break;
			}
        }
    }
    return mostFrequent;
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
	for (int i = 0; i < SIZE; i++)
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
