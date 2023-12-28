/**
 *   @file: gcd_and_lcm.cc
 * @author: Hannah Culver
 *   @date: February 2, 2022
 *  @brief: find the gcd and lcm of two numbers
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int a, int b){
    int c;
    a = abs(a);
    b = abs(b);
    while (b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(int argc, char const *argv[]){
    
    int a;
    int b;
    
    cout << "Please enter two numbers: ";
    cin >> a >> b;

    cout << "The greatest common divisor of " << a << " and " << b << " is " << gcd(a,b) << "." << endl;
    cout << "The least common multiple of " << a << " and " << b << " is " << abs(a * b) / gcd(a,b) << "." << endl;

    return 0;
}