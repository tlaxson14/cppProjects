/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Loser Gang member 5. (Billy)
************************************************************/
#include "LoserGang1.hpp"
#include "Character.hpp"

/**************************************************
 Name: look
 Parameters: none
 Purpose: See who is being rescued and around you.
***************************************************/
void LoserGang1::look(){
    if(!isRescued){
        cout << "\nYou're next to Billy, a good friend and also a leader of the loser gang." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1000));
        
        cout << "He's bound to a metal pole. Maybe there is something you can use to free him." << endl;
    }
    else{
        cout << "\nYou're standing next to Billy. Thank goodness he has a flashlight." << endl;
    }
}

/*************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang member 1 Billy.
**************************************************/
void LoserGang1::talk(){
    if(!isRescued){
        cout << "\nBilly: I'm glad to see you " << character->getHeroName() << ". Can you get me out of here?" << endl;
    }
    else{
        cout << "\nBilly: Let's go! We have to save the others before it's too late!" << endl;
    }
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void LoserGang1::read(){
    cout << "\nNothing to read here." << endl;
}

/***************************************************
 Name: Rescue
 Parameters: none
 Purpose: Save the loser gang member and acquire
 the item they are holding needed to help defeat IT.
*****************************************************/
void LoserGang1::rescue(){
    if(character->itemSearch("Knife")){
        isRescued = true;
        allRescued = false;
        cout << "\nBilly: Thanks for saving me!" << endl;
        cout << "I have this to help us see through these tunnels.";
        
        //Add item
        this->character->addItem("Flashlight");
    }
    else{
        cout << "You can't cut him loose with fingernails. Maybe you missed something." << endl;
    }
}
