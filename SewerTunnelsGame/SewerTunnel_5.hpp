/****************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file containing function
 declarations for Sewer Tunnel 5.
*****************************************************/
#ifndef SewerTunnel_5_hpp
#define SewerTunnel_5_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

class SewerTunnel5 : public Space {
public:
    void look();
    void read();
    void talk();
};

#endif
