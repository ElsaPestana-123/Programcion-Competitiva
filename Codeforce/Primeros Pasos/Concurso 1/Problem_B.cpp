#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long b, p;
    cin >> b;
 
    p = 5 * b - 400;
    cout << p << endl;
    if(p > 100) cout << -1 << endl;
    else if(p == 100) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
} 