/*
C. Grade Value
time limit per test1 second
memory limit per test256 megabytes
You are given a single uppercase letter that represents a grade: one of A, B, C, D, or F. 
Your task is to print its corresponding numerical value based on the following scale:

Grade	Numerical Value
A	          4
B	          3
C	          2
D	          1
F	          0

Input
The only input line contains a single character g (g∈{A,B,C,D,F}) — the grade.

Output
Print a single integer — the numerical value of the grade.

Scoring
For this problem, you will receive 20 points for each correct conversion of a grade letter to its numerical value.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    char a;
    cin >> a;
 
    if(a == 'A') cout << 4;
    else if(a == 'B') cout << 3;
    else if(a == 'C') cout << 2;
    else if(a == 'D') cout << 1;
    else if(a == 'F') cout << 0;
   
    return 0;
}