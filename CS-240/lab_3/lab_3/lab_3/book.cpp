#include "book.h"

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
	ss << getName() << " " << getTypeName() << " " << getPages() << " " << getWeightLbs();
	return ss.str();
}

float Book::getWeightLbs()
{
	return (getOunces() / 16);
}

string Book::getTypeName()
{
	if (Type::UNKNOWN){
		return "UNKNOWN";
	}
	else {
		return TYPE_WORDS[getType()];
	}
}
