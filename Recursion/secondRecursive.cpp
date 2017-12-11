/********************************************
* Name: Travis Laxson
* Date: 10-26-17
* Description: Source implementation  file 
* for second recursive function that takes two 
* arguments: Pointer to an array of integers
* and size of the array defined by user. This
* function will calculate the sum of all the 
* values in the array and return the sum back
* to the main function using recursion as the
* calculate sum method. 
*********************************************/

#include "secondRecursive.hpp"
#include <iostream>
using namespace std;

int calcSum(int *array, int size){

	//Assign first value in array to sum
	int sum = *array;

	//Base case
	//Call recursive function to calcualte sum
	//If array has one value, return value as sum
	if(size == 1){
		sum = *array;
	}
	//Recursive case
        //If array has n values > 0, assign sum to first value and call
        //recursive function moving to n+1 value in array decreasing size
	else if(size > 0){
		sum = sum + calcSum(array+1, size-1);
	}
	
	return sum;
}
