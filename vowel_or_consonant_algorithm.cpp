#include <iostream>
using namespace std;

int main()
{
    // Problem 4: Write a program to enter any alphabet and check whether alphabet 
    // is vowel or consonant using switch case.

    char userInput;

    cout << "Please enter an alphabet character : ";
    cin >> userInput;

    switch(userInput) {
        case 'a':
        cout << "the character is a vowel." << endl;
        break;
        case 'e':
        cout << "the character is a vowel." << endl;
        break;
        case 'i':
        cout << "the character is a vowel." << endl;
        break;
        case 'o':
        cout << "the character is a vowel." << endl;
        break;
        case 'u':
        cout << "the character is a vowel." << endl;
        break;
        default:
        cout << "the character is a consonant." << endl;
        break;
    }

    return 0;
}