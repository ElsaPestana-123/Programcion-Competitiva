/*
N. Digital Root
time limit per test1 second
memory limit per test256 megabytes

The digital root of a number is obtained by summing all its digits; if the result has more than one digit, the process is repeated until a single digit remains.

For example, the digital root of 9875 is calculated as follows:

9+8+7+5=29
2+9=11
1+1=2 (final result).

Given an integer n (1≤n≤10^18). Your task is to compute its digital root.

Input
The only input line contains a single integer n (1≤n≤10^18).

Output
Print a single digit (between 1 and 9) — the digital root of n.

Scoring
Subtask 1 (40 points): 1≤a≤10^4
Subtask 2 (60 points): No additional constraints.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    int result = n % 9;
    if(result == 0) result = 9;
    cout << result << endl;
 
    return 0;
}