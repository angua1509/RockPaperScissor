/*Write a rock_paper_scissors.cpp program that:

Prompt the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instruct the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compare the user's choice and the computer's choice and determine the winner.
Inform the user who the winner is.
Note: This project will be particularly challenging due to its complex logic. Beware!
Only the brave should venture forth.
Scissors cuts Paper
Paper covers Rock
Rock crushes Lizard
Lizard poisons Spock
Spock smashes Scissors
Scissors decapitates Lizard
Lizard eats Paper
Paper disproves Spock
Spock vaporizes Rock
(and as it always has) Rock crushes Scissors
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

int main() {
    int user {};
    
        std::cout << "Pick your weapon: \n";
        std::cout << "1) Rock\n";
        std::cout << "2) Paper\n";
        std::cout << "3) Scissors\n";
        std::cout << "4) Lizzard\n";
        std::cout << "5) Spock\n";
        std::cout << "6) to quit Game\n";
        std::cin >> user;
        
        srand (time(NULL));
        int computer = rand() % 5 + 1;
        
        std::cout << computer << std::endl;
        
        int reason {};
        bool you_win {false};
        
        if (user == computer){
            std::cout << "You tie!\n";
            return 0;
            } else if (user == 3 && computer == 2) {    // Scissors 3 cut Paper 2
            you_win = true;
            reason = 1;
            } else if (user == 2 && computer == 3) {
                reason = 1;
            } else if (user == 2 && computer == 1) {    // Paper 2 covers Stone 1
                you_win = true;
                reason = 2;
            } else if (user == 1 && computer == 2) {
                reason = 2;
            } else if (user == 1 && computer == 3) {    // Rock 1 smashes Scissors 3
                you_win = true;
                reason = 3;
            } else if (user == 3 && computer == 1) {
                reason = 3;
            } else if (user == 1 && computer == 4) {    // Rock 1 smashes Lizzard 4
                you_win = true;
                reason = 4;
            } else if (user == 4 && computer == 1) {
                reason = 4;
            } else if (user == 4 && computer == 5) {    // Lizard 4 poisons Spock 5
                you_win = true;
                reason = 5;
            } else if (user == 5 && computer == 4) {
                reason = 5;
            } else if (user == 5 && computer == 3) {    // Spock 5 smashes Scissors 3
                you_win = true;
                reason = 6;
            } else if (user == 3 && computer == 5) {
                reason = 6;
            } else if (user == 3 && computer == 4) {    // Scissors 3 decapitates Lizard 4
                you_win = true;
                reason = 7;
            } else if (user == 4 && computer == 3) {    
                reason = 7;
            } else if (user == 4 && computer == 2) {    // Lizard 4 eats Paper 2
                you_win = true;
                reason = 8;
            } else if (user == 2 && computer == 4) {
                reason = 8;
            } else if (user == 2 && computer == 5) {    // Paper 2 disproves Spock 5
                you_win = true;
                reason = 9;
            } else if (user == 5 && computer == 2) {
                reason = 9;
            } else if (user == 5 && computer == 1) {    // Spock 5 vaporizes Rock 1
                you_win = true;
                reason = 10;
            } else if (user == 1 && computer == 5) {
                reason = 10;
            } else 
                std::cout << "invalid input, try again";
        
        if (you_win){
            std::cout << "You win!\n";
        } else 
            std::cout << "Computer wins!\n";
        
        switch (reason){
            case 1: 
                std::cout << "Scissors cuts Paper\n";
                break;
            case 2 :
                std::cout << "Paper covers Rock\n";
                break;
            case 3:
                std::cout << "Rock crushes Scissors\n";
                break;
            case 4:
                std::cout << "Rock crushes Lizard\n";
                break;
            case 5:
                std::cout << "Lizard poisons Spock\n";
                break;
            case 6:
                std::cout << "Spock smashes Scissors\n";
                break;
            case 7:
                std::cout << "Scissors decapitates Lizard\n";
                break;
            case 8:
                std::cout << "Lizard eats Paper\n";
                break;
            case 9:
                std::cout << "Paper disproves Spock\n";
                break;
            case 10:
                std::cout << "Spock vaporizes Rock\n";
                break;
            default: 
                std::cout << "invalid input\n";
                break;
        }
    return 0;
    }
