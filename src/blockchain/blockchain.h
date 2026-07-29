#include <string>
#include <vector>
#include "block.h"
#pragma once

class Blockchain{

    public:
        Blockchain();
        void addBlock();
        Block getLatestBlock();
        bool isChainValid();

    private:
        std::vector<Block> chain;

};