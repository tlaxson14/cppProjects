/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source implementation file containing all of
 the game functions logic to play and run the game, show the
 description of the game, get the hero name input from the
 player, game directional action for movement in the game,
 and input validation function for direction of movement.
************************************************************/
#include "GameFunctions.hpp"
#include "Character.hpp"
#include "SewerWorld.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

/******************************************************
 Name: playGame
 Parameters: none
 Purpose: Contains the logic to play the game
 including instantiating sewer and character, show
 game description, get hero name, and run game function
 with pointer variable character.
********************************************************/
void playGame(){
    //Instantiate sewer world and character pointers
    SewerWorld *sewerWorld = new SewerWorld();
    Character *character = sewerWorld->getCharacter();
    
    //Show game description
    showDescription();
    
    //Get name of hero character
    string name = heroName();
    
    //Set name of character
    character->setHeroName(name);
    
    cout << "\nHurry, " << character->getHeroName() << " you must save the gang before it's too late!" << endl;
    
    //Run game
    runGame(character);
}

/***************************************************
 Name: showDescription
 Parameters: none
 Purpose: Show game desription summary and objective
 to win the game.
****************************************************/
void showDescription(){
    cout << "\t\t-----------------------" << endl;
    cout << "\t\t    Final Challenge" << endl;
    cout << "\t\t-----------------------" << endl;
    cout << "Summary: The Losers Club is trapped in the sewers and \nyou are the last hope to rescue them from Pennywise the Dancing Clown." << endl;
    cout << "\nObjective: Rescue each of the Loser Club members before time runs out \nand band together to conquer your fears and defeat IT." << endl;
}

/*************************************************
 Name: heroName
 Parameters: none
 Purpose: Get string character name input from
 game player and return back to playGame function.
**************************************************/
string heroName(){
    
    //Name of hero
    string name;
    
    //Get name of hero character
    cout << "\nEnter your character name: ";
    getline(cin, name);
    
    return name;
}

/********************************************************
 Name: runGame
 Parameters: (1)
    1 - Pointer variable pointing to Character class
 Purpose: Use for loop to set the game clock to 60,
 display the remaining time to complete the game, get
 the player choices for game actions, and use switch
 conditional statement logic to act and move in the game.
**********************************************************/
void runGame(Character *c){
    
    //Game clock - 65 min.
    for(int time = 65; time >= 0; time--){
        
        //Show remaining time in game
        cout << "\nTime Remaining (m): " << time << endl;
        
        //Pause
        this_thread::sleep_for(chrono::milliseconds(1500));
        
        //Condition for game timer
        if(time > 0){
            
            //Show game options menu and get user choice
            int choice = gameAction();
            
            //Conditional switch based on user selection
            switch(choice){
                case 1:
                    //Look
                    c->getCurrentSpace()->look();
                    break;
                case 2:
                    //Talk
                    c->getCurrentSpace()->talk();
                    break;
                case 3:
                    //Read
                    c->getCurrentSpace()->read();
                    break;
                case 4:
                    //Rescue
                    c->getCurrentSpace()->rescue();
                    break;
                case 5:
                    //Battle -- only for IT
                    c->getCurrentSpace()->battle();
                    break;
                case 6:
                    //Move
                    char direction; 
			
		    //Get directional choice
		    cout << "\nWhich direction?" << endl;
		    cout << "-- Directions -- \n   (f)orward\n   (b)ack\n   (l)eft\n   (r)ight\n" << endl;
		    cin >> direction;

		    //Validate direction input
                    validate_direction(direction);

                    //Conditional switch for directional movement
                    switch(direction){
                        case 'f':
                            c->moveForward();
                            break;
                        case 'b':
                            c->moveBack();
                            break;
                        case 'l':
                            c->moveLeft();
                            break;
                        case 'r':
                            c->moveRight();
                            break;
                        default:
                            break;
                    }
                    break;
		//Exit/Quit game
		case 7:
		    exit(0);	
            }
        }
        else{
            cout << "Time up! IT has devoured you and the entire Loser Gang. The town is forever cursed." << endl;
        }
    }
}

/****************************************************
 Name: gameAction
 Parameters: none
 Purpose: Display actions menu and get player action
 input, validate input, and return input back to
 runGame function.
*****************************************************/
int gameAction(){
    int action;
    
    //Get action choice
    cout << "\nWhat would you like to do?" << endl;
    cout << "1. Look\n2. Talk\n3. Read\n4. Rescue\n5. Battle\n6. Move\n7. Quit" << endl;
    cout << "\nChoice: ";
    cin >> action;
    
    //Validate choice input
    validate(action);
    
    return action;
}

/**********************************************************************
 Name: validate
 Parameters: (1)
    1 - Reference variable for choice input
 Purpose: Validate choice inputs are within acceptable range of values.
***********************************************************************/
void validate(int &choice){
    while (!cin){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a valid choice 1 - 7." << endl;
        cin >> choice;
    }
    while(choice < 1 || choice > 7){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a valid choice 1 - 7." << endl;
        cin >> choice;
    }
}

/**********************************************************************
 Name: validate
 Parameters: (1)
 1 - Reference variable for direction input
 Purpose: Validate choice inputs are within acceptable range of values.
 ***********************************************************************/
void validate_direction(char &d){
    while (!cin){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a valid input\n\t(f) - forward\n\t(b) - back\n\t(l) - left\n\t(r) - right." << endl;
        cin >> d;
    }
    while(d != 'f' && d != 'b' && d != 'l' && d != 'r'){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a valid input\n\t(f) - forward\n\t(b) - back\n\t(l) - left\n\t(r) - right." << endl;
        cin >> d;
    }
}


