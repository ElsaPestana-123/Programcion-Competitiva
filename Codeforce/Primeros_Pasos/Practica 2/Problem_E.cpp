/*
E. Check Between Numbers
time limit per test1 second
memory limit per test256 megabytes

You are given three integers a, b, and n.

Your task is to determine if the number n lies between a and b (inclusive), regardless of their order. 
That is, check if n satisfies min(a,b)≤n≤max(a,b)

Input
The only input line contains three integers a, b, and n (|a|,|b|,|n|≤10^9).

Output
Print YES if n is between a and b (inclusive); otherwise, print NO.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long a, b, n;
    cin >> a >> b >> n;
 
    long long min1 = min(a, b);
    long long max1 = max(a, b);
 
    if(min1 <= n && n <= max1)
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;
    
    return 0;    
}