/*
Author: Nadia Salem
Euler Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17
Find the sum of all the primes below two million.

*/

#include <iostream>
using namespace std;

bool isPrime(int n, int i);
int main() {
    long int sum = 0;
    for(int i = 2; i < 10; i++){
        if(isPrime(i, 2)){
            sum += i;
        }
    }
    
    cout << sum << endl;
    sum = 0;
    for(int i = 2; i < 2000000; i++){
        if(isPrime(i, 2)){
            sum+= i;
        }
    }
    cout << sum;
    return 0;
}
bool isPrime(int n, int i){
    if(n <= 2){
        return (n == 2) ? true : false;
    }
    if(n %i == 0){
        return false;
    }
    if(i*i > n){
        return true;
    }
    return isPrime(n, i+1);
}
