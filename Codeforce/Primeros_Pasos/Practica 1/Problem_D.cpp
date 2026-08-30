/*
D. Real Number Operations
time limit per test1 second
memory limit per test256 megabytes

Given a real number "x" with exactly two decimal digits. 
Your task is to compute and output the following values:

the absolute value of "x" with two decimal digits
the square root of |x| truncated to two decimal digits∗ (without rounding)
the floor of "x"
the ceiling of "x"
"x" rounded to the nearest integer

∗Given a real number x and a non-negative integer d, let truncate(x,d)
denote the result of discarding all decimal digits of x beyond the d-th 
position after the decimal point. This operation does not round the number; it simply removes digits, moving the value closer to zero (e.g., truncate(3.149,2)=3.14, truncate(−3.149,2)=−3.14).

Input
The only input line contains a single real number x (|x|≤10^18), given with exactly two digits after the decimal point.

Output
Print exactly five lines, each containing the result of one operation in the specified order.

Scoring
Subtask 1
(40points): 1≤a≤10^4
Subtask 2(60 points): No additional constraints.

For each subtask, points will be awarded based on the correctness of the following operations:

Absolute value correct: 10% of the subtask's points.
Square root correct: 40% of the subtask's points.
Floor correct: 10% of the subtask's points.
Ceiling correct: 20% of the subtask's points.
Rounded correct: 20% of the subtask's points.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long double a;
    cin >> a;
 
    cout << fixed << setprecision(2);
    
    cout << fabs(a) << endl;
    
    long double raiz = sqrt(fabs(a));
    long double raiz_truncada = floor(raiz * 100.0) / 100.0;
    cout << raiz_truncada << endl;
    
    cout << (long long)floor(a) << endl;
    cout << (long long)ceil(a) << endl;
    cout << (long long)round(a) << endl;
    
    return 0;
}