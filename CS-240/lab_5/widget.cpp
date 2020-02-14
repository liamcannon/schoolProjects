/*
Author: Liam Cannon
Class : CSI-240
Assignment : Module-05-Lab Assignment 5 - Widgets
Date Due: 2/7/20

  Description : To create and assign id's and names to different widgets
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

#include "widget.h"
#include <sstream>
#include <string>

int Widget::wCount = 1;

Widget::Widget(WidgetType type)
{
    wType = type;
    wID = wCount++;
    generateModelName();
}

Widget::Widget(const Widget &rhs)
{
    wType = rhs.wType;
    wID = wCount++;
    generateModelName();
}

void Widget::generateModelName()
{
    stringstream widgetName;
    widgetName << WIDGET_NAMES[wType] << " " << wID << this;
    wModelName = widgetName.str();
}