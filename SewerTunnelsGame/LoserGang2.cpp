/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Loser Gang member 2. (Ben)
************************************************************/
#include "LoserGang2.hpp"
#include "Character.hpp"

/**************************************************
 Name: look
 Parameters: none
 Purpose: See who is being rescued and around you.
***************************************************/
void LoserGang2::look(){
    if(!isRescued){
        cout << "\nIt's Ben!" << endl;
    }
    else{
        cout << "\nYou're standing next to Billy looking at Ben." << endl;
    }
}

/*************************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members 1-2 (Billy and Ben)
**************************************************************/
void LoserGang2::talk(){
    if(!isRescued){
        cout << "\nBen: Hey guys...I saw..IT.." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Billy: Don't worry pal. We're here to rescue you." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Billy: " << character->getHeroName() << " cut him loose." << endl;
    }
    else{
        cout << "We should keep moving. No time to waste." << endl;
    }
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void LoserGang2::read(){
    if(!isRescued){
        cout << "\nNothing to read here." << endl;
    }
    else{
        cout << "\nBetter get back and find the others! Hurry!" << endl;
    }
}

/***************************************************
 Name: Rescue
 Parameters: none
 Purpose: Save the loser gang member and acquire
 the item they are holding needed to help defeat IT.
*****************************************************/
void LoserGang2::rescue(){
    if(this->character->itemSearch("Knife") && (this->character->itemSearch("Flashlight"))){
        isRescued = true;
    }
    else if(this->character->itemSearch("Knife") && (!this->character->itemSearch("Flashlight"))){
        cout << "\nIt's too difficult rescue Ben without any light. Maybe I should find some light first." << endl;
    }
    else{
         cout << "\nYou can't cut him loose with fingernails. Maybe you missed something." << endl;
    }
    
    allRescued = false;
    
    cout << "\nBen: Thanks for saving me!\nHere, I have something to help us.";
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    //Add item
    this->character->addItem("Lighter");

    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "\nYou: Alright Ben, I have a feeling we're going to need that extra light." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "Billy: Let's find the others." << endl;
}
