/*
    Author: Nadia Salem
    Euler Problem 5 (rethink)
    
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

Euclidean Algorithm for GCD
LCD = multiplication of the numbers / gcd of the numbers
*/
#include <iostream>
using namespace std;

int GCD(int a, int b);
int LCD(int a, int b);

int main() {
    int lcd = 1;
    for(int i = 2; i < 20; i++){
        lcd = LCD(lcd, i);
    }
    cout << lcd;
    return 0;
}
int GCD(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    int r = a%b;
    
    return GCD(b,r);
    
}
int LCD(int a, int b){
    return a*b/GCD(a,b);
}
