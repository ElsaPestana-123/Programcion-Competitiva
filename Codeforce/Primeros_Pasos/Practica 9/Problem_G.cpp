#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >>t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(2*n);

        for(long long i = 0; i < 2*n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long ans = abs(a[n-1] - a[0]) + abs(a[2*n-1] - a[n]);

        cout << ans << endl;

        for(long long i = 0; i < n; i++){
            cout << a[i] << " " << a[i+n] << endl;
        }

    }
    return 0;
}