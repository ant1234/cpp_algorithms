/*
The Game of Eight

------------------

The game of 8 is played by 2 players. The game starts with the initial number 8 
(from here on refered to as the initial number). The first player will choose a 
number from 1 to 3 (from here on refered to as the chosen number). If the player 
inputs something outside of the 1 to 3 range it should be an error and the player 
must choose again. The initial number is subtracted by the chosen number. 
Then the next player's turn happens. The next player cannot choose the number 
that the last player chose. If the initial number goes to 0 on your turn, then you win. 
Otherwise if the number goes below 0, your opponent wins. The player should always 
see what choices are available to him when prompted to enter his choice. After the 
game is over, the user should be prompted whether they want to play again.

Write a program to solve this problem.

1. main game loop
2. begin game 
3. player1 chosen input, player 2 chosen input 
4. create a variable for the number 8 called initialNum
5. offer player a prompt with numbers available in range 
5. check players choice, return error if out of range 
6. initial number is subtracted by chosen number
7. the prompt changes to show the second player choices 
7. the next number cannot choose the previous number 

functions : 
*- main
*- startGame
- numbersAvailable
- validatePlayersChoice
- switchPlayer 
- endGame
*- playAgain
*/

#include <iostream>
#include <string>

int initialNum = 8;
int player1Input;
int player2Input;
bool playerSwitch = false;
int numbersAvailable[4] = {1, 2, 3, 4};
int arraySize = sizeof(numbersAvailable) / sizeof(numbersAvailable[0]);
int removeIndex = -1;

void playGame();
bool playAgain();

int main() {

    do {

        playGame();

    } while(playAgain());

    return 0;
}

void playGame() {
    
    if(!playerSwitch) {

        std::cout << "Player 1, please choose one of these numbers and press enter : " << std::endl;

        for (int i = 0; i < arraySize; i++) {
            std::cout << numbersAvailable[i] << std::endl;
        }
 
        std::cin >> player1Input;

        initialNum = initialNum - player1Input;

        if(initialNum == 0) {
            std::cout << "Player 1 is the winner!" << std::endl;
        }

        for (int i = 0; i < arraySize; ++i) {

            if (numbersAvailable[i] == player1Input) {
                removeIndex = i;
                break;
            }
        }

        if (removeIndex != -1) {

            for (int i = removeIndex; i < arraySize - 1; ++i) {
                numbersAvailable[i] = numbersAvailable[i + 1];
            }

            arraySize--;
            std::cout << std::endl;

        } else {
            std::cout << "Number not found in the array." << std::endl;
        }
        
        playerSwitch = true;

    } else {

        std::cout << "Player 2, please choose one of these numbers and press enter : " << std::endl;
        
        for (int i = 0; i < arraySize; i++) {
            std::cout << numbersAvailable[i] << std::endl;
        }

        std::cin >> player2Input;

        initialNum = initialNum - player2Input;


        if(initialNum < 0) {
            std::cout << "Player 2 is the winner!" << std::endl;
        }

        for (int i = 0; i < arraySize; ++i) {

            if (numbersAvailable[i] == player2Input) {
                removeIndex = i;
                break;
            }
        }

        if (removeIndex != -1) {

            for (int i = removeIndex; i < arraySize - 1; ++i) {
                numbersAvailable[i] = numbersAvailable[i + 1];
            }

            arraySize--;
            std::cout << std::endl;

        } else {
            std::cout << "Number not found in the array." << std::endl;
        }

        playerSwitch = false; 
    }
}

bool playAgain() {
    return true;
}
