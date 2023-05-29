/*
Author: Nadia Salem
Euler Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

bool isPrime(long int n);

#include <iostream>
using namespace std;
int main() {
    int i = 0, n = 1;
    while(i < 6){
        n++;
        if(isPrime(n)){
            i++;
        }
    }
    cout << n << endl;
    i = 0; 
    n = 1;
    while(i < 10001){
        n++;
        if(isPrime(n)){
            i++;
        }
    }
    cout << n << endl;
    return 0;
}
bool isPrime(long int n){
    for(int i =2; i <= n/2; i++){
        if(n% i == 0){
            return false;
        }
    }
    return true;
}
