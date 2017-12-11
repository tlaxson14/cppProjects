/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file for Deep Sewer class
 containing all function definitions.
 ************************************************************/
#include "DeepSewer.hpp"
#include "Character.hpp"

/*********************************************
 Name: look
 Parameters: none
 Purpose: See location and or who is nearby.
**********************************************/
void DeepSewer::look(){
    if(!this->character->itemSearch("Flashlight") && !this->character->itemSearch("Lighter")){
        cout << "\nI can't see my hand in front of me..." << endl;

        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "This is not a good idea. I better turn back now..." << endl;
    }
    else if(this->character->itemSearch("Flashlight") && !this->character->itemSearch("Lighter")){
        cout << "\nThere's not enough light to see past a few feet. I need to find more light." << endl;
    }
    else{
        cout << "\nThis is the deep sewer tunnel. There is no light down here but your own." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));

	cout << "Good thing we have some extra light!" << endl;
    
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));

	cout << "There are tunnels to the left and the right." << endl;
    
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
    }	
}

/*************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members.
**************************************************/
void DeepSewer::talk(){
    if(!this->character->itemSearch("Flashlight") || !this->character->itemSearch("Lighter")){
        cout << "I shouldn't be this far without enough light. I should find some more light first." << endl;
    }
    else{
        cout << "Eddie: What's that?!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "\nA violent laughter echoes the tunnels...\n'HAHAHAHAHAHAH!'" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Pennywise: C'mon, Billy...Georgie is waaiitinnngg..HAHAHA!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "You: Stay strong everyone! IT wants us to be afraid." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Ben: Which way do we go?" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "You: This way...follow me! (right)" << endl;
    }
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void DeepSewer::read(){
    if(!this->character->itemSearch("Flashlight") || !this->character->itemSearch("Lighter")){
        cout << "I shouldn't be this far without enough light. I should find some more light first." << endl;
    }
    else{
        cout << "Nothing to read here.\nBetter hurry up." << endl;
    }
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}
