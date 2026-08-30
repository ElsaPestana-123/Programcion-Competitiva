/*
L. Wheel of Time
time limit per test1 second
memory limit per test256 megabytes

Three ancient clocks start ticking together at the same moment. The first clock rings every a
minutes, the second every b minutes, and the third every c minutes.

After how many minutes will all three clocks ring together again for the first time?

Input
The only input line contains three positive integers a, b, and c (1≤a,b,c≤10^9) — the periods (in minutes) of the three clocks.

Output
Print a single integer — the number of minutes after which all three clocks 
will ring together again for the first time.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;

    cout << lcm(a, lcm(b,c)) << endl;
    return 0;
}
