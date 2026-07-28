#include <iostream>
#include <string>
#include "crypto/hash.h"

int main() {
    
    std::string input;
    input = "Hello";
    
    std::string hash;
    hash = Hash::calculate(input);
    
    std::cout << hash;
}