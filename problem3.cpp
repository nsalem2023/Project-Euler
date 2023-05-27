/*
autor: Nadia Salem
Eulers problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>
using namespace std;
int main() {
    //testing first part should be 29 as the largest
    int n = 13195;
    //too long for a regular int changed to long int
    long int m = 600851475143;
    
    for(int i = 2; i < n/2; i++){
        if(n% i == 0){
            n /= i;
        }
    }
    cout << n << endl;
    //since previous method worked using the same method
    for(int j = 2; j < m/2; j++){
        if(m % j == 0){
            m /= j;
        }
    }
    cout << m << endl;
    
    return 0;
}
