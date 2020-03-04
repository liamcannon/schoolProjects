// Author: Liam Cannon
// Class: CSI-240
// Assigmnet: Lab_3
// Date Due: Jan 28 (29th EXTENSION)
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
}

Book::Book(const string& name, Type type, int pages, float ounces)
{
	bName = name;
	bType= type;
	bPages = pages;
	bOunces = ounces;
}

string Book::formatReportLine()
{
	stringstream ss;
	ss << bName << " | Type: " << getTypeName() << "  Pages: " << bPages << "  Weight(lbs): " << getWeightLbs();
	return ss.str();
}

float Book::getWeightLbs()
{
	return (bOunces / 16);
}

string Book::getTypeName()
{
	return TYPE_WORDS[bType];
}
