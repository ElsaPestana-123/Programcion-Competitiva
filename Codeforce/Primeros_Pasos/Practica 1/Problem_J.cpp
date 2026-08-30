/*
J. Count Divisibles (Medium version)
time limit per test1 second
memory limit per test256 megabytes

You are given a positive integer n. 
Your task is to count how many integers from 1 to n (inclusive) are divisible by 2 or by 3.

Input
The only input line contains a single integer n (1≤n≤10^18).

Output
Print a single integer — the number of integers from 1 to n that are divisible by 2 or by 3.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n, res1, res2, sum;
    cin >> n;
 
    res1 = n/ 2;
    res2 = n / 3;
    sum = res1 + res2 - (n/lcm(2, 3));
 
    cout << sum << endl;
 
    return 0;
}