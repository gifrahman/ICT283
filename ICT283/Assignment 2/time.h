//Doxygen comments are placed .h files
// All commands in the documentation start with a backslash (\) or an at-sign
// Use one or the other and stay with it.
// Read the doxygen manual. The above instruction is taken from section 21.
// Summary with links are found there.
//---------------------------------------------------------------------------------
#ifndef TIME_H // ifndef : if not defined
#define TIME_H
#include <iostream>

using namespace std;
/**
	 * @class Time
	 * @brief  To Display the time for weather recording data
	 * @author Giffari Rahman
	 * @version 01
	 * @date 09/10/2019
	 */
class Time
{
    public:
	//default constructor: must have the same name as the file
	Time();
	 /**
        * @brief  Clears all loaded models and templates
        * This function will clear all the display lists and BDL data associated with the specific instance of this class.
        * @return void
        */
	// specific constructor
	Time (int hours, int minutes);
	 /**
        * @brief this is specific constructor. so the aim of this method is to set the hours and minutes
        * @return void
        */
	virtual ~Time(); // destructor
        /**
        * @brief destructor method
        * @return
        */
	//setters
	void setHour (int hours);/** @brief set the hour value, @param hours, @return void */
	void setMinute (int minutes);/** @brief set the minute value, @param minutes, @return void */
	void setTime (int hours, int minutes);/** @brief set time, @param (hours,minutes), @return void */

	//getters
	int getHour () const; /** @brief get the hour value  @return hour */
	int getMinute () const;/** @brief get the minute value  @return minute */
	int getTime () const;/** @brief get time value together @return hour + ":" + minute */

    //friend function. the function is like accessing private data members
    friend ostream& operator << (ostream &os, const Time &T); /** @brief to display the output from the file  @return os */
	friend istream& operator >> (istream &in, Time &T);/** @brief to get the information from the file  @return in */

    private:
	// data members
	int hour; // variable for hours
	int minute; // variable for minutes
};
#endif //TIME_H
