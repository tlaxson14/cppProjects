/**************************************************
* Travis Laxson
* 10-14-17
* Input validation source file to validate all 
* inputs as acceptable values. The inputs will
* all be checked to ensure the program runs 
* smoothly without crashing in the event of garbage
* inputs.
***************************************************/

#include "isValidInput.hpp"
#include<iostream> 
using namespace std;

//Choice input validation
void isValidChoiceInput(int &number){
	//If garbage value
	while(number == cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only 1 to play or 2 to exit." << endl;
		cin >> number;
	}
	//If integer other than 1 or 2
	while(number != 1 && number != 2){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only 1 to play or 2 to exit." << endl;
		cin >> number;
	}
}

//Round input validation
void isValidRoundInput(int &number){
	//If garbage value
	while(number == cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only one value in the range 3 - 50." << endl;
		cin >> number;
	}
	//If integer other than 1 or 2
	while(number < 3 || number > 50){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only one value in the range 3 - 50." << endl;
		cin >> number;
	}
}

//Type of die input validation	 
void isValidTypeInput(int &number){
	//If garbage value
	while(number == cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only 1 for loaded die or 2 for normal die." << endl;
		cin >> number;
	}
	//If integer other than 1 or 2
	while(number != 1 && number != 2){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only 1 for loaded die or 2 for normal die." << endl;
		cin >> number;
	}
}


void isValidSidesInput(int &number){
	//If garbage value
	while(number == cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only a sides value between 3 - 12." << endl;
		cin >> number;
	}
	//If integer other than 1 or 2
	while(number < 3 || number > 12){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please select only a sides value between 3 - 12." << endl;
		cin >> number;
	}
}
