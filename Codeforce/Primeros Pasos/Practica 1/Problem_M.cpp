/*
M. Sort Three Numbers
time limit per test1 second
memory limit per test256 megabytes

You are given three integers x, y, and z. 
Your task is to print them in non-decreasing order, separated by spaces.

Input
The only input line contains three integers x, y, and z (−10^9≤x,y,z≤10^9).

Output
Print the three integers in the correct order, separated by spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    vector<long long> v(3);
    long long x,y,z;
    cin >> x >> y >> z;
    v[0] = x;
    v[1] = y;
    v[2] = z;
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
 
    return 0;
}