/***************************************
* Travis Laxson
* 10-14-17
* Valid input header file for choice,
* rounds, die type, and number of die
* sides inputs. Each value will be
* input validated to ensure acceptable
* values are being used.
****************************************/

#ifndef ISVALIDINPUT_HPP
#define ISVALIDINPUT_HPP
#include<iostream>
using namespace std;

//Validate choice input
void isValidChoiceInput(int &number);


//Validate round input
void isValidRoundInput(int &number);

 
//Validate type input
void isValidTypeInput(int &number);


//Validate sides input
void isValidSidesInput(int &number);

#endif /*ISVALIDINPUT_HPP*/
