/********************************************
* Name: Travis Laxson
* Date: 10-26-17
* Description: Header file with declaration
* for third recursive function that takes one 
* integer argument N, where N is the sum of 
* natural numbers from 1 to N.  
*********************************************/

#include "thirdRecursive.hpp"
#include <iostream>
using namespace std;

int calcTriangularNum(int integer){
	int sum = 0;
    
	//Base case
	if(integer == 0){
		return sum;
	}
    	//Additional base case
    	else if(integer == 1){
    		return sum = 1;
    	}
    	//Recursive case
    	else if(integer > 1){

        	//Assign sum & call recursive function with (N-1) integer argument
                sum = sum + integer + calcTriangularNum(integer-1);
	}
        //Return to main function
        return sum;
}
