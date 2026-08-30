/*
I. Factorial Division
time limit per test1 second
memory limit per test256 megabytes

You are given two integers a and b. Your task is to compute the value of a!/b!.

It is guaranteed that the result is always an integer less than 260.

Recall that for any positive integer n, the factorial n! is defined as: n!=1×2×3×⋯×n.

Input
The only input line contains two integers a and b (0≤b≤a≤10^9).

Output
Print a single integer — the value of a!/b!.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b;
 
    cin >> a >> b;
 
    long long ans = 1;
 
    for(long long i = b+1; i <= a; i++){
        ans *= i;
    }
 
    cout << ans << endl;
 
    return 0;
    
}