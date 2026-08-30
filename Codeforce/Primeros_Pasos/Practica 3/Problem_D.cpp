/*
D. Sum and Maximum of a List
time limit per test2 seconds
memory limit per test256 megabytes

You are given n integers a1,a2,…,an. Your task is to compute and print two values:

the sum of all n integers,
the maximum number among the n integers.

Input
The first line contains an integer n (1≤n≤10^6) — the number of integers.

The second line contains n integers a1,a2,…,an (−10^9≤ai≤10^9), separated by spaces.

Output
Print two integers — the sum of all n integers and the maximum value, separated by spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
 
    long long sum = 0;
    long long maxV = a[0];
 
    for(int i = 0; i < n; i++){
        sum += a[i];
        maxV = max(maxV, a[i]);
 
    }
 
    cout << sum << " " << maxV << endl;
    
    return 0;
}