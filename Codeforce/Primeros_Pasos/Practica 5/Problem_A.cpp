/*
E. Square of Asterisks
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n. 
Your task is to print a square of size n×n consisting only of the character *.

Input
The only input line contains a single integer n (1≤n≤1000).

Output
Print a square of n rows and n columns filled with asterisks. Each row must contain exactly n
characters * with no extra spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    string linea(n, '*');
 
    for(long long i = 0; i < n; i++) {
        cout << linea << endl;
    }
    return 0;
}