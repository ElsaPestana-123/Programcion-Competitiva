/*
F. Sum of Pairs Until EOF
time limit per test1 second
memory limit per test256 megabytes

You are given an input containing an arbitrary number of pairs of integers. 
Yor task is for each pair, calculate the sum of the two integers and print the result.

Input
The input contains multiple lines. Each line contains two integers a and b (−10^9≤a,b≤10^9).

The number of lines is not fixed in advance.

Output
Print a line containing a single integer for each input line — the sum a+b.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long a,b;
 
    while (cin>>a>>b){
        cout << a + b << "\n";
    }
 
    return 0;
} 