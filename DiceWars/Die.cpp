/***************************************
* Travis Laxson
* 10-14-17
* Source file for Die class providing
* constructors and member function 
* definitions.i
* Some source code and syntax and
* syntactic elements inspired from:
* 	learncpp.com/
* 	stackoverflow.com/
* 	cplusplus.com/
*	chegg.com/
*	Gaddis textbook - ch 8,10,11,15 
****************************************/

#include "Die.hpp"
#include "Game.hpp"
#include "isValidInput.hpp"
#include<iostream>
#include<cstdlib> 
#include<ctime> 
using namespace std;

Die::Die(){
	sides = 6;	//Standard 6-sided die
	type = 2;	//Normal-sided die
}

Die::Die(int sides){
	this->sides = sides;
	type = 2;
}

int Die::getSidesNum(){
	return sides;
}

//rand() functionality and snippet inspired by: stackoverflow.com/ and learn.cpp/  
int Die::rollDice(){
	//Generate random number between 1 -- No. of Sides
	int value = rand() % sides + 1;

	return value;
}

int Die::getType(){
	return type;
}
