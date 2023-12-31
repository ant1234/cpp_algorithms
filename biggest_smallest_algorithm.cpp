#include <iostream>
using namespace std;

int main()
{
    // Problem 1: Write a program that inputs a character and outputs 
    // whether or not it is in the alphabet or not.

    int num1;
    int num2;
    int num3;

    cout << "Please enter 3 different numbers followed by a space : ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "the biggest number is : " << num1 << endl;
    } else if(num2 > num1 && num2 > num3) {
        cout << "the biggest number is : " << num2 << endl;
    }  else if(num3 > num1 && num3 > num2) {
        cout << "the biggest number is : " << num3 << endl;
    } 

    if (num1 < num2 && num1 < num3) {
        cout << "the smallest number is : " << num1 << endl;
    } else if(num2 < num1 && num2 < num3) {
        cout << "the smallest number is : " << num2 << endl;
    }  else if(num3 < num1 && num3 < num2) {
        cout << "the smallest number is : " << num3 << endl;
    } 

    return 0;
}