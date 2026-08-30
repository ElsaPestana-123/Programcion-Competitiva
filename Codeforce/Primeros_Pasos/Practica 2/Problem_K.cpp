/*
K. Palindrome Number
time limit per test1 second
memory limit per test256 megabytes
A palindrome number is a number that reads the same forwards and backwards. 
For example, 1, 12321, 434, and 90709 are palindrome numbers, but 54321 is not a palindrome number.

You are given a positive integer consisting of exactly five digits. 
Your task is to determine whether this number is a palindrome or not.

Input
The only input line contains a single integer n (10000≤n≤99999).

Output
Print YES if n is a palindrome; otherwise, print NO.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
 
    if(s == rev){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;    
}