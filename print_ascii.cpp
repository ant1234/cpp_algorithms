#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Problem 2: Write a program to print ASCII values of all characters using for loop. 
    // Example: 
    // Output ASCII values: 
    // ASCII value of character = 0
    // ASCII value of character ☺ = 1
    // ASCII value of character ☻ = 2

    
    std::string digit = "123123"; // Replace this with your integer value
    char asciiChar; // Convert integer to ASCII character


    std::cout << "Enter in a binary sequence and press enter : ";
    std::cin >> digit;

    // Loop through each character (digit) in the string and convert to int, then store in the vector
    for (size_t i = 0; i < digit.length(); ++i) {
        asciiChar = digit[i] + '0';
        std::cout << asciiChar << std::endl;
    }



    return 0;
}