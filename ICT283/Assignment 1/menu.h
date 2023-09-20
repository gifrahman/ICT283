#ifndef MENU_H
#define MENU_H
#include <fstream>
#include <string>
#include <sstream>
#include <iostream> //input output stream like get information from file and get the output as well
#include <cstdlib> // convert string to int using atoi function
#include <cmath>   // to round the decimal number to whole number
#include "myvector.h"
#include "date.h"
#include "time.h"
#include "weather.h"
using namespace std;

typedef struct
{
    Date d ;
    Time t;
    weather w;
} WindLogType;

class menu
{
    public:

    void mainmenu();/** @brief main menu @return void */
    void readfile();/** @brief read value from file, @return void */
    void printmenu1();/** @brief print option no 1, @return void */
    void printmenu2();/** @brief print option no 2, @return void */
    void printmenu3();/** @brief print option no 3, @return void */
    void printmenu4();/** @brief print option no 4, @return void */
    int menu;
    int month = 1;
    int year = 1;
    float avgspeed = 0;
    float radiation = 0;
    float avgtemp = 0;
    Date Dt;
    weather Wt;
    MyVector<WindLogType> windlog; // is a realised vector.
};

#endif // MENU_H
