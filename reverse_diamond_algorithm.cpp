#include <iostream>
#include <string>
#include <vector>

int main() {

    // Problem 6: Write a program to print the reverse of the diamond star(*) pattern based on an input number. 

    /* 
        ********** 10 stars and 0 spaces
        ****  **** 8 stars and 2 spaces
        ***    *** 6 stars and 4 spaces
        **      ** 4 stars and 6 spaces
        *        * 2 stars and 8 spaces
        *        * 2 stars and 8 spaces 
        **      ** 4 stars and 6 spaces
        ***    *** 6 stars and 4 spaces
        ****  **** 8 stars and 2 spaces
        ********** 10 stars and 0 sapces
    
    */
    int input = 0;
    std::cout << "Please entern an even number : ";
    std::cin >> input;

    int halfDiamond = input / 2;
    int bottomStars = halfDiamond;
    int bottomSpaces = halfDiamond;

    for(int i = 0; i < input; i++) {

        // top half of the diamond.
        if(i < halfDiamond) {

            for(int stars_row = 0; stars_row < halfDiamond - i; stars_row++) {
                std::cout << "*";
            }

            for(int spaces_row = 0; spaces_row < i; spaces_row++) {
                std::cout << " ";
            }
            
            for(int spaces_row = 0; spaces_row < i; spaces_row++) {
                std::cout << " ";
            }

            for(int stars_row = 0; stars_row < halfDiamond - i; stars_row++) {
                std::cout << "*";
            }

        // bottom half of the diamond.
        } else {

            for(int stars_row = 0; stars_row < (i - halfDiamond) + 1; stars_row++) {
                std::cout << "*";
            }

            for(int spaces_row = 0; spaces_row < (input - i) - 1; spaces_row++) {
                std::cout << " ";
            }

            for(int spaces_row = 0; spaces_row < (input - i) - 1; spaces_row++) {
                std::cout << " ";
            }

            for(int stars_row = 0; stars_row < (i - halfDiamond) + 1; stars_row++) {
                std::cout << "*";
            }

        }

        std::cout << std::endl;

    }

    return 0;
}