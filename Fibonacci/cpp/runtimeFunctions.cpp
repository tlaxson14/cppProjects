/****************************************************************
 Name: Travis Laxson
 Date: 11/28/17
 Description: Runtime source implementation file for comparison
 of runtime execution between iterative and recursive Fibonacci
 sequence functions. This file contains all of the runtime
 execution logic in addition to the function definitions used
 to show the title, N(x) values, and also to calculate change in
 execution runtime (dT) for each Fibonacci function.
 *****************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "runtimeFunctions.hpp"
#include "iterativeFibonacci.hpp"
#include "recursiveFibonacci.hpp"

//Namespaces
using std::endl;
using std::cout;
using std::fixed;
using std::showpoint;
using std::setprecision;

/***********************************************************
 Name: show_N
 Paramters: (1) - integer value for loop iteration
 Purpose: Show the N(x) value for each subsequent iteration.
*************************************************************/
void show_N(int n){
    cout << "\n\t\t\t---------" << endl;
    cout << "   \t\t\t| N(" << n << ") |" << endl;
    cout << " \t\t\t---------" << endl;
}

/*************************************************************
 Name: showExecutionTime
 Paramters: (1) - unsign long integer value for time variable
 Purpose: Show the execution runtime of the Fibonacci function
 in both seconds and clicks.
*************************************************************/
void showExecutionTime(unsigned long t){
    cout << "\n---------\nSeconds: " << fixed << showpoint << setprecision(7) << (float)t / CLOCKS_PER_SEC << "\t ";
    cout << "Clicks: " << t << "\n" << endl;
}

/**************************************************
 Name: title
 Paramters: none
 Purpose: Show the title of the runtime comparison.
**************************************************/
void title(){
    cout << "--------------------------------------" << endl;
    cout << "  Iterative vs. Recursive Fibonacci \n    Execution Time (s) and Clicks" << endl;
    cout << "--------------------------------------";
}

/**************************************************************
 Name: calcDeltaT
 Paramters: (2) - unsign long integer values for time variables
 Purpose: Calculate and return the total execution runtime for
 the Fibonacci sequence functions.
**************************************************************/
unsigned long calcDeltaT(unsigned long t0, unsigned long t1){
    unsigned long tFinal = 0.0;
    
    return tFinal = t1 - t0;
}

/*********************************
 Name: run
 Paramters: none
 Purpose: Run the program logic.
**********************************/
void run(){
    for(int i = 1; i <= 50; i++){
        
        clock_t time0;      //Declare clock variable 1
        clock_t time1;      //Declare clock variable 2
        clock_t dT;         //Declare clock variable 3
        
        //Show title
        title();
        
        //Show N(i-th) value
        show_N(i);
        
        cout << "Iterative";
        
        //Assign clock value with clock var1
        time0 = clock();
        
        //Call iterative Fibo seq
        iterative_Fibonacci(i);
        
        //Assign clock value with clock var2
        time1 = clock();
        
        //Calculate difference in time (delta t = var2 - var1)
        dT = calcDeltaT(time0, time1);
        
        //Show seconds and clicks
        showExecutionTime(dT);
        
        cout << "Recursive";
        
        //Assign clock functon
        time0 = clock();
        
        //Call recursive Fibo seq
        recursive_Fibonacci(i);
        
        time1 = clock();
        
        //Calculate difference in time
        dT = calcDeltaT(time0, time1);
        
        //Show seconds and clicks
        showExecutionTime(dT);
    }
}
