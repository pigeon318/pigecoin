#pragma once

#include <string>
#include <vector>

#include "block.h"

class Blockchain
{
private:
    std::vector<Block> chain;

public:
    Blockchain();
    void addBlock(const std::string& data);
    Block getLatestBlock();
    bool isChainValid();
    void printChain();
};