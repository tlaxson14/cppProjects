/**********************************************
Name: Travis Laxson
Date: October 6, 2017
Description: Source file for displaying the 
letter counts in the paragraphs - ASCII values
taken from source: www.ascii.cl
***********************************************/
#include "output_Letters.hpp"
using namespace std;

void output_Letters(ofstream &outputFile, int *array){

	//Print the output table
	outputFile << "Here is the list of frequencies for each letter:" << endl;

	//Show letter counts and print to output file
	for(int i = 0; i < 26; i++){
		
		//Convert to letters using ASCII values - A = 65...Z=90 
		outputFile << (char)(i + 65) << ":\t "  << array[i] << endl;
	}
} 	
