/*
C. Factorial Sequence
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n. 
Your task is to print the first n factorials modulo 109+7.

Input
The only input line contains a single integer n(1≤n≤10^6).

Output
Print n integers — 1!,2!,…,n!, modulo 109+7, separated by spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main(){
 
    long long n;
    cin >> n;
 
    vector<long long> fact(n + 1);
 
    fact[0] = 1;
 
    for(int i = 1; i <= n; i++){
        fact[i] = (fact[i - 1] * i) % MOD;
        cout << fact[i] << " ";
    }
 
    return 0;
}