/*
A. Numbers in Reverse Order
time limit per test1 second
memory limit per test256 megabytes

You are given a single integer n. 
Your task is to print all integers from 1 to n (inclusive), in descending order.

Input
The only input line contains a single integer n (1≤n≤10^5).

Output
Print n integers — all numbers from n down to 1, separated by spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    vector<long long> a(n);
 
    a[0] = n;
 
    for (long long i = 1; i < n; i++){
        a[i] = a[i-1] - 1;
    }
 
    for (long long i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}