#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Problem 1: Write a program to read binary number from user and find the one's 
    // complement of that binary number.
    // Example: 
    // Input binary number: 01000011 
    // ones's complement: 10111100 

    
    std::string sequence = ""; // Replace this with your sequence of 0's and 1's
    std::string result;

    std::cout << "Enter in a binary sequence and press enter : ";
    std::cin >> sequence;

    // Loop through each character (digit) in the string and convert to int, then store in the vector
    for (size_t i = 0; i < sequence.length(); ++i) {
        int digit = sequence[i] - '0'; // Convert char to int
        int reverse = !digit; // reverse the boolean
        result += std::to_string(reverse);        
    }


    std::cout << result << std::endl;

    return 0;
}