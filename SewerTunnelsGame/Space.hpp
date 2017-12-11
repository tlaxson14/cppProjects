/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation header file containing
 protected member variables for inheritance and also the
 function declarations (including virtual and pure virtual)
 needed to move withint the game.
************************************************************/
#ifndef Space_hpp
#define Space_hpp
#include <iostream>
#include <string>
using namespace std;
class Character;

class Space{
protected:
    //Pointers to directional spaces
    Space *forward;
    Space *back;
    Space *left;
    Space *right;
    bool isRescued;
    bool allRescued;
    Character *character;
    string spaceName;
    
public:
    Space();
    Space(Space*, Space*, Space*, Space*);
    ~Space();
    void setLocation(Space*, Space*, Space*, Space*, Character*, string);
    bool getIsRescued();
    bool getAllRescued();
    string getSpaceName();
    
    //Space pointers for direction
    Space* getForward();
    Space* getBack();
    Space* getLeft();
    Space* getRight();
    
    //Virtual functions
    virtual void talk() = 0;
    virtual void look() = 0;
    virtual void battle();
    virtual void read();
    virtual void rescue();
};

#endif
