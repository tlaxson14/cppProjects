/*************************************
* Travis Laxson
* 10-14-17
* Die class header file containing 
* protected variables for use in 
* derived class and public member
* functions for Die class
**************************************/

#ifndef DIE_HPP
#define DIE_HPP 
#include<iostream>
#include<ctime>
using namespace std;

class Die{
	protected:
		int sides;
		int type;
	public:
		Die();
		Die(int x);
		int getSidesNum();
		//Virtual function credit source: chapter 15 in Gaddis text
		//stackoverflow.com/ and learncpp.com/ for further source info
		virtual int rollDice();
		int getType();	
};
#endif /*DIE_HPP*/	

