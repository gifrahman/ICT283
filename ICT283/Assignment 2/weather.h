//Doxygen comments are placed .h files
// All commands in the documentation start with a backslash (\) or an at-sign
// Use one or the other and stay with it.
// Read the doxygen manual. The above instruction is taken from section 21.
// Summary with links are found there.
//---------------------------------------------------------------------------------
#ifndef WEATHER_H
#define WEATHER_H
#include <iostream>

using namespace std;
/**
	 * @class weather
	 * @brief  To Display the requirement like wind speed, solar radiation, and air ambient temperature for weather log
	 * @author Giffari Rahman
	 * @version 01
	 * @date 17/10/2019
	 */
class weather
{
    public:
        weather();
        /**
        * @brief  Clears all loaded models and templates
        * This function will clear all the display lists and BDL data associated with the specific instance of this class.
        * @return void
        */
        ~weather();
        /**
        * @brief destructor method
        * @return
        */
        weather(float speed, float solarrad, float temp);
        /**
        * @brief this is specific constructor. so the aim of this method is to set the wind speed, air ambient temperature
        * and solar radiation
        * @return void
        */
        void SetWindSpeed(float speed);/** @brief set the average wind speed value, @param speed, @return void */
        void SetRadiation(float solarrad);/** @brief set the total solar radiation value, @param solarrad, @return void */
        void SetTemperature(float temp);/** @brief set the average air ambient temperature value, @param temp, @return void */

        float GetWindSpeed() const;/** @brief get the average wind speed value  @return windspeed */
        float GetRadiation() const;/** @brief get the total solar radiation value  @return solarradiation */
        float GetTemperature() const;/** @brief get the average air ambient temperature value  @return temperature */

        //friend function. the function is like accessing private data members
        friend ostream& operator << (ostream &os, const weather &W); /** @brief to display the output from the file  @return os */
	    friend istream& operator >> (istream &in, weather &W);/** @brief to get the information from the file  @return in */
    private:
    float windspeed;// variable for average wind speed
    float solarradiation;// variable for total solar radiation
    float temperature;// variable for average air ambient temperature
};
#endif // WEATHER_H
