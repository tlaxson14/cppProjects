/****************************************************************
 Name: Travis Laxson
 Date: 11/28/17
 Description: Iterative Fibonacci sequence source implementation
 file containing iterative function definition.
 *****************************************************************/
#include "iterativeFibonacci.hpp"

int iterative_Fibonacci(int n){
    
    //Special n cases for n = 0, n = 1
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    
    int first_num = 0;      //Initial Fibo number
    int prev_num = 1;       //Follow-up Fibo number
    int result = 0;         //Calculated result of Fibo sequence
    
    //Loop through beginning with index of 2
    for (int i = 2; i <= n; i++){
        
        //Calculate result
        result = prev_num + first_num;  //0 + 1 = 1 = result :: result = 1 + 1 = 2 :: result = 2 + 1 = 3 :: result = 3 + 2 = 5 ::
        
        //Assign previous value to first number
        first_num = prev_num;   // 0 -> 1 :: 1 -> 1 :: 1 -> 2 :: 2 -> 3 ::
        
        //Assign previous value to result
        prev_num = result;      // 1 -> 1 :: 1 -> 2 :: 2 -> 3 :: 3 -> 5 ::
    }
    
    return result;
}
