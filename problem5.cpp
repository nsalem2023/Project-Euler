/*
Author: Nadia Salem
Euler Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <iostream>
using namespace std;

bool isDivisible(int n, int o){
    for(int i = 1; i <= o; i++){
        if(n%i != 0){
            return false;
        }
    }
    return true;
}

int main() {
    
    long int lcd = 1;
    //get example one
    while(!isDivisible(lcd, 10)){
        lcd++;
    }
    cout << lcd << endl;
    //right answer
    lcd=1;
    while(!isDivisible(lcd, 20)){
        lcd++;
    }
    cout << lcd;
    return 0;
}
