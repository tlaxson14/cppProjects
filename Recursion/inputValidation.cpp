/********************************************************
* Name: Travis Laxson
* Date: 10-26-17
* Description: This source implementation file contains 
* the defintions for all of the input validation functions
* to run a robust program. 
********************************************************/ 

#include "inputValidation.hpp"
#include <iostream>
#include <string>
using namespace std;

//Input validation for menu choice selection 
void inputChoiceValidation(int &choice){
    while(choice == cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a valid choice 1 - 4." << endl;
        cin >> choice;
    }
    
    while(choice != 1 && choice != 2 && choice != 3 && choice != 4){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a valid choice 1 - 4." << endl;
        cin >> choice;
    }
}


//Input validation for size of the array of ints in second recursive 
int inputSizeIntValidation(int &number){
    while(number == cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter any positive integer greater than zero." << endl;
        cin >> number;
    }
    
    while(number < 0){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter any positive integer greater than zero." << endl;
        cin >> number;
    }

    return number;
}

