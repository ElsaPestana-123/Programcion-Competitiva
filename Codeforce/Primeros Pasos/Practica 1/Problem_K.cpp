/*
K. Triangle Geometry: Area and Perimeter
time limit per test1 second
memory limit per test256 megabytes

You are given a triangle ABC and a point P on the side AB, such that PC
is perpendicular to AB, and the lengths of the segments AP, PB, and PC.

Your task is to calculate:

The area of the triangle ABC.

The perimeter of the triangle ABC.

Input
The only input line contains three positive real numbers AP, PB, and PC
(1≤AP,PB,PC≤10^9) — the lengths described above.

Output
Print two real numbers separated by spaces — the area and the perimeter of the triangle ABC. 
Your answer will be considered correct if its absolute or relative error does not exceed 10^−6.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    double ap, pb, pc;
    cin >> ap >> pb >> pc;
 
    double area = (ap + pb) * pc / 2;
    double ac = sqrt(pow(ap, 2) + pow(pc, 2));
    double bc = sqrt(pow(pb, 2) + pow(pc, 2));
    double perimetro = ap + pb + ac + bc;
    cout << fixed << setprecision(8) << area << " " << perimetro << endl;
    return 0;
}