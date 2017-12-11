/*************************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing SewerWorld
 Class private and public member variable definitions in
 addition to instantiating Space class objects, the Character
 and the starting point for the character, and also the
 relative positions of each Space class pointer.
**************************************************************/
#include "SewerWorld.hpp"

/********************************************************
 Name: SewerWorld default constructor
 Parameters: none
 Purpose: Set the sewer universe for the user to navigate
 by instantiating the spaces, the character and starting
 point of the character, and locations of each space.
*********************************************************/
SewerWorld::SewerWorld(){
    
    //Instantiate Space class dynamic objects
    SewerEntrance *sewerEntrance = new SewerEntrance();
    SewerTunnel1 *sewerTunnel1 = new SewerTunnel1();
    LoserGang1 *loserGang1 = new LoserGang1();
    SewerMain *sewerMain = new SewerMain();
    SewerTunnel2 *sewerTunnel2 = new SewerTunnel2();
    LoserGang2 *loserGang2 = new LoserGang2();
    SewerTunnel3 *sewerTunnel3 = new SewerTunnel3();
    LoserGang3 *loserGang3 = new LoserGang3();
    DeepSewer *deepSewer = new DeepSewer();
    SewerTunnel4 *sewerTunnel4 = new SewerTunnel4();
    LoserGang4 *loserGang4 = new LoserGang4();
    SewerTunnel5 *sewerTunnel5 = new SewerTunnel5();
    LoserGang5 *loserGang5 = new LoserGang5();
    PennywiseLair *pennywiseLair = new PennywiseLair();
    
    //Instantiate Character and starting point of game
    this->character = new Character();
    this->character->setCurrentSpace(sewerEntrance);
    
    //Set location of Space class pointers
    sewerEntrance->setLocation(sewerMain, NULL, NULL, sewerTunnel1, character, "sewer entrance");
    sewerTunnel1->setLocation(loserGang1, NULL, sewerEntrance, NULL, character, "in sewer tunnel 1");
    loserGang1->setLocation(NULL, sewerTunnel1, NULL, NULL, character, "standing next to Billy");
    sewerMain->setLocation(deepSewer, sewerEntrance, sewerTunnel3, sewerTunnel2, character, "main sewer");
    sewerTunnel2->setLocation(loserGang2, NULL, sewerMain, NULL, character, "in sewer tunnel 2");
    loserGang2->setLocation(NULL, sewerTunnel2, NULL, NULL, character, "standing next to Ben");
    sewerTunnel3->setLocation(loserGang3, NULL, NULL, sewerMain, character, "in sewer tunnel 3");
    loserGang3->setLocation(NULL, sewerTunnel3, NULL, NULL, character, "standing next to Eddie");
    deepSewer->setLocation(pennywiseLair, sewerMain, sewerTunnel5, sewerTunnel4, character, "in deep sewer");
    sewerTunnel4->setLocation(loserGang4, NULL, deepSewer, NULL, character, "in sewer tunnel 4");
    loserGang4->setLocation(NULL, sewerTunnel4, NULL, NULL, character, "standing next to Richie");
    sewerTunnel5->setLocation(loserGang5, NULL, NULL, deepSewer, character, "in sewer tunnel 5");
    loserGang5->setLocation(NULL, sewerTunnel5, NULL, NULL, character, "standing next to Beverly");
    pennywiseLair->setLocation(NULL, deepSewer, NULL, NULL, character, "Pennywise Lair");
}

/*********************************************
 Name: getCharacter
 Parameters: none
 Purpose: return pointer to character position
**********************************************/
Character* SewerWorld::getCharacter(){
    return this->character;
}

	

