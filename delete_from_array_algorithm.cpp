/*
    Problem 4: Write a program to delete an element from an array at specified position. 
    The program should also print an error message if the delete position is invalid. 
    There should be no empty elements between the numbers.

    Example: 
    If the array elements are - 10, 20, 30, 40, 50 
    After deleting element at position 2
    Elements of array - 10, 30, 40, 50 
*/

#include <iostream>
#include <cstring>

void deleteInArray(int arr[], int position, int limit);

int main() {

    int limit = 5;
    int arr[limit] = {10, 20, 30, 40, 50};
    int position = 2;

    deleteInArray(arr, position, limit);

    return 0;
}

void deleteInArray(int arr[], int position, int limit) {

    int newArr[limit] = {};

    if (position < 0 || position >= limit || limit <= 0) {
        std::cout << "Invalid position or empty array." << std::endl;
        return;
    }

    // Shift elements to fill the gap
    for (int i = position; i < limit - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Reduce the limit to reflect the removal
    --limit;

    for(int j = 0; j < limit; j++) {
        std::cout << arr[j] << std::endl;

    }

}


 

