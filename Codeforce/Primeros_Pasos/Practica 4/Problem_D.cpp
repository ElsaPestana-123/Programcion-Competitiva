/*
D. Sum of Powers of Two
time limit per test1 second
memory limit per test256 megabytes

You are given a non-negative integer n. 
Your task is to represent n as a sum of powers of two.

In other words, find all integers k such that 2k is included in the binary representation of n. 
You should print the powers of two that sum up to n, in ascending order.

Input
The only input contains a single integer n (0≤n≤10^9).

Output
Print the powers of two that sum up to n, in increasing order, separated by spaces. If n=0, print nothing (an empty line).
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    vector<long long> powers;
    
    while (n > 0) {
        int exp = 63 - __builtin_clzll(n);
        long long piece = 1LL << exp;
        powers.push_back(piece);
        
        n = n - piece; 
    }
 
    for(int i = powers.size() - 1; i >= 0; i--) {
        cout << powers[i] << " ";
    }
    cout << endl;
 
    return 0;
}