#include <iostream>
using namespace std;

int main()
{
    // Problem 1: Write a program to input number of days from user and convert it to years, 
    // weeks and days. Ignore leap years.
    int userEnteredDays;
    int days;
    int weeks;
    int years;
    const int DAYS_IN_YEAR = 365;
    const int WEEKS_IN_YEAR = 52;

    cout << "Please enter the number of days you would like to convert: ";
    cin >> userEnteredDays;

    // number of years 
    years = userEnteredDays / DAYS_IN_YEAR;

    // number of months
    weeks = userEnteredDays / (DAYS_IN_YEAR / WEEKS_IN_YEAR);

    cout << "The number of years is : " << years << endl;
    cout << "The number of weeks is : " << weeks << endl;
    cout << "The number of days is : " << userEnteredDays << endl;

    return 0;
}