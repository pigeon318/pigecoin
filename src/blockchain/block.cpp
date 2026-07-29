#include "block.h"
#include "../crypto/hash.h"
#include <ctime>

Block::Block(std::string data, std::string prev_hash)
{
    this->data = data;
    this->prev_hash = prev_hash;
    nonce = 0;

    std::time_t currentTime = std::time(nullptr);
    char* timeString = std::ctime(&currentTime);

    this->timestamp = timeString;

    calculateHash();
}

std::string Block::calculateHash()
{
    std::string combined_data = data + timestamp + prev_hash + std::to_string(nonce);

    hash = Hash::calculate(combined_data);

    return hash;
}

std::string Block::getHash()
{
    return hash;
}