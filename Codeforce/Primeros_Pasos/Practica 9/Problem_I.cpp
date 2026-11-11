#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

void solve(){
    int n;
    if(!(cin >> n)) return;
    vector<long long> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n-1; i++){
        if(abs(a[i] - a[i+1]) <= 1){
            cout << "0\n";
            return;
        }   
    }

    long long min_ops = INF;

    vector<long long> min_L(n), max_L(n), min_R(n), max_R(n);

    for(int m = 0; m < n -1; m++){
        long long mn = a[m], mx = a[m];

        for(int l = m; l >= 0; l--){
            mn = min(mn, a[l]);
            mx = max(mx, a[l]);
            min_L[l] = mn;
            max_L[l] = mx;
        }

        mn = a[m+1], mx = a[m+1];

        for(int r = m+1; r < n; r++){
            mn = min(mn, a[r]);
            mx = max(mx, a[r]);
            min_R[r] = mn;
            max_R[r] = mx;
        }

        auto is_valid = [&](int l, int r){
            return max(min_L[l], min_R[r]) <= min(max_L[l], max_R[r]) + 1;
        };

        int r = n-1;
        for(int l = m; l >= 0; l--){
            if(!is_valid(l, r)){
                continue;
            }

            while(r-1 >= m+1 && is_valid(l, r-1)){
                r--;
            }

            min_ops = min(min_ops, (long long)(r-l-1));
        }

    }

    if(min_ops == INF){
        cout << "-1\n";
    } else {
         cout << min_ops << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}