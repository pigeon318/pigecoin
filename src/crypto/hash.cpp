#include "hash.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <openssl/sha.h>
    
std::string shaBytesToHex(const unsigned char* bytes, size_t length) {
    std::stringstream ss;
    ss << std::hex << std::setfill('0');
    for (size_t i = 0; i < length; ++i) {
        ss << std::setw(2) << static_cast<int>(bytes[i]);
    }

    return ss.str();

}


std::string Hash::calculate(const std::string& input){
    
    std::string final_hash;
    unsigned char hash[32];
    size_t length = input.length();
    
    SHA256(reinterpret_cast<const unsigned char*>(input.data()), input.length(), hash);
    final_hash = shaBytesToHex(hash, 32);
    
    return final_hash;

}

