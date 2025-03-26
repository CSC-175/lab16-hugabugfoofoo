// Code to implement the gcf function goes here
#include <cmath>
#include <iostream>
using namespace std;
int gcf(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;

    }
    return a;
}