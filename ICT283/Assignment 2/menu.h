#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <numeric>
#include <map>
#include <iterator>
#include <vector>
#include "date.h"
#include "time.h"
#include "weather.h"
#include "bstpointer.h"
using namespace std;
/**use typedef struct for option 5**/
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
    void readallfile();/** @brief read value from file, @return void */
    void printmenu1(BstPointer<float> BST);/** @brief print option no 1, @return void */
    void printmenu2(BstPointer<float> BST);/** @brief print option no 2, @return void */
    void printmenu3(BstPointer<float> BST);/** @brief print option no 3, @return void */
    void printmenu4(BstPointer<float> BST);/** @brief print option no 4, @return void */
    void printmenu5(BstPointer<float> BST);/** @brief print option no 5, @return void */
    int filecount;
    int error;
    int menu;

    int month;
    int year;
    int day;

    float avgspeed;
    float radiation;
    float avgtemp;

    float corrS_T;
    float corrS_R;
    float corrT_R;

    Date Dt;
    weather Wt;
    Time T;

    WindLogType H;
    ifstream filelist;
    vector<WindLogType> windlog;
    vector <float> windspeed;
    vector <float> solar;
    vector <float> temperature;
    BstPointer<float> bst;
};

#endif // MENU_H
