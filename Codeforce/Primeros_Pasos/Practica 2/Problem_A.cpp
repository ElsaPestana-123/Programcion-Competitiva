/*
A. Divisor of 2048
time limit per test1 second
memory limit per test256 megabytes

You are given a positive integer n. 
Your task is to determine whether n is a divisor of 2048.

If n divides 2048 (i.e., there exists an integer ksuch that 2048k=n), print 1. Otherwise, print 0.

Input
The only input line contains an integer n
(0≤n≤2048).

Output
Print a single integer — 1 if n is a divisor of 2048; otherwise, print 0.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    if(n != 0 && 2048 % n == 0) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}