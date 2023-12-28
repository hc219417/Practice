/**
 *   @file: euler.cc
 * @author: Hannah Culver
 *   @date: January 12, 2022
 *  @brief: add up multiples of 3 and 5 up to 1000
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int sum = 0;
    for (int i = 0; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}