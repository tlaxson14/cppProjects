/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for SewerTunnel5.
************************************************************/
#include "SewerTunnel_5.hpp"
#include "Character.hpp"

/***************************************************
 Name: look
 Parameters: none
 Purpose: See game location if light items acquired
****************************************************/
void SewerTunnel5::look(){
    if(character->itemSearch("Flashlight") && character->itemSearch("Lighter")){
        cout << "\nThis looks like sewer tunnel 5." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "AHHHHHHHH!! HEELLLPPPPP!" << endl;

        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));

	cout << "Quickly! The voice is just up ahead!" << endl;
    }
    else{
        cout << "\nIt's too dark to see anything down here." << endl;
        cout << "I should head back and find some light." << endl;
    }

    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}

/********************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members.
********************************************/
void SewerTunnel5::talk(){
    cout << "You: Hang on! We're coming!" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "You: Billy, give us some light." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "Billy: It's Richie! Hurry guys!" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void SewerTunnel5::read(){
    cout << "Nothing to read here.\nBetter hurry. Time is ticking..." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}
