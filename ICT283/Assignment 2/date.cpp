#include <iostream>
#include "date.h"

//default constuctor
Date::Date ()//headeer file name :: header file function
{
	day = 1;
	month = 1;
	year = 2000;
}

//specific constructor
Date::Date (int days, int months, int years, string name)
{
	day = days;
	month = months;
	year = years;
	monthname = name;
}

//destructor
Date::~Date (){}

//setters
void Date::setDay (int days)
{day = days;}

void Date::setMonth (int months)
{month = months;}

void Date::setYear (int years)
{year = years;}

void Date::setname(string name)
{monthname = name;}

void Date::setDate (int days, int months, int years)
{
    day = days;
    month = months;
    year = years;
}

//getters
int Date::getDay () const
{return day;}

int Date::getMonth () const
{return month;}

int Date::getYear () const
{return year;}

string Date::getname () const
{return monthname;}

string Date::monthConvert(const int month)
{
    switch(month)
    {
        case 1:
            monthname="January";
            break;
        case 2:
            monthname="February";
            break;
        case 3:
            monthname="March";
            break;
        case 4:
            monthname="April";
            break;
        case 5:
            monthname="May";
            break;
        case 6:
            monthname="June";
            break;
        case 7:
            monthname="July";
            break;
        case 8:
            monthname="August";
            break;
        case 9:
            monthname="September";
            break;
        case 10:
            monthname="October";
            break;
        case 11:
            monthname="November";
            break;
        case 12:
            monthname="December";
            break;
        default:
            monthname="Invalid";
    }
    return monthname;
}

istream &operator >> (istream &in, Date &D)
{
    in >> D.month >> D.year;
    return in;
}

ostream &operator << (ostream &os, const Date &D)
{
    os << D.monthname;
    return os;
}
