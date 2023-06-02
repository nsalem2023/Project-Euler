/*
Author: Nadia Salem
Euler Problem 9
brute force method

A Pythagorean triplet is a set of three natural numbers, a b c, for which,
a^2 + b^2 = c^2.
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 100.Find the product abc.

*/

#include <iostream>
using namespace std;
int main() {
    
    for(int a = 0; a < 1000; a++){
        for(int b = 0; b < 1000; b++){
            int c = 1000 - a - b;
            long long int result = a * b * c;
            if(a * a + b* b == c * c && a < b && b < c){
                cout << result;
            }
        }
    }
    
    return 0;
}
