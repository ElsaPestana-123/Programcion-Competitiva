/*
M. Circumferences Intersection
time limit per test1 second
memory limit per test256 megabytes

You are given two circumferences in the plane. 
Each circumference is defined by its center coordinates and its radius.

Your task is to determine the number of points that belong to both circumferences simultaneously.

The answer can be:

0, if the circumferences do not intersect,
1, if the circumferences are tangent,
2, if the circumferences intersect in two points,
Infinity, if the circumferences coincide completely.

Input
The only input line contains six integers x1, y1, r1, x2, y2, r2
(|x1|,|y1|,|x2|,|y2|≤10^4, 1≤r1,r2≤10^4) — (x1,y1) 
is the center of the first circumference with radius r1, and (x2,y2) is the center of the second circumference with radius r2.

Output
Print the answer to the problem.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long x1,y1,r1;
    long long x2,y2,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
 
    double distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
 
    double suma_radi = r1 + r2;
    double resta_radi = abs(r1 - r2);
 
    if(resta_radi < distancia && distancia < suma_radi){
        cout << "2" << endl;
    } else if(distancia == suma_radi || distancia == resta_radi){
        cout << "1" << endl;
    } else if(distancia > suma_radi || distancia < resta_radi){
        cout << "0" << endl;
    } else {
        cout<< "Infinity";
    }
 
    return 0;    
}