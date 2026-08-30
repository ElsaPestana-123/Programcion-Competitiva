/*
B. Basic Operations
time limit per test1 second
memory limit per test256 megabytes

Consider two integers "a" and "b".
Your task is to compute and print the results of seven different arithmetic operations between them in a specific order.

For example, if a=10 and b=4, the operations would yield:

Sum: 10+4=14
Subtraction: 10−4=6
Floor division∗: ⌊10/4⌋=2
Modulo (remainder)†: 10mod4=2
Multiplication: 10×4=40
Floating-point division (with exactly 6 digits after the decimal point): 10/4=2.500000
Ceiling division‡: ⌈10/4⌉=3

∗The floor function gives the greatest integer less than or equal to its argument (e.g., ⌊3.14⌋=3, ⌊−3.2⌋=−4).

†n mod m (for integer n and m) is defined as n−⌊n/m⌋⋅m.

‡The ceiling function gives the least integer greater than or equal to its argument (e.g., ⌈3.14⌉=4, ⌈−3.2⌉=−3).

Input
The only input line contains two integers a and b
(|a|,|b|≤2⋅10^9, b≠0), separated by a space.

Output
Print exactly seven lines, each containing the result of one operation in the specified order.

Scoring
Subtask 1(30 points): 1≤a,b≤2⋅10^4

Subtask 2 (30 points): |a|,|b|≤2⋅10^4, b≠0

Subtask 3(40 points): No additional constraints.

For each subtask, points will be awarded based on the correctness of the following operations:

Sum correct: 10% of the subtask's points.
Subtraction correct: 10% of the subtask's points.
Floor division correct: 10% of the subtask's points.
Modulo (remainder) correct: 15% of the subtask's points.
Multiplication correct: 10% of the subtask's points.
Floating-point division correct: 20% of the subtask's points.
Ceiling division correct: 25% of the subtask's points.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b;
    cin >> a >> b;
 
    cout << a + b << endl;
    cout << a - b << endl;
    cout << floor((double)a / (double)b) << endl;
    cout << ((a%b)+b)%b << endl;
    cout << a*b << endl;
    cout << fixed << setprecision(6) << (double)a / (double)b << endl;
    long long res = ceil((double)a / (double)b);
    cout << res << endl;
 
    return 0;
}