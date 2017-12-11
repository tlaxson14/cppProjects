/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Loser Gang member 4. (Richie)
************************************************************/
#include "LoserGang4.hpp"
#include "Character.hpp"

/*************************************************
 Name: look
 Parameters: none
 Purpose: See who is being rescued and around you.
**************************************************/
void LoserGang4::look(){
    if(!isRescued){
        cout << "\nIt's Richie!" << endl;
    }
    else{
        cout << "\nYou're standing next to Billy, Ben, Eddie, and Richie." << endl;
    }
}

/********************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members.
********************************************/
void LoserGang4::talk(){
    if(!isRescued){
        cout << "\nRichie: Alright, you guys made it. About time geesh.\nMy clothes were going out of style." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Eddie: Now is not the time for jokes Richie!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "HAHAHAHAHAHA! I like jokes... a voice echoes out." << endl;
    }
    else{
        cout << "\nRichie: Are we going to save the others or stand in a FUC!@#% circle and stare at each other? Come on!" << endl;
    }
}

/***********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes on wall. There
 is an inscription to read on the wall.
************************************************/
void LoserGang4::read(){
    cout << "\nYou: There's something on the wall here. Do you all see it?" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "\n[WALL INSCRIPTION]" << endl;
    cout << "You're a loser " << character->getHeroName() << ". Always have been and always will be." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "Billy: Snap out of it " << character->getHeroName() << ". That's what IT wants." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "You: You're right Billy. We can't give into our fears. Let's go guys!" << endl;
}

/***************************************************
 Name: Rescue
 Parameters: none
 Purpose: Save the loser gang member and acquire
 the item they are holding needed to help defeat IT.
*****************************************************/
void LoserGang4::rescue(){
    if(this->character->itemSearch("Knife") && (this->character->itemSearch("Flashlight")) && (this->character->itemSearch("Lighter"))){
        isRescued = true;
    }
    else if(this->character->itemSearch("Knife") && ((!this->character->itemSearch("Flashlight")) || (!this->character->itemSearch("Lighter")))){
        cout << "\nIt's too difficult rescue Richie without any light. Maybe I should find some more light first." << endl;
    }
    else{
        cout << "\nYou can't cut him loose with fingernails. Maybe you missed something." << endl;
    }
    allRescued = false;
    
    cout << "\nYou: Let's go Richie. We need your help!" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "Richie: Sure thing. I knew this would come in handy today.";
    
    //Add item
    this->character->addItem("slingshot");
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "You: Let's get moving!" << endl;
}
