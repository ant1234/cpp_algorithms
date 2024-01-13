#include <iostream>
#include <string>
#include <vector>

std::string primeNumber(int num); 
std::string numberOutput;

int main() {

    // Problem : Write a function that takes in an integer and returns true if the integer is a prime number.
    int input;

    std::cout << "Please enter a single number : " << std::endl;
    std::cin >> input;
    std::cout << "The numer is a prime : " << primeNumber(input) << std::endl;
    return 0;
}

std::string primeNumber(int num) {

    std::string isPrime = "yes";

    for(int i = 2; i < num; i++) {

        // 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97

        if(num % i == 0) {
            isPrime = "no";
            break;
        }
    }

    return isPrime;
}