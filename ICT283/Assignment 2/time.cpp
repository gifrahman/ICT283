#include "time.h"
#include <iostream>

using namespace std;

//default constuctor
Time::Time ()//headeer file name :: header file function
{
	hour = 00;
	minute = 00;
}

//specific constructor
Time::Time (int hours, int minutes)
{
	hour = hours;
	minute = minutes;
}

//destructor
Time::~Time ()
{}

//setters
void Time::setHour (int hours)
{hour = hours;}

void Time::setMinute (int minutes)
{minute = minutes;}

void Time::setTime (int hours, int minutes)
{
    hour = hours;
    minute = minutes;
}

//getters
int Time::getHour () const
{return hour;}

int Time::getMinute () const
{return minute;}

istream &operator >> (istream &in, Time &T)
{
    in >> T.hour >> T.minute ;
    return in;
}

ostream &operator << (ostream &os, const Time &T)
{
    if(T.hour < 10 && T.minute <10)
    {os << "0" << T.hour << ":" << T.minute<<"0";}
    else if(T.hour < 10 && T.minute >=10)
    {os << "0" << T.hour << ":" << T.minute;}
    else if(T.minute < 10 && T.hour >= 10)
    {os << T.hour << ":" << T.minute<<"0";}
    else
    {os << T.hour << ":" << T.minute;}

    return os;
}
