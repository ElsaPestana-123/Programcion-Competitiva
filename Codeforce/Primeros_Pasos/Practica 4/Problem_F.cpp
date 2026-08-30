/*
F. Peaks in a Sequence
time limit per test1 second
memory limit per test256 megabytes

You are given n integers a1,a2,…,an.

An index i (1<i<n) is a peak if it is strictly greater than its neighbors, that is, if a[i−1]<a[i]>a[i+1].

Your task is to count how many peaks exist in the given sequence.

Input
The first line contains an integer n (3≤n≤10^5) — the length of the sequence.

The second line contains n integers a1,a2,…,an (−10^9≤ai≤10^9) — the elements of the sequence.

Output
Print a single integer — the number of indices i (1<i<n) such that a[i−1]<a[i]>a[i+1].
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = 0;

    for(long long i = 1; i < n-1; i++){
        if(a[i] > a[i+1] && a[i] > a[i-1]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}