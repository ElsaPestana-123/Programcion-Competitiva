/*
G. Count Divisibles (Easy version)
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n. 
Your task is to count how many integers from 1 to n are divisible by 2.

Input
The only input line contains a single integer n (1≤n≤10^18).

Output
Print a single integer — the number of integers between 1 and n that are divisible by 2.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>> n;
    
    cout << n/2;
    return 0;
}