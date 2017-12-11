/****************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file containing function
 declarations for Sewer Tunnel 2.
*****************************************************/
#ifndef SewerTunnel_2_hpp
#define SewerTunnel_2_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

class SewerTunnel2 : public Space {
public:
    void look();
    void read();
    void talk();
};

#endif
