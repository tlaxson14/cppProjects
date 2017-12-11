/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Sewer Tunnel 1.
************************************************************/
#include "SewerTunnel_1.hpp"

/*********************************************
 Name: look
 Parameters: none
 Purpose: See location and or who is nearby.
**********************************************/
void SewerTunnel1::look(){
    cout << "\nYou entered what appears to be sewer tunnel 1. It's hard to see anything in here." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "Help! Help! A voice shouts..." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "It seems like the voice is just up ahead." << endl;
}

/********************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang member 1.
********************************************/
void SewerTunnel1::talk(){
    cout << "\nYou: I'm coming! Hang on!" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void SewerTunnel1::read(){
    cout << "\nNothing to read here.\nBetter see who is shouting for help up ahead." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
}
