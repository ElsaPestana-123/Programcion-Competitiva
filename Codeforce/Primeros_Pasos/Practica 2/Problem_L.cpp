/*
L. Triangle Classification II
time limit per test1 second
memory limit per test256 megabytes

You are given three integers a, b, and c, representing the angles (in degrees) of a triangle.

Your task is to classify the triangle based on its angles:

If all three angles are strictly less than 90 degrees, the triangle is Acute.

If one of the angles is exactly 90 degrees, the triangle is Right.

If one of the angles is strictly greater than 90 degrees, the triangle is Obtuse.

Input
The only input line contains three integers a, b, and c
(1≤a,b,c, a+b+c=180) — the angles of a triangle.

Output
Print exactly one word: Acute if the triangle is acute, Right if the triangle is right, or Obtuse if the triangle is obtuse.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a, b, c;
    cin >> a >> b >> c;
 
    if (a == 90 || b == 90 || c == 90) {
        cout << "Right" << endl;
    } 
    else if (a > 90 || b > 90 || c > 90) {
        cout << "Obtuse" << endl;
    } 
    else {
        cout << "Acute" << endl;
    }
 
    return 0;    
}