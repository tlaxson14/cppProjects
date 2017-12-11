/****************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file containing function
 declarations for the Deep Sewer class.
*****************************************************/
#ifndef DeepSewer_hpp
#define DeepSewer_hpp
#include "Space.hpp"
#include <iostream>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

class DeepSewer : public Space {
public:
    void look();
    void read();
    void talk();
};

#endif
