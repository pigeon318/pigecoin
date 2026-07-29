#include <string>
#pragma once

class Block
{
private:
    std::string hash;
    std::string timestamp;
    std::string prev_hash;
    u_int64_t nonce;
    std::string data;

public:
    Block(std::string data, std::string prev_hash);

    std::string calculateHash();

    std::string getHash();
    std::string getPreviousHash();
    std::string getData();
};