/*******************************************
* Name: Travis Laxson
* Date: October 6, 2017
* Description: Source file for count letters
* function to get the total count of each
* letter used in a paragraph - Contains source
* resource material from website:
*	www.ascii.cl - for ASCII values
*********************************************/

#include "count_Letters.hpp"
#include "output_Letters.hpp"
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void count_Letters(ifstream &inputFile, int *array){

	char ch; 		//Letters 
	string paragraph;	//Paragraph in text
	string text;		//Line of text

	//Initialize the count for each letter to zero 
	for(int i = 0; i < 26; i++){
		array[i] = 0;
	}
	
	//Get the text from file by line
	while(getline(inputFile, text)){
		
		//Condition if text is empty space
		if(text.empty()){
			break;
		}
		//If text is not empty, combine lines of text in paragraph
		else{
			paragraph += text + ' ';
		}
	}

	//Delete white spaces from text in paragraph
	paragraph.erase(paragraph.length() - 1);

	//Loop to get the letter count in the paragraph	
	for(int unsigned i = 0; i < paragraph.length(); i++){
		
		//Get each letter from paragraph and capitalize
	 	ch = toupper(paragraph[i]);

		//Use ASCII values to check the captial letter 
		//Capital letters ASCII values: A = 65...Z = 90 
		if((int)ch >= 65 && (int)ch <= 90){

			//Add +1 to letter in array[26]
			array[(int)ch - 65]++;
		}
		else{
			//Ignore symbols
			continue;
		} 
	}		
}


