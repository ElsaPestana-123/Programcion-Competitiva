/*
G. Divisible by Two or Three
time limit per test1 second
memory limit per test256 megabytes

You are given a single integer n. 
Your task is to determine whether nis divisible by 2 or by 3, but not both at the same time.

Input
The only input line contains a single integer n
(1≤n≤10^9).

Output
Print YES if n is divisible by 2 or by 3, but not both; otherwise, print NO.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    if((n % 2 == 0 || n % 3 == 0) && !(n % 2 == 0 && n % 3 == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;    
}