#include <algorithm>      // shuffle
#include <random>         // random_device, mt19937

#include "utils.h"

std::string generateRandomSecret(int len) {
    std::string characters = "0123456789";
    std::random_device rd;
    std::mt19937 g(rd()); // mersenne twister rng
    std::shuffle(characters.begin(), characters.end(), g);
    return characters.substr(0, len);
}