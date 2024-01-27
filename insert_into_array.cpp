/*
    Problem 3: Write a program to insert an element in 
    array at specified position.
*/

#include <iostream>
#include <cstring>

void insertIntoArray(int arr[], int position, int numberToInsert, int limit);

int main() {

    int limit = 3;
    int arr[limit] = {1, 2, 3};
    int position = 2;
    int numberToInsert = 34;

    insertIntoArray(arr, position, numberToInsert, limit);

    return 0;
}

void insertIntoArray(int arr[], int position, int numberToInsert, int limit ) {

    for(int i = 0; i < limit; i++) {

        if(arr[i] == position) {
            arr[i] = numberToInsert;
        }

        std::cout << arr[i] << std::endl;

    }
}


 

