/*
I. GCD
time limit per test1 second
memory limit per test256 megabytes

Given two non-negative integers a and b, compute their greatest common divisor gcd(a,b).

The greatest common divisor of integers a and b (not both zero) is the largest integer d
such that d divides both a and b.

Input
The only input line contains two integers a and b (0≤a,b≤10^18).

It is guaranteed that at least one of the values, a or b, is positive.

Output
Print a single integer — the value of gcd(a,b).

Scoring
Subtask 1 (50 points): 0≤a,b≤10^6
Subtask 2 (50 points): 0≤a,b≤10^18
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b;
    cin >> a >> b;
 
    long long resto; 
    while(b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
 
    cout << a << endl;
 
    return 0;
}