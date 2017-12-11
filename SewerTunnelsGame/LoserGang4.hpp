/*******************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header implementation file with
 function declarations for Loser Gang member 4 (Richie).
********************************************************/
#ifndef LoserGang4_hpp
#define LoserGang4_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>

class LoserGang4 : public Space {
public:
    void look();
    void talk();
    void read();
    void rescue();
};

#endif 
