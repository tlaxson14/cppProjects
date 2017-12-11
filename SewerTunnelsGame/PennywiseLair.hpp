/*******************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file containing the function
 declarations needed in Pennywise Lair.
********************************************************/
#ifndef PennywiseLair_hpp
#define PennywiseLair_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

class PennywiseLair : public Space {
public:
    void look();
    void read();
    void talk();
    void battle();
};

#endif
