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
 
        sort(a.begin(), a.end());
 
        long long mid = (n-1) / 2;
        long long ans = 0;
 
        for(long long i = mid; i < n ; i++){
            
            if(a[mid] == a[i]){
                ans++;
            } else {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}