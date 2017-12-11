/********************************************
* Name: Travis Laxson
* Date: 10-26-17
* Description: Source file with implementation 
* of first recursive function that takes a
* string argument and prints the string in 
* reverse. 
*********************************************/ 
#include "firstRecursive.hpp"
#include <iostream>
#include <string>
using namespace std;

void reverseString(string phrase){

	//Base recursion case
	if(phrase == "" || phrase == "\n"){
	        cout << "" << endl;
        }
	//Recursive case
 	else if(phrase.length() > 0){
        
        	//Assign last letter in string
		char lastLetter = phrase[phrase.length() - 1];
        
	        //Display last letter in string
       		cout << lastLetter;
                                               
                //Erase last character in string
                phrase.pop_back();
                                                                        
                //Call recursive function with n - 1 character
                reverseString(phrase);
        }
} 	
