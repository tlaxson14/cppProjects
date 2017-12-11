/******************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header implementation file with
 function declarations for Loser Gang member 1 (Billy).
*******************************************************/
#ifndef LoserGang1_hpp
#define LoserGang1_hpp
#include "Space.hpp"
#include <thread>
#include <ctime>
#include <chrono>

class LoserGang1 : public Space {
public:
    void look();
    void talk();
    void read();
    void rescue();
};

#endif 
