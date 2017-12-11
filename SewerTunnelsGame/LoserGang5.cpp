/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Loser Gang member 5. (Beverly)
************************************************************/
#include "LoserGang5.hpp"
#include "Character.hpp"

/************************************************
 Name: look
 Parameters: none
 Purpose: See who is being rescued and around you.
*************************************************/
void LoserGang5::look(){
    if(!isRescued){
        cout << "It's Beverly!" << endl;
    }
    else{
        cout << "You're standing next to Billy, Ben, Eddie, Richie, and Beverly." << endl;
    }
}

/********************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members.
********************************************/
void LoserGang5::talk(){
    if(!isRescued){
        cout << "Beverly: Quick! Cut me out of these ropes.\nWe must hurry! IT is coming..." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "HAHAHAH! IT is here..." << endl;
    }
    else{
        cout << "HAHAHAHAHAHA! A piercing laughter echoes through the sewers." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Billy: We need to move now! Let's go!" << endl;
    }
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void LoserGang5::read(){
    cout << "Nothing to read here." << endl;
}

/***************************************************
 Name: Rescue
 Parameters: none
 Purpose: Save the loser gang member and acquire
 the item they are holding needed to help defeat IT.
*****************************************************/
void LoserGang5::rescue(){
    isRescued = true;
    allRescued = true;
    cout << "You: Phew..glad we got to you in time Beverly." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "Beverly: Me too. I have just what we need to defeat IT." << endl;
    
    //Add item
    this->character->addItem("Silver rock");
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "\nYou: We've got everyone. Let's move!" << endl;
}
