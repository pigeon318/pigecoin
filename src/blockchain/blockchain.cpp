#include "blockchain.h"
#include "block.h"
#include <string>
#include <vector>
#include <iostream>

Blockchain::Blockchain()
{
     Block genesis("First Pigecoin block", "00000");

    chain.push_back(genesis);
}


void Blockchain::addBlock(const std::string& data)
{ 
    std::string prev_hash;
    Block last_block = getLatestBlock();
    prev_hash = last_block.getHash();
    Block block(data, prev_hash);
    chain.push_back(block);
}

Block Blockchain::getLatestBlock()
{
    return chain.back();
}


void Blockchain::printChain()
{
    for (int i = 0; i < chain.size(); i++)
    {
        std::cout << "Block: " << i << std::endl;
        std::cout << "Data: " << chain[i].getData() << std::endl;
        std::cout << "Previous hash: " << chain[i].getPreviousHash() << std::endl;
        std::cout << "Hash: " << chain[i].getHash() << std::endl;
        std::cout << "-------------------" << std::endl;
    }
}

bool Blockchain::isChainValid()
{

    for (int i = 0; i < chain.size(); i++){

        
    }
    
}