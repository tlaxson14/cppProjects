/******************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header implementation file with
 function declarations for Loser Gang member 3 (Eddie).
*******************************************************/
#ifndef LoserGang3_hpp
#define LoserGang3_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>

class LoserGang3 : public Space {
public:
    void look();
    void talk();
    void read();
    void rescue();
};

#endif 
