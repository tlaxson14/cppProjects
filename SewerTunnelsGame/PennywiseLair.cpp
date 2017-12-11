/*******************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing the
 function definitions in Pennywise Lair.
********************************************************/
#include "PennywiseLair.hpp"
#include "Character.hpp"
#include <stdlib.h> //for exit()

/************************************************
 Name: look
 Parameters: none
 Purpose: Observe the lair and encounter with IT
*************************************************/
void PennywiseLair::look(){
    if(!this->character->itemSearch("Flashlight") && !this->character->itemSearch("Lighter")){
        cout << "\nI can't see anything..." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "I hear something...TURN BACK NOW!" << endl;
    }
    else{
        cout << "************************************************************************" << endl;
        cout << "A spiraling stack of bodies lies huddled together in the center of the\n";
        cout << "room with the corpses of innocent victims and children floating towards\n";
        cout << "the ceiling. This is IT's chamber." << endl;
        cout << "************************************************************************" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Pennywise: HAHAHAHAH!...who dare challenges me?\n";
        cout << "As IT appears from the shadows..." << endl;
    }
}

/*************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang members and IT.
**************************************************/
void PennywiseLair::talk(){
    if(!allRescued){
        cout << "\nYou: Come on guys! Let's take IT down!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1000));
        
        cout << "Billy: I've been waiting to kill you." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1000));
        
        cout << "Pennywise: HAHAHA! Let's play.\nAn evil grin curled up his face." << endl;
    }
    else{
        cout << "\nPennywise: Looks like you came to play too early. Time to die! HAHAHAHA" << endl;
    }
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
*********************************************/
void PennywiseLair::read(){
    cout << "Nothing to read here. Prepare for battle!" << endl;
}

/*********************************************************
 Name: Battle
 Parameters: none
 Purpose: Check for items needed to defeat IT and run the
 ending game sequence to defeat IT and save the gang.
**********************************************************/
void PennywiseLair::battle(){
    if(!allRescued){
        cout << "Pennywise: HAHAHAHAH!\nWell hellooo to you too, Billy. Georgie is here." << endl;
        cout << "Pennywise: He's alive you see? HEHE" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "You: Don't fall for it Billy." << endl;
        cout << "You: Beverly, get the slingshot ready." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Richie: You're going down clown!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Pennywise: HAHAHAHA! Beep beep Richie!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Pennywise: I'll kill you all! Hahaha! I'll drive you crazy, and then I'll kill you all!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Pennywise: I'm your every nightmare you ever had, I'm your worst dream come true! HAHAHAH!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "IT lunges towards Eddie brandishing his razor sharp rows of teeth." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "You: FIRE Beverly! It's now or never!" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1000));
        
        cout << "\n*******************************************" << endl;
        cout << "The Loser Gang performs the Ritual of Chüd" << endl;
        cout << "*******************************************" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "\nPennywise: ARGHHH NOOOO...\nI'm not real enough for you Billy? I was real enough for Georgie..." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "A wounded IT begins to retreat...\n";
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "IT slowly crawls back into the bottomless well..." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "Pennywise: See you soon. HAHAHAHAHAHA...echoes across the chamber" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(2500));
        
        cout << "You: Phew..way to go guys!" << endl;
        
        cout << "\n*****************" << endl;
        cout << "MISSION COMPLETE" << endl;
        cout << "*****************" << endl;
        cout << "Closing game..." << endl;
	//Exit game
	exit(0);	
    }
    else{
        cout << "\nPennywise: HAHAHAH! Looks like you came to party without any tools." << endl;
        cout << "Pennywise: Time to die! HAHAHAHA" << endl;
    }
}
