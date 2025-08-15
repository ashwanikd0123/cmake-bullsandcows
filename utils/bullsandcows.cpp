#include "bullsandcows.h"
#include "utils.h"

#include <unordered_set>

BullsAndCows::BullsAndCows() {
    generateSecret();
}

void BullsAndCows::generateSecret() {
    secret = generateRandomSecret(4);
}

std::string BullsAndCows::getSecret() const {
    return secret;
}

int BullsAndCows::getBulls(const std::string& guess) {
    int res = 0;
    for (int i = 0; i < secret.size(); i++) {
        if (secret[i] == guess[i]) {
            res++;
        }
    }
    return res;
}

int BullsAndCows::getCows(const std::string& guess) {
    std::unordered_set<char> secretSet;
    std::unordered_set<char> guessSet;

    int res = 0;
    for (int i = 0; i < secret.size(); i++) {
        if (secret[i] == guess[i]) {
            continue;
        }

        if (secretSet.find(guess[i]) != secretSet.end()) {
            res++;
            secretSet.erase(guess[i]);
        }
        else {
            guessSet.insert(guess[i]);
        }

        if (guessSet.find(secret[i]) != guessSet.end()) {
            res++;
            guessSet.erase(secret[i]);
        }
        else {
            secretSet.insert(secret[i]);
        }
    }

    return res;
}

bool BullsAndCows::isValidGuess(const std::string& guess) {
    if (guess.size() != 4) {
        return false;
    }
    for (char c : guess) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}
