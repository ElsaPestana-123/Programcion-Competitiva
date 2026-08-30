/*
B. Power of Two
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n. Your task is to determine whether n is a power of two∗.

∗An integer is a power of two if it can be written as 2k for some integer 0≤k.

Input
The only input line contains a single integer n (1≤n≤10^15).

Output
Print a single integer — 1 if n is a power of two; otherwise, print 0.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    string num ="";
 
    while(n != 0){
        num += to_string(n % 2);
        n /= 2;
    }
 
    reverse(num.begin(), num.end());
 
    if (num[0] == '1' && num.substr(1).find_first_not_of('0') == string::npos){
         cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
 
    return 0;    
}