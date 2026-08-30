/*
I. Alternating Circular Lock
time limit per test1 second
memory limit per test256 megabytes

You are given a circular lock with m positions, numbered from 0 to m−1 in clockwise order.

The lock starts at position n, and you are given a sequence of five movements: k1,k2,k3,k4,k5. 
The movements alternate directions:

The first movement is clockwise.
The second movement is counter-clockwise.
The third movement is clockwise, and so on.
Your task is to compute the resulting position on the lock after each of the first i movements (i∈{1…5}).

Input
The first line contains a single integer m (2≤m≤10^9) — the number of positions in the lock.

The second line contains a single integer n (0≤n<m) — the starting position.

The third line contains five integers k1,k2,k3,k4,k5 (0≤ki<10^9) — the steps of each movement.

Output
Print five integers separated by spaces — the i-th number is the lock's position after applying the first i movements in order.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long m,n,k1,k2,k3,k4,k5;
 
    cin >> m;
    cin >> n;
    cin >> k1 >> k2 >> k3 >> k4 >> k5;
 
    long long res1, res2, res3, res4, res5;
    res1 = (n + k1) % m;
    res2 = (res1 - (k2 % m) + m) % m;
    res3 = (res2 + k3) % m;
    res4 = (res3 - (k4 % m) + m) % m;
    res5 = (res4 + k5) % m;
 
    cout << res1 << " " << res2 << " " << res3 << " " << res4 << " " << res5 << endl;
 
    return 0;
}