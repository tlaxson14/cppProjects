/*****************************************
* Travis Laxson
* 10-14-17
* Main source file for dice wars game.
* The game will create an instance of the
* Game class, display the menu of choices,
* gather input from the user, and run 
* the game sequence. In this game, the
* loaded die class is called if the user
* uses loaded dice to play the game.
*******************************************/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Game.hpp"
#include "isValidInput.hpp"
#include "Die.hpp"
#include "loadedDie.hpp"
using namespace std;

int main(){
	int choice;
	Game play;
	srand(time(0));	//Seed value for random integer 
	
	//Show menu of options
	play.showMenu();

	//Get choice selection from menu
	cout << "\nPress 1 to play or 2 to exit." << endl;
	cin >> choice;

	if(choice == 2){
		return 0;
	}

	//Input validation for choice
	isValidChoiceInput(choice);

	//Get number of rounds
	play.getRounds();	

	//Get user inputs for player1 and player2 and rounds
	play.getPlayerInputs();

	//Play the game and show results of the game with scores
	play.playGame();

	//Show scores and show winner
	play.getScores();

	return 0;
}	
