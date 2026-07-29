cmake_minimum_required(VERSION 3.20)

project(Pigecoin)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenSSL REQUIRED)

add_executable(pigecoin
    src/main.cpp
    src/crypto/hash.cpp
    src/blockchain/block.cpp
    src/blockchain/blockchain.cpp
)

target_link_libraries(pigecoin OpenSSL::Crypto)