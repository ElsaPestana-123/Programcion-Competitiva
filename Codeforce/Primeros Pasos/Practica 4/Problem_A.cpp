/*
A. Divisible Numbers
time limit per test1 second
memory limit per test256 megabytes

You are given a positive integer n. 
Your task is to print all integers from 1 to n that are divisible by 2, 3, or 5.

Input
The only input line contains a single integer n (1≤n≤10^5).

Output
Print all integers from 1 to n that are divisible by 2, 3, or 5 in ascending order, separated by spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
 
    set<long long> conjunto;
   
    for(long long i = 2; i <= n; i+=2){
        conjunto.insert(i);
    }
 
    for(long long i = 3; i <= n; i+=3){
        conjunto.insert(i);
    }
 
    for(long long i = 5; i <= n; i+=5){
        conjunto.insert(i);
    }
 
    for(long long i: conjunto){
        cout << i << " ";
    }
 
    return 0;
}