/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

/* This is question 1 of project euler. The first question asks that we sum all the multiples of 3 and 5 below 
1000. This function computes that and tests it in main */ 

int sum_multiples(int begin, int end){
    int sum = 0; 
    // not accounting for possible overflow or negative values because we are asked to sum between 1 - 999 
    for(int i = begin; i <= end-1; ++i){
        if((i % 3 == 0) || (i % 5 == 0)){
            sum += i; // sum multiples of 3 or 5 in between input values
        }
        else{
            continue; // go to next iteration, not necessary 
        }
    }
    return sum;
    
} // end function 

int main()
{
    cout << sum_multiples(1,1000);

    return 0;
}