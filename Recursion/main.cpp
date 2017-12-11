/***************************************************
* Name: Travis Laxson
* Date: 10-26-17
* Description: Main source implementation file
* that will display a menu of available options
* for the user to select. The user may enter one
* of the menu values either to print a string in
* reverse, calculate the sum of a user-defined
* array of integers, or calculate the sum of a 
* triangular number. Note: a triangular number has
* the equation t(n) = n(n+1)/2 and will calculate
* the sum of the n natural numbers from 1 to n.
* Source ideas and additional info came from: 
* learncpp.com/, cplusplus.com/, wikipedia.org/wiki/
* Triangular_number, and Gaddis textbook examples.  
*****************************************************/

#include "firstRecursive.hpp"
#include "secondRecursive.hpp"
#include "thirdRecursive.hpp"
#include "inputValidation.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
	int choice;
    
    do{
        //Show menu
        cout << "--------------------------------" << endl;
        cout << "\t Recursion Menu " << endl;
        cout << "--------------------------------" << endl;
        cout << "1. Print string in reverse" << endl;
        cout << "2. Calculate the sum of an array of integers" << endl;
        cout << "3. Calculate the sum of a triangular number of N integers" << endl;
        cout << "4. Quit program\n" << endl;
                                                        
        //Get menu choice
        cout << "Selection: ";
        cin >> choice;
        
	//Input choice validation
	inputChoiceValidation(choice); 
                                                                                            
        //Switch to choice input case
        switch(choice){
        	//First recursive function
                case 1:{
			string phrase;	//User getline input variable
			
			//Get string input from user and ignore newline character in buffer stream
			cout << "Enter a phrase and I will reverse it." << endl;
			cin.ignore();
			getline(cin, phrase);
			
			//Call function to reverse string
                        reverseString(phrase);
                        break;
		}
               
		//Second recursive function
 	        case 2:{
			int size, *array = nullptr, sum = 0;

			//Get size of array of ints
			cout << "Enter the number of integers to sum: ";
                	cin >> size;
			
			//Input validation
			int validSize = inputSizeIntValidation(size);

			//Dynamically allocate size of array
			array = new int[validSize];

			//Get user-inputs for each integer in array
			for(int i = 0; i < validSize; i++){
                    		cout << "Enter value " << i+1 << ": ";
                    		cin >> array[i];
                	}

			//Assign variable sum to function call passing 
			//pointer to array and size of array to function	
			sum = calcSum(array, size);
                
			//Format and show sum of array
			cout << "------------------" << endl;
                	cout << "Sum of array = " << sum << endl;

			//Deallocate memory in heap used by array
			delete [] array;
			array = nullptr;
			break;
		}
		
		//Third recursive function
		case 3:{
			int integer = 0, triangularNum = 0;
			
			//Get triangular number (N) input from user
			cout << "Enter a number: ";
                	cin >> integer;			
		
			//Input validation
			inputSizeIntValidation(integer);
	
			//Assign variable triangularSum to function call
			//passing integer parameter to calculate the triangular sum
			triangularNum = calcTriangularNum(integer);		

			//Show triangular sum
			cout << "Triangular number = " << triangularNum << endl;
                	break;
           	 }
           	 case 4:{
                	cout << "Program terminated." << endl;
                	cout << endl;
                	break;
            	}
      	}
    }
    while(choice != 4);
    
return 0;

}

		
