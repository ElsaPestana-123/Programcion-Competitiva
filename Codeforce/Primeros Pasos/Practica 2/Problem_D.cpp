/*
D. Calculator
time limit per test1 second
memory limit per test256 megabytes

You are given two integers a and b, and an arithmetic operator OP between them.

The arithmetic operator can be one of the following:

Addition +
Subtraction −
Multiplication ∗
Integer division∗/.

Your task is to compute the result of the expression a OP b.

∗The result must be the quotient of a divided by b, discarding the remainder.

Input
The only line contains an integer a, a character OP, and an integer b
(|a|,|b|≤10^9, OP∈{+,−,∗,/}).

It is guaranteed that if OP is / then b≠0.

Output
Print a single integer — the result of a OP b.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long a,b;
    char c;
    cin >> a >> c >> b;
 
    if(c == '+') cout << a + b << endl;
    else if(c == '-') cout << a - b << endl;
    else if(c == '*') cout << a * b << endl;
    else if(c == '/') cout << a / b << endl;
 
    return 0;    
}