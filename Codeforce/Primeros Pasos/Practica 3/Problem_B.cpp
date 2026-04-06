/*
B. Powers of Two
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n. 
Your task is to print all powers of two ∗that are less than or equal to n in ascending order.

∗A power of two is any number of the form 2k where k≥0.

Input
The only input line contains a single integer n (1≤n≤10^18).

Output
Print all powers of two less than or equal to n in ascending order, separated by spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    long long num = 1;
 
    while (num <= n){
        cout << num << " ";
        num *= 2;
    }
    
    return 0;
}