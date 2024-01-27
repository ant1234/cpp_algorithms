/*
    Problem 1: Write a function that will reverse a C String. 
    For example if the string was "Hello" it should be reversed to "olleH"
*/

#include <iostream>
#include <cstring>

char reverseString(char* cString, int length);


int main() {

    char cString[] = "hello";
    int length = strlen(cString);

    reverseString(cString, length);

    return 0;
}

char reverseString(char* cString, int length) {

    char reverseString[length] = "";

    for(int i = 0; i < length; i++) {
        reverseString[i] = cString[length - i - 1]; 
    }

    std::cout << "Reversed string: " << reverseString << std::endl;

    return reverseString[0];
}
