/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 declarations for Sewer Entrance (where game begins).
************************************************************/
#ifndef SewerEntrance_hpp
#define SewerEntrance_hpp

#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

class SewerEntrance : public Space {
public:
    void look();
    void read();
    void talk();
};

#endif
