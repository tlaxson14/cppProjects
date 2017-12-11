/****************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file containing function
 declarations for the Main Sewer tunnel.
*****************************************************/
#ifndef SewerMain_hpp
#define SewerMain_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

class SewerMain : public Space {
public:
    void look();
    void read();
    void talk();
};

#endif
