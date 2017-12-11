/****************************************************************
 Name: Travis Laxson
 Date: 11/28/17
 Description: Recursive Fibonacci sequence source implementation
 file containing recursive function definition.
*****************************************************************/
#include "recursiveFibonacci.hpp"

int recursive_Fibonacci(int n){
    
    //Base case
    if (n == 0){
        return 0;
    }
    
    //Additional base case
    if (n == 1){
        return 1;
    }
    
    //Recursive case
    return recursive_Fibonacci(n - 1) + recursive_Fibonacci(n - 2);
}
