/****************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header implementation file with
 function declarations for Loser Gang member 2 (Ben).
*****************************************************/
#ifndef LoserGang2_hpp
#define LoserGang2_hpp
#include "Space.hpp"
#include <thread>
#include <ctime>
#include <chrono>

class LoserGang2 : public Space {
public:
    void look();
    void talk();
    void read();
    void rescue();
};

#endif 
