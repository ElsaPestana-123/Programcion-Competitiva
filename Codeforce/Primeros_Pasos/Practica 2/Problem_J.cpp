/*
J. Last Digit of Factorial
time limit per test1 second
memory limit per test256 megabytes

You are given a non-negative integer n. 
Your task is to compute the last decimal digit of n!, where

0!=1n!=1⋅2⋅3⋅⋯⋅n

Notice that the factorial grows very quickly. For example:

5!=120, last digit is 0,
7!=5040, last digit is 0,
3!=6, last digit is 6.

You need to find the last digit efficiently, even when n is very large.

Input
The only input line contains a single integer n (0≤n≤10^9).

Output
Print a single integer — the last decimal digit of n!.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
 
    if (n >= 5) {
        cout << 0 << endl;
    } 
  
    else if (n == 4) cout << 4 << endl;
    else if (n == 3) cout << 6 << endl;
    else if (n == 2) cout << 2 << endl;
    else cout << 1 << endl; 
 
    return 0;    
}