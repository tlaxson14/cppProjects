/****************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file containing function
 declarations for Sewer Tunnel 1.
*****************************************************/
#ifndef SewerTunnel_1_hpp
#define SewerTunnel_1_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

class SewerTunnel1 : public Space {
public:
    void look();
    void read();
    void talk();
};

#endif
