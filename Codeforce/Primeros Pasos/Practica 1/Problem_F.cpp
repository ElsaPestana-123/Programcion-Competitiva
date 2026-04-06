/*
F. Manhattan vs Euclidean
time limit per test1 second
memory limit per test256 megabytes

You are given the coordinates of two points in a 2D plane: (x1,y1) and (x2,y2). 
Your task is to calculate:

The Manhattan distance between the two points.
The Euclidean distance between the two points.

The Manhattan distance is defined as:
|x1−x2|+|y1−y2|

The Euclidean distance is defined as:
√(x1−x2)^2+(y1−y2)^2

Input
The only input line consists of four integers x1, y1, x2, y2
(−10^9≤x1,y1,x2,y2≤10^9) — the coordinates of the two points.

Output
Print two real numbers on two separate lines — the Manhattan distance between the points and the Euclidean distance between the points, respectively. Your answer will be considered correct if its absolute or relative error does not exceed 10−6
.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
   long long x1, x2, y1, y2;
   cin >> x1 >> y1 >> x2 >> y2;
 
   long long distance = abs(x1 - x2) + abs(y1 - y2);
   cout << distance << endl;
   long long dx = x1 -x2;
   long long dy = y1 - y2;
   long double result = sqrt((long double)(dx*dx) + (long double)(dy*dy));
 
   cout << fixed << setprecision(6) << result << endl;
    return 0;
}