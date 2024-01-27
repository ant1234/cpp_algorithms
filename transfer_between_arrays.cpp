/*
    Problem 2: Write a program to read elements in an array and copy 
    all elements of first array into second array.
*/

#include <iostream>
#include <cstring>

const int LIMIT = 3;


int main() {


    int first[LIMIT] = {1, 2, 3};
    int second[LIMIT] = {4, 5, 6};

    for(int i = 0; i < LIMIT; i++) {

        int tempFirst = first[i];
        int tempSecond = second[i];

        first[i] = tempSecond; 
        second[i] = tempFirst;
    }

    return 0;
}

