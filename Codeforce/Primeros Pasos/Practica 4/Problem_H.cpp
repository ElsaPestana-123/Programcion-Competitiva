/*
H. Max equal Min?
time limit per test1 second
memory limit per test256 megabytes

You are given an integer k and a sorted array a of n positive integers.

In one operation, you can choose any element ai and increase its value by exactly 1. 

You can perform at most k operations in total. 
Your goal is to make as many elements as possible equal to the minimum value in the final array.

What is the maximum possible number of elements that can be equal to the minimum value after at most k operations?

Input
The first line contains two integers n and k (1≤n≤2⋅105, 0≤k≤1018).

The second line contains n integers a1,a2,…,an (1≤ai≤109). 
The array is given in non-decreasing order, i.e., a1≤a2≤⋯≤an.

Output
Print a single integer — the maximum number of elements that can be made equal to the minimum value after at most k operations.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;

    vector<long long> a(n);

    for (long long i = 0; i < n; i++) cin >> a[i];

    long long ans = 0;

    for(long long i = 0; i < n; i++){
        if(a[i] == a[0]) ans++;
        else break;
    }

    cout<< ans << endl;

    return 0;
}