
//
//  programmer.cpp
//  lab2
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//

#include "programmer.h"
#include <sstream>;
#include <iomanip>;

//implement functions here!

//returns the number of programmers - fills in the programmers array from the ifstream
int readProgrammers( ifstream& inputFile, Programmer programmers[], int maxProgrammers )
{
	int count = 0;
	while (!inputFile.eof() && count < maxProgrammers) {
		inputFile >> programmers[count].programmer_id;
		inputFile >> programmers[count].name;
		inputFile >> programmers[count].lines;
		count++;
	}
	return count;
}

//returns the total of the lines field for all programmers
int calcTotalLines( Programmer programmers[], int numProgrammers )
{
	int totalLines = 0;
	for (int i = 0; i < numProgrammers; i++) {
		totalLines += programmers[i].lines;
	}
	return totalLines;
}

//returns the average lines coded for all programmers as a float
float calcAverageLines( Programmer programmers[], int numProgrammers )
{
	return (calcTotalLines(programmers, numProgrammers) / numProgrammers);
}

//return a string containing info for a particular programmer
string generateProgrammerInfo( Programmer theProgrammer )
{
	stringstream programerInfo;

	programerInfo << left << setw(10) << theProgrammer.programmer_id << setw(10) << theProgrammer.name << setw(10) << theProgrammer.lines;

	return programerInfo.str();
}

//generate report for all programmers
//call calcTotalLines, calcAverageLines, and generateProgrammerInfo functions
void generateProgrammerReport( ostream& output, Programmer programmers[], int numProgrammers )
{
	//just a stub!
	output << "These are all the programmers:" << endl;
   
	for( int i = 0; i < numProgrammers; i++ )
	{
		output << generateProgrammerInfo(programmers[i]) << endl; //this should output the programmer info for each programmer
	}
   
	output << "\nTotal lines = " << calcTotalLines(programmers, numProgrammers); //this should ouptut the total lines
	output << "\nAverage lines = " << calcAverageLines(programmers, numProgrammers); //this should output the average lines
	output << endl;
}