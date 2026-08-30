/*
M. Even-Odd Split
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n and a list of n integers.

Your task is to determine whether there exists an integer x (0≤x≤n) such that:

the first x numbers in the list are all even, and
the remaining n−x numbers are all odd.

Print YES if such an x exists, and NO otherwise.

Input
The first line contains an integer n (1≤n≤10^5).

The second line contains n integers a1,a2,…,an (−10^9≤ai≤10^9).

Output
Print YES if there exists an integer x (0≤x≤n) such that the first x
elements of the sequence are even and the remaining ones are odd. Otherwise, print NO.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    vector<long long> num;
 
    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        num.push_back(x);
    }
 
    bool impar = false;
    bool incompleto = true;
 
    for(long long i =0; i < n; i++){
 
        if(num[i] % 2 != 0){
            impar = true;
        } else {
            if(impar){
                incompleto = false;
            }
        }
    }
 
    if(incompleto){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
 
}