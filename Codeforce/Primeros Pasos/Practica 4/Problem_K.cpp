/*
K. First Number That Cannot Be Formed
time limit per test1 second
memory limit per test256 megabytes

You are given a sorted list of n positive integers a1,a2,…,an. 
Your task is to find the smallest positive integer that cannot be represented as 
the sum of one or more elements of the given list.

In other words, you must find the smallest integer x such that it is impossible 
to choose any subset of the array whose elements sum exactly to x.

Input
The first line contains one integer n (1≤n≤10^6).

The second line contains n sorted positive integers a1,a2,…,an (1≤ai≤10^12).

Output
Print a single integer — the smallest positive integer that cannot be represented 
as a sum of a subset of the given list.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) cin >> a[i];

        long long objetivo = 1;
        
        for(long long i = 0; i < n; i++){
            if(a[i] > objetivo){
                break;
            }
            objetivo += a[i];
        }

        cout << objetivo << "\n"; 
    }
    return 0;
}