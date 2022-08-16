#include <iostream>
using std:: cout, std:: endl;

int sum_even_fib(){
    // this function produces the fibbonaci sequence up to the number 4 million, it sums each even term of the sequence and returns the sum


    int sum = 2; // initiliaze sum to account for 2, which is an even number, already being in the sequence
    int term1 = 1; // initilaze first two terms of fibonacci sequence
    int term2 = 2;
    int next_term = term1 + term2; // compute 3rd term before entering loop that computes the rest of the sequence
    sum = 2;
    while(true){
        if(next_term >= 4E6){
            return sum; // leave loop and return sum if the new term is greater than 4 million
        }
        if(next_term % 2 == 0){
            sum += next_term; // sum new even term
        }
        // reset terms in sequence and update the loop condition which defacto is next_term
        term1 = term2; // set lower term to term 2
        term2 = next_term; // set term2 to next_term
        next_term = term1 + term2; // recompute next_term as the sum of the two preceding terms
  } // end while loop
} // end function

int main()
{
    cout << sum_even_fib() << endl;

    return 0;
}
