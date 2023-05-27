/*
    Author: Nadia Salem
    Euler problem 6
    The numbers in the description where typed because it wouldn't copy.
    The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + 3^2+  ... + 10^2=385
The square of the sum of the first ten natural numbers is,
(1+2+3+... + 10)^2 = 55^2=3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 
.3025-385=2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
Using the formulas version
*/
#include <iostream>
using namespace std;

int sumNaturalSquares(int n);
int squareSumOfNaturalNumbers(int n);

int main() {
    //Checking the example answer
    cout <<squareSumOfNaturalNumbers(10) - sumNaturalSquares(10) << endl;
    //Answering the question
    cout <<squareSumOfNaturalNumbers(100)- sumNaturalSquares(100);
    return 0;
}
//n(n+1)(2n+1)/6 sum of natural squares eg 1^2 + 2^2 + 3^2 + ,,, + n^2
int sumNaturalSquares(int n){
    return n * (n + 1) * (2 * n + 1 )/6;
}
//n(n+1)/2 sum of natural numbers eg 1 + 2 + 3 + ... n
int squareSumOfNaturalNumbers(int n){
    int sum = n * (n+1)/ 2;
    return sum * sum;
}
