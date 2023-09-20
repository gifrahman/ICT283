//Doxygen comments are placed .h files
// All commands in the documentation start with a backslash (\) or an at-sign
// Use one or the other and stay with it.
// Read the doxygen manual. The above instruction is taken from section 21.
// Summary with links are found there.
//---------------------------------------------------------------------------------
#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
	/**
	 * @class Date
	 * @brief  To Display the date for weather recording data
	 * @author Giffari Rahman
	 * @version 01
	 * @date 09/10/2019
	 */
class Date
{
    public:
        Date();
        /**
        * @brief  Clears all loaded models and templates
        * This function will clear all the display lists and BDL data associated with the specific instance of this class.
        * @return void
        */
        Date(int days, int months, int years, string name);
        /**
        * @brief this is specific constructor. so the aim of this method is to set the date
        * @return void
        */
        virtual ~Date(); // destructor
        /**
        * @brief  destructor method
        * @return
        */
	    //setters
	    void setDay (int days);/** @brief set the day value, @param days, @return void */
	    void setMonth (int months);/** @brief set the month value, @param months, @return void */
	    void setYear (int years);/** @brief set the year value, @param years, @return void */
	    void setDate (int days, int months, int years);/** @brief set the date value, @param (days,months,years), @return void */
        void setname(string name); /** @brief convert from month in number to name of the month, @param name, @return void */
        //getters
        string monthConvert(const int monthnumber);/** @brief convert from month in number into name of the month  @return monthname*/
        string getname () const;/** @brief get the name of month value  @return monthname*/
	    int getDay () const;/** @brief get the day value  @return day */
	    int getMonth () const;/** @brief get the month value  @return month */
	    int getYear () const;/** @brief get the year value  @return year */
	    int getDate () const;/** @brief get the date value  @return day+"/"+month+"/"+year */

        //friend function. the function is like accessing private data members
	    friend ostream &operator << (ostream &os, const Date &D);/** @brief to display the output from the file  @return os */
	    friend istream &operator >> (istream &in, Date &D);/** @brief to get the information from the file  @return in */

    private:
        int day;//day variable
        int month;//month variable
        int year;//year variable
        string monthname;
};
#endif // date_h
