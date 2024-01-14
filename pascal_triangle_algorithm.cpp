#include <iostream>
#include <string>
#include <vector>


void pascalTriangle(int num); 

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

    pascalTriangle(input);

    return 0;
}

void pascalTriangle(int num) {

   for(int i = 0; i < num; i++) {
   
    for (int j = 0; j < (num - i); j++) {  
        std::cout << " ";  
    }

    for (int j = 0; j <= i; j++) { 
        std::cout << 1 << " ";  
    }
    
    std::cout << std::endl;

   }

}