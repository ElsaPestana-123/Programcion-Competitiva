/*
P. Matrix Neighbors
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n representing the size of a square matrix. 
The matrix is generated automatically as follows: fill the n×n matrix with consecutive 
even numbers starting from 2, row by row, from left to right.

For example, if n=5, the matrix is:

2	4	6	8	10
12	14	16	18	20
22	24	26	28	30
32	34	36	38	40
42	44	46	48	50

You are also given the coordinates of a cell (r,c) (1≤r,c≤n). 
Your task is to print nine integers: the value of the cell (r,c) and its eight neighbors.

Input
The only input line contains three integers n, r, and c (1≤n≤1000, 1≤r,c≤n).

Output
Print nine integers — top-left, top, top-right, left, the cell (r,c), right, bottom-left, bottom, bottom-right.

Print 0 for any neighbor that does not exist because the cell is on the border.

Scoring
For 50% of points, it is guaranteed that the cell will not be on a border.
*/
#include <bits/stdc++.h>
using namespace std;
 
long long calcular_vecinos(long long r, long long c, long long n){
 
    if (r < 1 || r > n || c < 1 || c > n) 
    return 0;
    
    long long p = ((r-1) * n + c) * 2;
 
    return p;
}
 
int main(){
 
    long long n,r,c;
    cin >> n >> r >> c;
 
    long long AI = calcular_vecinos(r-1,c-1,n);
    long long A = calcular_vecinos(r-1,c,n);
    long long AD = calcular_vecinos(r-1,c+1,n);
    long long I = calcular_vecinos(r,c-1,n);
    long long C = calcular_vecinos(r,c,n);
    long long D = calcular_vecinos(r,c+1,n);
    long long BI = calcular_vecinos(r+1,c-1,n);
    long long B = calcular_vecinos(r+1,c,n);
    long long BD = calcular_vecinos(r+1,c+1,n);
 
    cout << AI << " " << A << " " << AD << " " << I << " " << C << " " << D << " " << BI << " " << B << " " << BD;
 
    return 0;    
}