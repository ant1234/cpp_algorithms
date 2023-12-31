#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // Problem 1: Write a program that inputs a character and outputs 
    // whether or not it is in the alphabet or not.

    char userInput;

    cout << "Please enter a character : ";
    cin >> userInput;

    if (isalpha(userInput)) {
        std::cout << "The character is alphabetic." << std::endl;
    } else {
        std::cout << "The character is not alphabetic." << std::endl;
    }

    return 0;
}