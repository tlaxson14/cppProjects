/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing all of
 the function definitions in Character class. Function
 definitions included are for movement, item add and search,
 as well as the setter/getter function definitions for the
 hero/player's desired name in addition to the current space
 assigned to the character in the game.
************************************************************/
#include "Character.hpp"
#include "Space.hpp"
#include <string>
using namespace std;

/*******************************************
 Name: setHeroName
 Parameters: (1)
    1 - string variable n for name
 Purpose: set the name of the hero character
 to the 'n' parameter input from player.
*********************************************/
void Character::setHeroName(string n){
    this->name = n;
}

/*******************************************
 Name: setCurrentSpace
 Parameters: (1)
    1 - pointer variable to Space class
 Purpose: Set current space of character.
*********************************************/
void Character::setCurrentSpace(Space *c) {
    this->currentSpace = c;
}

/*******************************************
 Name: getCurrentSpace
 Parameters: none
 Purpose: Get current space of character.
*********************************************/
Space* Character::getCurrentSpace() {
    return this->currentSpace;
}

/*****************************************************
 Name: moveBack
 Parameters: none
 Purpose: Moves the player character forward one space
 as long as the space is not equal to NULL.
*******************************************************/
// Movement functions check for NULL pointers, then move or display a message
void Character::moveForward() {
    if (currentSpace->getForward() != NULL){

        cout << "\nMoving forward one space..." << endl;
        
        //Assign current space to new space
        this->currentSpace = currentSpace->getForward();
        
        //Show new location
        //cout << "You're now " << this->currentSpace->getSpaceName();

        if(currentSpace->getSpaceName() == "Pennywise Lair"){
            cout << "\n**************************************" << endl;
            cout << "*** Now entering the Chamber of IT ***" << endl;
            cout << "**************************************" << endl;
        }
    }
    else{
        cout << "\nThere's no way forward from here. Try another direction" << endl;
    }
}

/*****************************************************
 Name: moveBack
 Parameters: none
 Purpose: Moves the player character back one space
 as long as the space is not equal to NULL.
*******************************************************/
void Character::moveBack(){
    if(currentSpace->getBack() != NULL){
        
        //Condition if player attemps to move back from sewer entrance
        cout << "\nMoving backwards one space..."  << endl;
        
        //Assign current space to new space
        this->currentSpace = currentSpace->getBack();
        
        //Show current space
        // cout << "You're now " << this->currentSpace->getSpaceName();
    
        //Condition if player attemps to move back from sewer entrance
        if(currentSpace->getSpaceName() == "sewer entrance"){
            cout << "\nThe Loser gang needs your help. Don't leave them all to die." << endl;
        }
    }
    else{
        cout << "\nThere is a wall behind me. Try a different direction." << endl;
    }
}

/*****************************************************
 Name: moveLeft
 Parameters: none
 Purpose: Moves the player character left one space
 as long as the space is not equal to NULL.
*******************************************************/
void Character::moveLeft(){
    if (currentSpace->getLeft() != NULL) {
        
        cout << "\nMoving left one space..." << endl;
        
        //Assign current space to new space
        this->currentSpace = currentSpace->getLeft();
        
        //Show current space name
        //cout << "Now " << this->currentSpace->getSpaceName();
    }
    else{
        cout << "\nThere is a wall to my left. Try another direction." << endl;
    }
}

/*****************************************************
 Name: moveRight
 Parameters: none
 Purpose: Moves the player character right one space
 as long as the space is not equal to NULL.
*******************************************************/
void Character::moveRight(){
    if(currentSpace->getRight() != NULL) {
        
        cout << "\nMoving right one space..." << endl;
        
        //Assign current space to new space
        this->currentSpace = currentSpace->getRight();
        
        //Show current space name
        //cout << "Now " << this->currentSpace->getSpaceName();
    }
    else {
        cout << "\nThere is a wall to my right. Try another direction." << endl;
    }
}

/*****************************************************
 Name: getHeroName
 Parameters: none
 Purpose: Returns the name of the hero input
 by player at the beginning of the game.
*******************************************************/
string Character::getHeroName(){
    return this->name;
}

/*****************************************************
 Name: addItem
 Parameters: none
 Purpose: add gameplay acquired items to items vector.
******************************************************/
void Character::addItem(string item){
    this->items.push_back(item);
    cout << "\n******************\nNew item acquired!\n******************" << endl;
    cout << "   " << item << endl;
}

/**********************************************
 Name: itemSearch
 Parameters: none
 Purpose: Search through string vector of items
 acquired during gameplay.
***********************************************/
bool Character::itemSearch(string itemName){
    for(int i = 0; i < this->items.size(); i++){
        if (items[i] == itemName){
            return true;
        }
    }
    return false;
}

