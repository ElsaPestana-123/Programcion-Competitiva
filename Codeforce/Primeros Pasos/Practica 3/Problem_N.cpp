/*
N. Iterative Square Root Approximation
time limit per test1 second
memory limit per test256 megabytes

One classical way to approximate square roots is an iterative procedure, sometimes called 
the Babylonian method or Newton's method for square roots.

The method is as follows:

Start with a positive number n and an initial guess g for √n.

A convenient choice for the first guess is g=1.

Repeatedly update the guess as:
g←g+(n/g)/2

This process converges quickly to the true value of √n.

For this problem, you do not need to print the intermediate steps. 
Your task is simply to compute the integer part (the floor) of √n for a given integer n.

Input
The only input line contains a single integer n (1≤n≤10^18).

Output
Print a single integer — the floor of the square root of n.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    long long g = sqrt(n);
 
    cout << g << endl;
 
    return 0;
 
}
