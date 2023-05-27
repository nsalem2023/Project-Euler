/*
author: nadia Salem
Euler problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/
#include <iostream>
using namespace std;

bool isPalindrone(int n);
int main() {
    //for the testing question
    int answer = 0;
    for(int i = 1; i < 100; i++){
        for(int j = 1; j < 100; j++){
            if(isPalindrone(i*j) && answer < i*j){
                answer= i*j;
            }
        }
    }
    cout << answer << endl;
    answer = 0;
    //for the three digits
    for(int i = 1; i < 1000; i++){
        for(int j = 1; j < 1000; j++){
            if(isPalindrone(i*j) && answer < i*j){
                answer = i*j;
            }
        }
    }
    cout << answer;
    return 0;
}
bool isPalindrone(int n){
    int result = 0, m = n;
    do{
        result = result*10 + m%10;
    }while(m/= 10);
    return result == n;
}
