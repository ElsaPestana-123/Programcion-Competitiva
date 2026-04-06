/*
F. Shelf and Door
time limit per test1 second
memory limit per test256 megabytes

You have a rectangular shelf with dimensions a×b×c. 
You also have a rectangular door with dimensions x×y.

The shelf can be rotated in any orientation, and you may try to pass it through the door using any of its faces.

Your task is to determine whether the shelf can pass through the door.

Input
The first line contains three integers a, b, and c (1≤a,b,c≤1000) — the dimensions of the shelf.

The second line contains two integers x and y (1≤x,y≤1000) — the dimensions of the door.

Output
Print YES if the shelf can pass through the door; otherwise, print NO
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long x,y,a,b,c;
    cin >> a >> b >> c;
    cin >> x >> y;
 
    vector<long long> v = {a,b,c};
    vector<long long> v2 = {x,y};
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
 
    if(v[0] <= v2[0] && v[1] <= v2[1]) 
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
 
    return 0;    
}