
#include <iostream>
#include "blockchain/blockchain.h"

int main()
{
    Blockchain pigecoin;

    pigecoin.addBlock("Daniel sends 5 PIGE");
    pigecoin.addBlock("Alice sends 2 PIGE");

    pigecoin.printChain();

    return 0;
}