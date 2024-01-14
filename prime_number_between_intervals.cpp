#include <iostream>
#include <string>
#include <vector>

void primeNumber(int lower, int upper); 
std::string numberOutput;

int main() {

    // Problem 2: Write a function to find all prime numbers between two intervals.
    // Eg.
    // Input lower limit: 10 
    // Input upper limit: 50 
    // Output prime numbers between 10-50 are: 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47     int input;

    int inputLowerLimit;
    int inputUpperLimit;
    std::cout << "Please enter a number follow by a second higher number seperated by a space. : " << std::endl;
    std::cin >> inputLowerLimit >> inputUpperLimit;
    primeNumber(inputLowerLimit, inputUpperLimit);

    return 0;
} 

// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
void primeNumber(int lower, int upper) {
    for (int i = lower; i <= upper; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime && i > 1) {
            std::cout << "Prime: " << i << std::endl;
        }
    }
}