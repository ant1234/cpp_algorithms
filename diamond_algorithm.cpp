#include <iostream>
#include <string>
#include <vector>

int main()
{

    // Problem 5: Write a program to print the diamond star(*) pattern based on an input number. 
    int input = 0;
    std::cout << "Please enter size for the diamond by entering a number followed by a space and another number : ";
    std::cin >> input;

    int half = input / 2;


    for (int i = 0; i < input; i++) { 

    
        if(i < half) {
            for (int j = 0; j < (input - i - 1); j++) { // spaces 
                std::cout << " ";  
            }

            for (int j = 0; j < (2 * i + 1); j++) { // stars 
                std::cout << "*";  
            }
        } else {

            // for (int j = 0; j < (input + i + 1); j++) { // spaces 
            //     std::cout << " ";  
            // }

            
            for (int j = 0; j < (2 * i - 2); j++) { // stars 
                std::cout << "*";  
            }


        }


        std::cout << std::endl;

    }

    return 0;
}