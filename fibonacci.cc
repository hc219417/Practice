/**
 *   @file: fibonacci.cc
 * @author: Hannah Culver
 *   @date: February 2, 2022
 *  @brief: find the first few terms of the fibonacci sequence
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    
    //method 1 (array)

    int n = 25;
    int fib[n] = {0,1};

    for (int i = 2; i < n; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }

    for (int i = 0; i < n; i++){
        cout << fib[i] << endl;
    }

    //method 2 (rolling variables)

    int n = 25;
    int a = 0;
    int b = 1;
    int c;

    cout << a << endl;
    cout << b << endl;

    for (int i = 2; i < n; i++){
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }

    return 0;
}