/*
author: Nadia Salem
Euler Problem 1 from projecteuler.net


If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <iostream>
using namespace std;
int sumofmodthreesandfives(int n);

int main() {
    int in;
    cout << sumofmodthreesandfives(10) << endl; // verified 23 the example answer
    cout << sumofmodthreesandfives(1000) << endl; //answer for euler
    do{
        cout << "What would you like to sum up? ";
        cin >> in;
    }while(in < 3);
    cout << sumofmodthreesandfives(in) << endl;
    return 0;
}
int sumofmodthreesandfives(int n){
    
    int sum = 0;
    for(int i = 3; i < n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    return sum;
}
