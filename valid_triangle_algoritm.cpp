#include <iostream>
using namespace std;

int main()
{
    // Problem 3: Write a program that enters 3 sides of a triangle checks 
    // whether the triangle is valid or not. Remember that a triangle is valid 
    // if and only if the sum of any two sides is greater than the third side.

    int num1;
    int num2;
    int num3;

    cout << "Please enter 3 different sides of a triangle followed by a space : ";
    cin >> num1 >> num2 >> num3;

    if ((num2 * num3) > num1 && (num1 * num3) > num2 && (num1 * num2) > num3) {
        cout << "the triangle you have inputted is a valid" << endl;
    } else {
        cout << "the triangle you have inputted is not valid" << endl;
    }
    return 0;
}