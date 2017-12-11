/*******************************
* Travis Laxson
* 10-14-17
* LoadedDie class header file 
* containing inheritance from 
* Die class. Roll dice function
* will be overridden from the 
* Die class if the user selects
* the option for loaded dice.
********************************/

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include "Die.hpp"
#include<iostream>
using namespace std;

//Sample syntax used from Week 3 readings and learncpp.com
class loadedDie : public Die{
	private:
		int playerTurn; 

	public:
		loadedDie();
		loadedDie(int x);
		int rollDice();
};
#endif /*LOADEDDIE_HPP*/
