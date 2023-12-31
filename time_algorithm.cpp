#include <iostream>
using namespace std;

int main()
{

    // Problem 3: Write a program that takes in a number of seconds and 
    // outputs the time in this format: hh::mm::ss 
    // where hh is the hours, mm is the minutes, and ss is the seconds.

    float userInput;
    int seconds;
    int minutes;
    int hours;
    float secondsPercent;
    int secondsConvert;

    cout << "Please enter the amout of seconds you would like to convert : ";
    cin >> userInput;

    hours = userInput / 3600;
    minutes = (userInput / 60) - (hours * 60);

    secondsConvert =  int(userInput);
    seconds = ((userInput / 60) - (secondsConvert / 60)) * 60;

    cout << hours << "::" << minutes << "::" << seconds;
    return 0;
}