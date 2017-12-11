/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for Sewer Entrance (where game begins).
************************************************************/
#include "SewerEntrance.hpp"
#include "Character.hpp"

/*********************************************
 Name: look
 Parameters: none
 Purpose: See location and or who is nearby.
 Acquires the knife - a very important item
 needed to proceed in the game.
**********************************************/
void SewerEntrance::look(){
    cout << "\nYou've entered the sewers. The gang are all in here somewhere." << endl;
    cout << "You must find them quickly!" << endl;
    cout << "There looks to be a tunnel to the right. Maybe I should try there first." << endl; 	    

    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
    
    //Add item
    this->character->addItem("Knife");
    cout << "\nYou: I knew this old thing would come in handy." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
}

/**************************************
 Name: talk
 Parameters: none
 Purpose: Interact with environment.
**************************************/
void SewerEntrance::talk(){
    cout << "\nTo save or not to save...that is the question." << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1000));
    
    cout << "Better check out who is shouting to the right." << endl;
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void SewerEntrance::read(){
    cout << "The sign says: 'Danger - No trespassing'" << endl;
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
    
    cout << "No time for rules. Better check out who is shouting to the right." << endl;
}

