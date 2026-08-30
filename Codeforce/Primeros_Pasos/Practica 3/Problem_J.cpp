/*
J. Multiples in a Range
time limit per test1 second
memory limit per test256 megabytes

You are given three integers a, b, and x. 
Your task is to print all multiples of x that lie between a and b (inclusive).

First, print them in increasing order. Then, print them again in decreasing order.

Input
The only input line contains three integers a, b, and x (1≤a≤b≤10^6, 1≤x≤10^6).

Output
The first line should contain all multiples of x n the interval [a,b] in increasing order, separated by spaces.
The second line should contain the same numbers in decreasing order, separated by spaces.

If there are no multiples of x in the interval, print an empty line for both outputs.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b,x;
 
    cin >> a >> b >> x;
 
    vector<long long> v;
 
    long long first;
    long long sobra = a % x;
 
    if(sobra == 0)
    first = a;
    else     
    first = a + (x - sobra);
 
    for(long long i = first; i <= b; i+=x){
        v.push_back(i);
    }
 
    if(v.empty()) {
        cout << "\n\n";
        return 0;
    }
 
    for(long long i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
 
    cout << "\n";
 
    for(long long i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
 
    cout << "\n";
 
    return 0;
 
}