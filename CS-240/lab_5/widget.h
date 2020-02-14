//
//  widget.h
//  widget
//
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall

#ifndef __widget__widget__
#define __widget__widget__

#include <string>

using namespace std;

enum WidgetType
{
	INVALID_TYPE = -1,
	WEATHER,
	QUOTE,
	STOCK,
	NUM_WIDGET_TYPES
};


const string WIDGET_NAMES[NUM_WIDGET_TYPES] = {	"Weather2000",
   "Of-The-Day",
   "Ups-and-Downs"
};


class Widget
{
public:
	Widget( WidgetType type );
	Widget( const Widget& rhs ); //copy constructor

	string getModelName() const { return wModelName; };
   
private:
	WidgetType wType;
	int wID;
	string wModelName;
   //add static data member
    static int wCount;
	void generateModelName();
};


#endif /* defined(__widget__widget__) */
