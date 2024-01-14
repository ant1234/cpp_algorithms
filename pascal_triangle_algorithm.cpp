#include <iostream>
#include <string>
#include <vector>
#include <cmath>

long long  pascalTriangle(int i, int j, int n); 

int main() {

    // Problem : Write a function that takes in an integer and returns true if the integer is a prime number.
    //     1       // 4 spaces 
    //    1 1      // 3 spaces
    //   1 2 1     // 2 spaces
    //  1 3 3 1    // 1 space
    // 1 4 6 4 1   // 0 spaces

    int input;

    std::cout << "Please enter a single number for the triangle : " << std::endl;
    std::cin >> input;

    for(int i = 0; i < input; i++) {
   
        for (int j = 0; j < (input - i); j++) {  
            std::cout << " ";  
        }

        for (int j = 0; j <= i; j++) { 
            std::cout << pascalTriangle(i, j, input) << " ";  
        }
    
    std::cout << std::endl;

   }

    return 0;
}

long long  pascalTriangle(int i, int j, int n) {

    if (i == 0 || i == n) {
        return 1;
    }

    if (j == 0 || i == j) {
        return 1;
    }

    long long result = i;

    return result;

}

//     1 = with i  
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 4 4 1 

//     1 = with j
//    1 1 
//   1 1 1 
//  1 1 2 1 
//  1 1 2 3 1 