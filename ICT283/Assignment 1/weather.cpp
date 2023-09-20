#include "weather.h"

weather::weather()
{
	windspeed = 0;
	solarradiation = 0;
	temperature = 0;
}
//specific constructor

weather::weather(float speed, float solarrad, float temp)
{
	windspeed = speed;
	solarradiation = solarrad;
	temperature = temp;
}

weather::~weather()
{}

void weather::SetWindSpeed(float speed)
{windspeed = speed;}

void weather::SetRadiation(float solarrad)
{solarradiation = solarrad;}

void weather::SetTemperature(float temp)
{temperature = temp;}

float weather::GetWindSpeed() const
{return windspeed;}

float weather::GetRadiation() const
{return solarradiation;}

float weather::GetTemperature() const
{return temperature;}

ostream& operator << (ostream &os, const weather &W)
{
    os<< W.windspeed<<", "<< W.temperature<<", "<< W.solarradiation;
    return os;
}

istream& operator >> (istream &in, weather &W)
{
    in>>W.windspeed>>W.temperature>>W.solarradiation;
    return in;
}
