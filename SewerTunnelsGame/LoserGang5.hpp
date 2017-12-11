/*****************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header implementation file with
 function declarations for Loser Gang member 5 (Bev).
*****************************************************/
#ifndef LoserGang5_hpp
#define LoserGang5_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>

class LoserGang5 : public Space {
public:
    void look();
    void talk();
    void read();
    void rescue();
};

#endif 
