/*****************************************
* Travis Laxson
* 10-14-17
* Game class header file containing
* pointers to the Die class, the 
* round number limit of 50, and the 
* public member functions for showing
* the menu options to the user, gathering
* inputs for the game, and running the 
* game.
******************************************/

#ifndef GAME_HPP
#define GAME_HPP
#include "Die.hpp"
#include "loadedDie.hpp"
using namespace std;


//Similar formatting and coding syntax inspired by posts 
//from stackoverflow.com/, chegg.com/, and learncpp.com
//in addition to code snippets from the Gaddis textbook
//chapters 7,8 & 10 
class Game{
	private:
		int rounds;		//Number input for rounds
		int roundNum[50][2];	//50 round max for 2 players
		Die *player1;		//Pointer to Die class
		Die *player2; 		//Pointer to Die class

	public:
		Game();
		void showMenu();
		void getRounds();
		void getPlayerInputs();
		void playGame();
		void getScores();
		void displayGameSummary(int p1, int p2, int t);
};

#endif /*GAME_HPP */
