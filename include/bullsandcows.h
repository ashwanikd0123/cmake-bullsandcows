#pragma once
#include <string>

class BullsAndCows {
private:
    std::string secret;

public:
    BullsAndCows();
    void generateSecret();
    std::string getSecret() const;
    int getBulls(const std::string& guess);
    int getCows(const std::string& guess);
    bool isValidGuess(const std::string& guess);
};