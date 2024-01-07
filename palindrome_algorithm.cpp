#include <iostream>
#include <string>
#include <vector>

int main()
{

    // Problem 4: Write a program to enter any number and check whether given number is 
    // palindrome or not using a for loop. Eg 121 would be a palindrome. 
    std::string input;
    std::string output;
    std::cout << "Please enter a number and the program will output whether it's a palindrome. : ";
    std::cin >> input;

        // reverse input
    for (int i = input.length() - 1; i >= 0; i--) {
        int digit = input[i] - '0'; // Convert char to int
        output += std::to_string(digit);  
    }

    if(output == input) {
        std::cout << "The output is a palindrome";
    } else {
        std::cout << "The output is not a palindrome";
    }

    return 0;
}