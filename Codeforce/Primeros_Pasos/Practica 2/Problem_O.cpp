/*
O. Leap Year
time limit per test1 second
memory limit per test256 megabytes

You are given a single integer n representing a year.

A year is considered leap if it satisfies the following conditions:

If n is divisible by 400, then it is a leap year.

If n is divisible by 4 but not by 100, then it is a leap year.

Otherwise, it is a common year.
Your task is to determine whether the given year n is a leap year.

Input
The only input line contains a single integer n (1≤n≤10^9) — the year.

Output
Print YES if n is a leap year; otherwise, print NO.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0) ) cout << "YES";
    else cout << "NO";
 
    return 0;    
}