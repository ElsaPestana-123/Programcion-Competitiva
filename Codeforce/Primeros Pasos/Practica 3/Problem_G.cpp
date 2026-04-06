/*
G. Sum of Digits
time limit per test1 second
memory limit per test256 megabytes

You are given a single integer n. 
Your task is to compute the sum of its decimal digits.

Input
The only input line contains a single integer n (0≤n≤10^18).

Output
Print a single integer — the sum of the digits of n.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    long long sum = 0;
 
    while (n > 0){
 
        sum += n % 10;
        n /= 10;
    }
 
    cout << sum << endl;
 
    return 0;
} 