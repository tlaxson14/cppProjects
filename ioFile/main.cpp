/******************************************************
* Name: Travis Laxson
* Date: October 7, 2017
* Description: Main source file that creates string
* inputs for input file stream and output file stream
* in addition to character array for letter counts.
* The program will take input for the file name to
* get letter count, count the frequencies for each 
* letter of each paragraph, and ask for the name of 
* the output file before printing the letter counts
* in each paragraph to the user-inputted output files.
*******************************************************/ 
#include "count_Letters.hpp"
#include "output_Letters.hpp"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	string inputFileName, outputFileName;	//Names of input/output files
	ifstream inputFile;			//Input file stream object
	ofstream outputFile;			//Output file stream object
	int array[26];				//Array for 26 letters

	//Get the name of the input file to read from
	cout << "Hello, please enter the name of the input file to open and read from: ";
	cin >> inputFileName;

	//Open input file to read input from - ios::in allow input operation
	//Validate if file exists
	inputFile.open(inputFileName, ios::in);

	//Read from the file until the EOF flag signal reached
	while(!inputFile.eof()){

		//Call count letters function to count frequencies of letters
		count_Letters(inputFile, array);
		
		//Get the name of the output file to print frequencies to
		cout << "Enter the name of the output file: ";
		cin >> outputFileName;

		//Open the output file to write contents
		outputFile.open(outputFileName, ios::out);

		//Call output letters function to show letter counts in paragraph
		output_Letters(outputFile, array);

		//Close output file to write contents
		outputFile.close();		
	}	

	//Close input file
	inputFile.close();	
	
	return 0;
} 
