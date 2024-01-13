#include <iostream>
#include <string>
#include <vector>

bool primeNumber(int num); 
bool isPrime;
std::string numberOutput;

int main() {

    // Problem : Write a function that takes in an integer and returns true if the integer is a prime number.
    int input;

    std::cout << "Please enter a single number : " << std::endl;
    std::cin >> input;
    std::cout << "The numer is a prime : " << primeNumber(input) << std::endl;
    return 0;
}

bool primeNumber(int num) {

    for(int i = 2; i <= num / 2; i++) {

        if(num % 2 == 0) {
            isPrime = false;
            break;
        } else {
            isPrime = true;
            break;
        }
    }

    return isPrime;
}