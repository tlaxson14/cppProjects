/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Sewer Tunnel 4.
************************************************************/
#include "SewerTunnel_4.hpp"
#include "Character.hpp"

/***************************************************
 Name: look
 Parameters: none
 Purpose: See game location if light items acquired
****************************************************/
void SewerTunnel4::look(){
    if(character->itemSearch("Flashlight") && character->itemSearch("Lighter")){
        cout << "This looks like sewer tunnel 4." << endl;
    
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Can anybody hear me? Helllooooo??" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));

	cout << "The voice is just up ahead. Hurry!" << endl;
    }
    else{
        cout << "It's too dark to see anything down here." << endl;
        cout << "I should head back and find some more light." << endl;
    }
}

/*************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members.
**************************************************/
void SewerTunnel4::talk(){
    cout << "You: Billy, shine the light down the tunnel." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
    
    cout << "Billy: It's Richie! Hurry guys!" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
    
    cout << "Ben: We're coming Richie! Hang on." << endl;
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void SewerTunnel4::read(){
    cout << "Nothing to read here.\nBetter hurry. Time is ticking..." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
}
