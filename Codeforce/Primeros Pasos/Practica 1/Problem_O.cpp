/*
O. Count Divisibles (Hard version)
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n. 
Your task is to count how many integers from 1 to n (inclusive) are divisible by 2, 3, or 5.

Input
The only input line contains an integer n (1≤n≤10^18).

Output
Print a single integer — the number of integers from 1 to n that are divisible by 2, 3, or 5.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n, res1, res2, res3;
    cin >> n;
 
    res1 = n/ 2;
    res2 = n / 3;
    res3 = n / 5;
 
    long long mcm1 = n / lcm(2,3);
    long long mcm2 = n / lcm(2,5);
    long long mcm3 = n / lcm(3,5);
    long long mcm4 = n / lcm(2, lcm(3,5));
 
    long long result = (res1 + res2 + res3) - (mcm1 + mcm2+mcm3) + mcm4;
 
    cout << result << endl;
 
    return 0;
}