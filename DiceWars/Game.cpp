/*****************************************
* Travis Laxson
* 10-14-17
* Source file containing member function
* definitions for the dice war game. The
* game allows a maximum of 50 rounds to
* be played between two players. A menu
* will be displayed, the users will enter
* the type of die, and the game will begin.
* Input validation class implemented for
* all of the inputs. Source code ideas and
* syntactic elements inspired from:
* 	learncpp.com/
* 	stackoverflow.com/
* 	cplusplus.com/
*	chegg.com/
*	Gaddis textbook - ch 8,10,11,15 
*******************************************/  
#include "Game.hpp"
#include "Die.hpp"
#include "loadedDie.hpp"
#include "isValidInput.hpp"
#include<iostream>
#include<iomanip>
using namespace std;

Game::Game(){
	rounds = 3;		//Default rounds to 3
	player1 = NULL; 	
	player2 = NULL;
}

void Game::showMenu(){
	//Menu formatting
	cout << "*******************" << endl;
	for(int i = 0; i < 2; i++){
		
		//Print title in the middle  
		if(i == 1){
			cout << setw(2) << "*"
			     << setw(12) << "Dice Wars"
			     << setw(4) << "*" << endl;
		}	
		//Continue formatting
		cout << setw(2) << "*";
		cout << setw(16) << "*";
		cout << endl;
	}
	//Continue formatting
	cout << "*******************" << endl;
	cout << setw(12) << "1. Play" << endl;
	cout << setw(12) << "2. Exit" << endl;
}

void Game::getRounds(){
	//Get number of rounds for the game
	cout << "Please enter the number of rounds to play." << endl;
	cin >> rounds;

	//Input validation for rounds
	isValidRoundInput(rounds);
}

void Game::getPlayerInputs(){
	int sides;		//Sides of die
	int type;		//Type of die

	//Player 1 enters type of die
	cout << "Player 1: Please enter the type of die you want to use." << endl;
	cout << "1.Loaded\n2.Normal" << endl;
	cin >> type;

	//Input validation for type of die
	isValidTypeInput(type);

	//Player1 enters number of die sides
	cout << "Please enter the number of sides on the die." << endl;
	cin >> sides;

	//Input validation for number of sides
	isValidSidesInput(sides);

	//Player1 Create dynamic memory for die type
	//Source idea inspired from: learncpp.com/ cpluscplus.com/ and stackoverflow.com/	
	if(type == 1){
		player1 = new loadedDie(sides);
	}
	else if(type == 2){
		player1 = new Die(sides);
	}
	else{
		cout << "Invalid input. Re-run with valid inputs." << endl;
	}	

	//Get player2 inputs
	cout << "Player 2: Please enter the type of die you want to use." << endl;
	cout << "1.Loaded\n2.Normal" << endl;
	cin >> type;

	//Input validation for type of die
	isValidTypeInput(type);

	//Player2 enters number of die sides
	cout << "Please enter the number of sides on the die." << endl;
	cin >> sides;

	//Input validation for number of sides
	isValidSidesInput(sides);

	//Player2 Create dynamic memory for die type
	//Source idea inspired from: learncpp.com/ cpluscplus.com/ and stackoverflow.com/	
	if(type == 1){
		player2 = new loadedDie(sides);
	}
	else if(type == 2){
		player2 = new Die(sides);
	}
	else{
		cout << "Invalid input. Re-run with valid inputs." << endl;
	}
}

void Game::playGame(){
	//Roll die for the desired number of rounds for each player
	//Store random inputs in 2D array source idea from: Gaddis textbook ch.8 & ch.10
	//Additional source help came from learncpp.com/, cplusplus.com/, and stackoverflow.com/
	for(int i = 0; i < rounds; i++){
		//Player 1
		roundNum[i][0] = player1->rollDice();
		//Player 2
		roundNum[i][1] = player2->rollDice();		
	}
}

void Game::getScores(){
	int player1Points = 0;	//P1 score
	int player2Points = 0;	//P2 score
	int tieGames = 0;	//Tie game score	
	
	//Format output in tabular form
	cout << setw(16) << "Player 1 "<< setw(10) << "Player 2" << endl;
	cout << "-------------------------------" << endl;
	
	//Show round number for each round and score
	for(int i = 0; i < rounds; i++){
		cout << "Rd " << i+1 << ":\t"<< setw(3) << roundNum[i][0] << "\t"<< setw(6) << roundNum[i][1] << endl;

		//If player1 number is higher add points to player1
		if(roundNum[i][0] > roundNum[i][1]){
			player1Points++;
		}	
		//If player2 number is higher add points to player2
		else if(roundNum[i][0] < roundNum[i][1]){
			player2Points++;
		}
		//If tie game add points to tie game	
		else if(roundNum[i][0] == roundNum[i][1]){
			tieGames++;
		}
	}

	//Call display winner function to display winner results
	displayGameSummary(player1Points, player2Points, tieGames);	
}

void Game::displayGameSummary(int p1, int p2, int tie){
	
	//Format game sumary output	
	cout << "*******************************" << endl;
	cout << "\tGame Summary\t\t" << endl;
	cout << "*******************************" << endl; 

	//Show rounds played
	cout << "In the preceding game " << rounds << " rounds were played." << endl;
	
	//Display the type of die used by player1
	if(player1->getType() == 1){
		cout << "Player1 used a loaded die containing " << player1->getSidesNum() << " sides." << endl;
	}
	else{
		cout << "Player1 used a normal die containing " << player1->getSidesNum() << " sides." << endl;
	}
		
	//Display the type of die used by player2
	if(player2->getType() == 1){
		cout << "Player2 used a loaded die containing " << player2->getSidesNum() << " sides." << endl;
	}
	else{
		cout << "Player2 used a normal die containing " << player2->getSidesNum() << " sides." << endl;

	}

	//Show number of tied games
	cout << "Player1 and Player2 tied in " << tie << " rounds." << endl; 	

	//If player 1 has more points, player1 is winner
	if(p1 > p2){
		cout << "Player1 scored " << p1 << " points." << endl;
		cout << "Player2 only scored " << p2 << " points." << endl;
		cout << "Player1 is the winner!" << endl;
	}
	//If player2 has more points, player2 is the winner
	else if(p1 < p2){
		cout << "Player1 only scored " << p1 << " points." << endl;
		cout << "Player2 scored " << p2 << " points." << endl;
		cout << "Player2 is the winner!" << endl;
	}
	//Else tie - highly unlikely scenario unless rounds is low
	else{
		cout << "Both Player1 and Player2 scored " << p1 << " points." << endl;
		cout << "Tie game!" << endl;
	}
	
	//Deallocate memory created for players
	delete [] player1;
	delete [] player2;
}
			


