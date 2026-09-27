#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }

        long long ans = a[0]+a[1];

        if(ans <= a[n-1]){
            cout << 1 << " " << 2 << " "<< n << "\n";
        } else {
            cout << -1 << "\n";
        }

    }
    return 0;
}