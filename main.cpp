/** Jennifer Byrne
    15/11/2017
    Lab 11
    Tomorrows Date Calculator */

/** Preprocessor directives */
#include <iostream>
#include <iomanip>
/** allows getchar() */
#include <cstdio>
/** allows system(cls) */
#include <windows.h>
#include <math.h>

/** Enables cout, cin and endl */
using namespace std;

/** Declaring structure containing day, month and year */
struct date
{
    int day ;
    int month ;
    int year ;
};
/** Main function */
int main()
{
    /** declaring monthlength array, and assigning valuse to each location in memory */
    int monthlength [12] = {31, 28, 31, 30, 30, 30, 31, 31, 30, 31, 30, 31};

    /** declaring structure date, today and tomorrow */
    struct date today, tomorrow;

    /** reading in values for todays date */
    cout << "Enter Todays Date\n\n" ;
    cout << "Day :\t" ;
    cin >> today.day ;
    cout << "Month :\t" ;
    cin >> today.month;
    cout << "Year :\t" ;
    cin >> today.year;

    /** display todays date */
    cout << "\n\nTodays Date is :\t" << today.day << "/" << today.month << "/" << today.year << endl;

    /** if statement to calculate leap year */
    if(today.year % 4 == 0)
    {
        if(today.year % 100 == 0)
        {
            if(today.year % 400 == 0)
            {
                monthlength[1] = 29;
            }
        }
        else
        {
            monthlength[1] = 29;
        }
    }

    /** increment day month and year in if and else statements */
    if(today.day >= monthlength[today.month -1])
    {
        if (today.month == 12)
        {
            tomorrow.day = 1;
            tomorrow.month = 1;
            tomorrow.year = today.year + 1;
        }
        else
        {
            tomorrow.day = 1;
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        }
    }
    else
    {
        tomorrow.day = today.day +1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    /** Display tomorrows date */
    cout << "\n\nTomorrows Date is :\t" << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << endl;

    /** Terminate main function */
    return 0;
}
