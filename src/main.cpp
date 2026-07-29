
#include <iostream>
#include "blockchain/blockchain.h"

int main()
{
    Blockchain pigecoin;

    pigecoin.addBlock("Daniel sends 5 PIGE");
    pigecoin.addBlock("Alice sends 2 PIGE");

    pigecoin.printChain();

    bool isValid = pigecoin.isChainValid();
    
    if (isValid == true){
        std::cout << "\n the blockchain is valid\n";
    }

    else{
        std::cout << "\n the blockchain isnt valid\n";
    }



    return 0;
}