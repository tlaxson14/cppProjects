/********************************
* Travis Laxson
* 10-14-17
* Loaded die class source file 
* containing public member function
* definitions and constructors for
* the loadedDie class.
* A code snippet for the rollDice
* override function is credited to:
* 	learncpp.com/forum and
* 	chegg.com/ and
* 	stackoverflow.com/
***********************************/

#include "loadedDie.hpp"
#include "Die.hpp"
#include<ctime>
using namespace std;

//Default constructor
loadedDie::loadedDie(){
	sides = 6;		//Set default sides to 6
	playerTurn = 1;		//Start from turn 1
}

//Code syntax and samples for overloaded derived constructor 
//taken from Chapter 7 & 11 of Gadis textbook and learncpp.com/
loadedDie::loadedDie(int x) : Die(x){
	type = 1;		//Type 1 = loaded die
	playerTurn = 1;	 
}

int loadedDie::rollDice(){
	//Bias the roll of the loaded die by 
	// giving the side number on rolls of 1
	// and adds 1 to values of 2 
	int value = Die::rollDice();

	if(value == 1){
		return sides;
	}
	else if(value == 2){
		return value++;
	}
	else{
		return value;
	}	
}
		


