/*
N. Decompose into Powers of Two
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n(1≤n<64). Your task is to represent n as a sum of distinct powers of two and output the minimum number of terms required, followed by the powers themselves.

For example, if n=13, then 13=8+4+1. 
The minimum number of powers of two is 3, and the required powers are 8, 4, and 1.

You must always print the powers in decreasing order.

Input
The only input line contains a single integer n (0≤n≤63).

Output
The first line should contain a single integer k, representing the minimum number of distinct powers of two that sum to n.

The second line should contain k integers, the powers of two in descending order.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }
 
    vector<long long> powers;
    
    while (n > 0) {
        int exp = 63 - __builtin_clzll(n);
        long long piece = 1LL << exp;
        powers.push_back(piece);
        
        n = n - piece; 
    }
    
    cout << powers.size() << endl;
 
    return 0;
}