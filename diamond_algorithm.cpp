#include <iostream>
#include <string>
#include <vector>

int main()
{

    // Problem 5: Write a program to print the diamond star(*) pattern based on an input number. 
    int input = 0;
    std::cout << "Please an odd number : ";
    std::cin >> input;

    int halfDiamond = input / 2;
    int bottomTriangle = (2 * halfDiamond + 1);
    int bottomSpaces = (input - halfDiamond - 1);

    for (int i = 0; i < input; i++) { 

        // top half of the diamond.
        if(i < halfDiamond) {

            for (int j = 0; j < (input - i - 1); j++) { // spaces 
                std::cout << " ";  
            }

            for (int j = 0; j < (2 * i + 1); j++) { // stars 
                std::cout << "*";  
            }

        // bottom half of the diamond.
        } else {

            for (int j = 0; j < bottomSpaces; j++) { // spaces 
                std::cout << " ";  
            }

            for (int j = 0; j < bottomTriangle; j++) { // stars 
                std::cout << "*";  
            }

            bottomTriangle = bottomTriangle - 2;
            bottomSpaces = bottomSpaces + 1;

        }
        std::cout << std::endl;
    }
    return 0;
}