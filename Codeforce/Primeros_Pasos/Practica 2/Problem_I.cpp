/*
I. Triangle Classification
time limit per test1 second
memory limit per test256 megabytes

You are given three positive integers a, b, and c representing the lengths of three line segments.

Your task is to determine whether it is possible to construct a valid triangle using these segments. 
If a triangle can be formed, classify it as one of the following:

Equilateral — all three sides are equal.
Isosceles — exactly two sides are equal.
Scalene — all sides are different.
If the three segments cannot form a valid triangle, output "Invalid".

Input
The input consists of three integers a, b, and c (1≤a,b,c≤10^9) — the lengths of the segments.

Output
Print one word describing the result:

Equilateral if the triangle has all equal sides.
Isosceles if the triangle has exactly two equal sides.
Scalene if the triangle has all sides different.
Invalid if the given segments cannot form a valid triangle.

*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long a, b,c;
    cin >> a >> b >> c;
 
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        
        if(a == b && b == c) {
            
            cout << "Equilateral" << endl;
        } 
        else if(a == b || a == c || b == c) {
            cout << "Isosceles" << endl;
        } 
        else {
            cout << "Scalene" << endl;
        }
 
    } else {
        
        cout << "Invalid" << endl;
    }
    
    return 0;    
}