/*
L. Fibonacci Modulo
time limit per test1 second
memory limit per test256 megabytes

The Fibonacci sequence is defined as follows:
F(0)=0,F(1)=1,
and for every integer n≥2,
F(n)=F(n−1)+F(n−2).

Your task is to compute the n-th Fibonacci number modulo 109+7.

Input
The only input line contains a single integer n (0≤n≤10^6).

Output
Print a single integer — the value of F(n)mod(109+7).
*/
#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main(){
 
    long long n;
    cin >> n;
 
    long long f1 = 0;
    long long f2 = 1;
 
    for (long long i = 0; i < n; i++){
        long long f3 = (f1 + f2) % MOD;
        f1 = f2;
        f2 = f3;
    }
 
    cout << f1 << endl;
 
    return 0;
 
}