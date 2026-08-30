/*
T. Spiral
time limit per test1 second
memory limit per test256 megabytes

The numbers 1 through n^2
are arranged in a square table, starting from the top left corner and spiraling 
clockwise, as shown below:

1	2	3	4	5
16	17	18	19	6
15	24	25	20	7
14	23	22	21	8
13	12	11	10	9

Your task is to write a program that, given the row r and column c of a number in the table, prints the value at that position.

Input
The first line of the input contains a single integer n
(1≤n≤10^6) — the size of the table.

The second line of the input contains two integers r and c
(1≤r,c≤n) — the position in the table.

Output
Print a single integer — the number located at position (r,c) in the table.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n, x,y;
    cin >> n; 
    cin >> x >> y;
 
    long long capa =min({x - 1, n - x, y - 1, n - y});
 
    long long L = n-2 * capa;
    long long base = (n*n) - (L*L);
 
    if( x == capa+1)
    base = base + y - capa;
    else if( y == n-capa)
    base = base + (L-1) + (x-capa);
    else if( x == n-capa)
    base = base + 2*(L-1) + (n-capa - y+1);
    else if ( y == capa+1)
    base = base + 3*(L-1) + (n-capa - x+1);
 
    cout << base << endl;
 
    return 0;
}