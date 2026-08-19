#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x,y;
    cin >> x >> y;

    long long ans = 0;

    ans = x + (x - 1) / (y - 1);
    cout << ans << "\n";
    return 0;
}