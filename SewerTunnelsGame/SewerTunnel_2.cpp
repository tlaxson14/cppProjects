/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Sewer Tunnel 2.
************************************************************/
#include "SewerTunnel_2.hpp"
#include "Character.hpp"

void SewerTunnel2::look(){
    if(this->character->itemSearch("Flashlight")){
        cout << "\nThis looks like sewer tunnel 2. I bet someone else is down here." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Help meeeee! A distant voice crys out..." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));

	cout << "The voice is just up ahead." << endl;
    }
    else{
        cout << "I should find some light first before going down that tunnel." << endl;
    }
}

/*************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang member 1 Billy
 if he has been rescued.
**************************************************/
void SewerTunnel2::talk(){
    if(this->character->itemSearch("Flashlight")){
        cout << "\nYou: We're coming! Let's go Billy!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
    }
    else{
        cout << "I need to find light." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
    }
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void SewerTunnel2::read(){
    cout << "Nothing to read here.\nBetter see who is shouting for help." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
}
