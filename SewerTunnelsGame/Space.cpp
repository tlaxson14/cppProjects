/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file for Space class
 containing all function definitions required to play game.
************************************************************/
#include "Space.hpp"
#include "Character.hpp"
using namespace std;

/************************************
 Name: Space default constructor
 Parameters: none
 Purpose: Assign spaces to null and
 isRescued Boolean variable to false.
**************************************/
Space::Space(){
    this->forward = NULL;
    this->back = NULL;
    this->left = NULL;
    this->right = NULL;
    this->isRescued = false;
}

Space::~Space(){
}

/**********************************************************
 Name: Space overloaded constructor
 Parameters: (4)
    1 - pointer variable (f)orward
    2 - pointer variable (b)ack
    3 - pointer variable (l)eft
    4 - pointer variable (r)ight
 Purpose: Assign forward, back, left, and right spaces in
 Space class and assign isRescued Boolean variable to false.
************************************************************/
Space::Space(Space *f, Space *b, Space *l, Space *r){
    this->forward = f;
    this->back = b;
    this->left = l;
    this->right = r;
    this->isRescued = false;
}

/******************************************************
 Name: setLocation
 Parameters: (6)
    1 - pointer variable (f)orward
    2 - pointer variable (b)ack
    3 - pointer variable (l)eft
    4 - pointer variable (r)ight
    5 - pointer variable (c) to Character class
    6 - string variable (s) for name of the current space
 Purpose: Assign forward, back, left, and right spaces in
 Space class and assign isRescued Boolean variable to false.
************************************************************/
void Space::setLocation(Space *f, Space *b, Space *l, Space *r, Character *c, string s){
    this->forward = f;
    this->back = b;
    this->left = l;
    this->right = r;
    this->character = c;
    this->spaceName = s;
}

/*****************************************
 Name: getIsRescued
 Parameters: none
 Purpose: Return boolean T/F if character
 has been rescued or not.
******************************************/
bool Space::getIsRescued(){
    return this->isRescued;
}

/*********************************************
 Name: getIsRescued
 Parameters: none
 Purpose: Return boolean T/F if ALL characters
 have been rescued or not. This is needed for
 the battle vs. IT.
**********************************************/
bool Space::getAllRescued(){
    return this->allRescued;
}

/*******************************************
 Name: getBack
 Parameters: none
 Purpose: Return the character back a space.
********************************************/
Space* Space::getBack(){
    if (this->back != NULL){
        return this->back;
    }
    else{
        return NULL;
    }
}

/*******************************************
 Name: getForward
 Parameters: none
 Purpose: Move the character forward a space.
********************************************/
Space* Space::getForward(){
    if (this->forward != NULL) {
        return this->forward;
    }
    else{
        return NULL;
    }
}

/*******************************************
 Name: getLeft
 Parameters: none
 Purpose: Move the character left a space.
********************************************/
Space* Space::getLeft(){
    if(this->left != NULL){
        return this->left;
    }
    else{
        return NULL;
    }
}

/*******************************************
 Name: getRight
 Parameters: none
 Purpose: Move the character right a space.
********************************************/
Space* Space::getRight(){
    if (this->right != NULL){
        return this->right;
    }
    else{
        return NULL;
    }
}

/*******************************************
 Name: getSpaceName
 Parameters: none
 Purpose: Return the name of the space the
 character is currently on or moved to.
********************************************/
string Space::getSpaceName(){
    return this->spaceName;
}

/*******************************************
 Name: read
 Parameters: none
 Purpose: If nothing to read on space then
 prints output as such.
********************************************/
void Space::read(){
    cout << "Nothing to read here." << endl;
}

/*******************************************
 Name: rescue
 Parameters: none
 Purpose: If nobody to rescue on space then
 prints output as such.
********************************************/
void Space::rescue(){
    cout << "Nobody to rescue here." << endl;
}

/*******************************************
 Name: battle
 Parameters: none
 Purpose: If nobody to battle on space then
 prints output as such. Only relevant in
 Pennywise Lair vs. IT.
********************************************/
void Space::battle(){
    cout << "Save this for when it matters." << endl;
}
