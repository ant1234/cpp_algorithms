#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Problem 3: Write a program to count frequency of digits in an integer. 

    // Example: 
    // Input num: 116540
    // Output: 
    // Frequency of 0 = 1 
    // Frequency of 1 = 2 
    // Frequency of 2 = 0 
    // Frequency of 3 = 0 
    // Frequency of 4 = 1 
    // Frequency of 5 = 1 
    // Frequency of 6 = 1 
    // Frequency of 7 = 0 
    // Frequency of 8 = 0 
    // Frequency of 9 = 0 

    std::string digits;
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    
    std::cout << "Enter in number and the application will count the frequency of each digit : ";
    std::cin >> digits;

    // Loop through each character (digit) in the string and convert to int, then store in the vector
    for (size_t i = 0; i < digits.length(); i++) {
        int digit = digits[i] - '0'; // Convert char to int
        switch(digit){
            case 0:
            zero++;
            break;
            case 1:
            one++;
            break;
            case 2:
            two++;
            break;
            case 3:
            three++;
            break;
            case 4:
            four++;
            break;
            case 5:
            five++;
            break;
            case 6:
            six++;
            break;
            case 7:
            seven++;
            break;
            case 8:
            eight++;
            break;
            case 9:
            nine++;
            break;
            default: 
            std::cout << "please enter only numbers 0 - 9" << std::endl;
        }      
    }

    std::cout << "frequency of 0 = " << zero;
    std::cout << "frequency of 1 = " << one;
    std::cout << "frequency of 2 = " << two;
    std::cout << "frequency of 3 = " << three;
    std::cout << "frequency of 4 = " << four;
    std::cout << "frequency of 5 = " << five;
    std::cout << "frequency of 6 = " << six;
    std::cout << "frequency of 7 = " << seven;
    std::cout << "frequency of 8 = " << eight;
    std::cout << "frequency of 9 = " << nine;

    return 0;
}