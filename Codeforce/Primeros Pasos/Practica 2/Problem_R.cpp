/*
R. Number Spiral
time limit per test1 second
memory limit per test256 megabytes
You are given an infinite grid filled in a number spiral pattern. 
The spiral starts at the top-left corner with number 1 and increases as follows:

1	2	9	10	25
4	3	8	11	24
5	6	7	12	23
16	15	14	13	22
17	18	19	20	21

Formally, the number spiral starts at 1 at the top-left corner and extends infinitely outward in layers.

You are given the coordinates (y,x) (1−indexed). Your task is to find the number at that coordinate in the spiral.

Input
The only input line contains two integers y and x (1≤y,x≤10^9) — the coordinate of the desired cell.

Output
Print a single integer — the number located at the coordinate (y,x) in the spiral.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int y,x;
    cin >> y >> x;
 
    long long capa= max(y,x);
 
    if(capa%2==0){
        long long base = (capa - 1) * (capa - 1);
        if(capa == x){
            cout << base + y;
        } else {
            cout << (capa * capa) - x + 1;
        }
       
    } else {
        long long base = (capa - 1) * (capa - 1);
        if(capa == y){
            cout << base + x;
        } else {
            cout << (capa * capa) - y + 1;
        }
        
    }
    return 0;
}