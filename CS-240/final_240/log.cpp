/*
Author: Liam Cannon
Class : CSI-240
Assignment : CS-240 FINAL
Date Due: 4/28/20

  Description : Hotel Creation Text based
  Certification of Authenticity :
    I certify that this is entirely my own work, except where I have given
    fully - documented references to the work of others.I understand the
    definitionand consequences of plagiarismand acknowledge that the assessor
    of this assignment may, for the purpose of assessing this assignment :
    -Reproduce this assignmentand provide a copy to another member of
    academic staff;and /or
    -Communicate a copy of this assignment to a plagiarism checking
    service(which may then retain a copy of this assignment on its
      database for the purpose of future plagiarism checking)
*/
#include <iostream>
#include "log.h"

void log(std::string logStr)
{
    std::ofstream log;
    log.open(LOG_FILE_NAME, std::ios_base::app);

    log << std::endl;
    log << logStr << std::endl;
    log.close();
}

void logProgStart()
{
    time_t startTime = time(nullptr);
    log("Start program @ " + (std::string)(asctime(localtime(&startTime))));
}