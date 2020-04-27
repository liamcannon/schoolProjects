#ifndef LOG_H
#define LOG_H
#include <fstream>
#include <iostream>

using namespace std;

ofstream logfile;

void log(string log) {
    logfile.open("log.txt", ofstream::app);
    logfile << log << endl;
    logfile.close();
}


#endif