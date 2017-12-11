/************************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Sewer Tunnel 3.
*************************************************************/
#include "SewerTunnel_3.hpp"

/*******************************************
 Name: look
 Parameters: none
 Purpose: See location and get cry for help.
********************************************/
void SewerTunnel3::look(){
    cout << "\nThis looks like sewer tunnel 3." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "Somebody helllllpp meeeee! Please!!" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));

    cout << "The voice is just up ahead." << endl; 
}

/*************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members.
**************************************************/
void SewerTunnel3::talk(){
    cout << "\nYou: We're coming! Hold on!" << endl;
    cout << "You: Billy, shine the light down the tunnel. Ben, hold that lighter out in front." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void SewerTunnel3::read(){
    cout << "Nothing to read here.\nBetter see who is shouting for help." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}
