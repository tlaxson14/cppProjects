/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Loser Gang member 3. (Eddie)
************************************************************/
#include "LoserGang3.hpp"
#include "Character.hpp"

/*************************************************
 Name: look
 Parameters: none
 Purpose: See who is being rescued and around you.
**************************************************/
void LoserGang3::look(){
    if(!isRescued){
        cout << "\nIt's Eddie!" << endl;
    }
    else{
        cout << "\nYou're standing next to Billy, Ben, and Eddie." << endl;
    }
}

/********************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members.
********************************************/
void LoserGang3::talk(){
    if(!isRescued){
        cout << "\nEddie: I want to go home... *sniffle*" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Billy: Don't worry pal. We're here to rescue you." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Ben: Eddie we have to defeat IT." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Eddie: I'm cold, there's brown water everywhere, and and..." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "You: We have to do this Eddie. It's up to us to save everyone else." << endl;
    }
    else{
        cout << "\nEddie: Well, what are we waiting for? Let's go!" << endl;
    }
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
 *********************************************/
void LoserGang3::read(){
    cout << "\nNothing to read here.\nBetter find the others!\nTick tock..tick...tock" << endl;
}

/***************************************************
 Name: Rescue
 Parameters: none
 Purpose: Save the loser gang member and acquire
 the item they are holding needed to help defeat IT.
*****************************************************/
void LoserGang3::rescue(){
    if(this->character->itemSearch("Knife") && (this->character->itemSearch("Flashlight")) && (this->character->itemSearch("Lighter"))){
        isRescued = true;
    }
    else if(this->character->itemSearch("Knife") && ((!this->character->itemSearch("Flashlight")) || (!this->character->itemSearch("Lighter")))){
        cout << "\nIt's too difficult rescue Eddie without any light. Maybe I should find some more light first." << endl;
    }
    else{
        cout << "\nYou can't cut him loose with fingernails. Maybe you missed something." << endl;
    }
    
    allRescued = false;
   
    cout << "\nEddie: I don't know if I can do this guys." << endl;
 
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "You: Don't worry Eddie. You're safe with us." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    //Add item
    this->character->addItem("inhaler");
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
    
    cout << "\nYou: Alright, let's keep moving!" << endl;
}
