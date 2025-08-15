#include "bullsandcows.h"
#include <iostream>
int main() {
    BullsAndCows game;
    std::cout << 
                "Welcome to Bulls and Cows!\n" << 
                "Try to guess a 4-digit secret in minimum possible attempts.\n" <<
                "Bulls are correct digits in the correct position.\n" <<
                "Cows are correct digits but in the wrong position.\n";
    std::string guess;
    int guessCount = 0;
    while (std::strcmp(guess.data(), game.getSecret().data()) != 0) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (!game.isValidGuess(guess)) {
            std::cout << "Invalid input! Please enter a 4-digit number.\n";
            continue;
        }
        
        int bulls = game.getBulls(guess);
        int cows = game.getCows(guess);
        std::cout << "Bulls: " << bulls << ", Cows: " << cows << "\n";
        guessCount++;
    }
    std::cout << "Congratulations! You've guessed the secret: " << game.getSecret() << "\n";
    std::cout << "Total attempts: " << guessCount << "\n";
    return 0;
}