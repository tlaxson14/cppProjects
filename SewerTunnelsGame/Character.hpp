/**************************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file for Character class protected
 and public member variables and function declarations.
***************************************************************/
#ifndef Character_hpp
#define Character_hpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Space;

class Character {
protected:
    string name;
    Space *currentSpace;
    vector<string> items; //Acquired items

public:
    Character(){};
    Space* getCurrentSpace();
    string getHeroName();
    bool itemSearch(string); //Search through items vector
    void setHeroName(string);
    void setCurrentSpace(Space*);
    void addItem(string);
    //Movement functions
    void moveForward();
    void moveBack();
    void moveLeft();
    void moveRight();
};

#endif
