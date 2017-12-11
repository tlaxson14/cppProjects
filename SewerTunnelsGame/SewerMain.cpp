/************************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing function
 definitions for the Main Sewer tunnel.
*************************************************************/
#include "SewerMain.hpp"
#include "Character.hpp"

/*********************************************
 Name: look
 Parameters: none
 Purpose: See location and or who is nearby.
**********************************************/
void SewerMain::look(){
    if(this->character->itemSearch("Flashlight")){
        cout << "This looks like the main sewer." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
	cout << "There are tunnels to the left and the right." << endl;

        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
	cout << "There's also something on the wall here." << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "It's a 'Missing Persons' pamphlet with...my..name..\nShould I read it?" << endl;
    }
    else{
        cout << "It's too dark to see anything in here. I should find some light." << endl;
    }
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}

/*************************************************
 Name: talk
 Parameters: none
 Purpose: Interact with loser gang member 1 Billy.
**************************************************/
void SewerMain::talk(){
    if(this->character->itemSearch("Flashlight")){
        if(!isRescued){
            cout << "\nYou: Hello? Can anybody hear me?!" << endl;
            cout << "Billy: I don't know how much longer this flashlight will work. We need to hurry " << character->getHeroName() << "!" << endl;
            
            //Pause
            this_thread::sleep_for(chrono::milliseconds(1000));
            
            cout << "You: Ok, let's try this tunnel to the right." << endl;
        }
        else{
            cout << "\nYou: We should try that tunnel on the left! Let's go guys!" << endl;
        }
    }
    else{
        cout << "\nIt's too dark to see anything in here. I should find some light." << endl;
    }
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}

/********************************************
 Name: read
 Parameters: none
 Purpose: Read any special notes in tunnels.
 If player has flashlight then player will be
 able to read and acquire the pamphlet of
 their own 'Missing' poster.
*********************************************/
void SewerMain::read(){
    if(this->character->itemSearch("Flashlight")){
        cout << "---------------------------------------------------" << endl;
        cout << "Missing Person: " << character->getHeroName() << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Description: " << character->getHeroName() << " has an irrational fear of clowns,\nbeing a loser, and death by clown. \n\tHAHAHAHAHA" << endl;
        cout << "---------------------------------------------------" << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        cout << "\nYou: Not this time IT." << endl;
        character->addItem("Pamphlet");
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
    }
    else{
        cout << "It's too dark down here. I need to find some light." << endl;
    }
    
    //Pause
    this_thread::sleep_for(chrono::milliseconds(1500));
}
