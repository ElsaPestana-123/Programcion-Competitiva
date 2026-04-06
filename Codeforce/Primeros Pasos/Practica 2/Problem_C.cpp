/*
C. Rectangle in Circle
time limit per test1 second
memory limit per test256 megabytes

You are given a rectangle with side lengths a and b, and a circle with radius r. 
Your task is to determine whether the rectangle can be completely placed inside the circle.

Input
The only line contains three integers a, b, and r
(1≤a,b,r≤10^9) — the side lengths of the rectangle and the radius of the circle, respectively.

Output
Print YES if the rectangle fits inside the circle; otherwise, print NO.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long a, b, r;
    cin >> a >> b >> r;
 
    if((a*a + b*b) <= (4 * r * r)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;    
}