#include <bits/stdc++.h>
using namespace std;

long long operaciones(vector<long long> &a, long long n){
    long long mino = 1e9;

    for(long long i = 0; i < n; i++){
        for(long long j = i+1; j < n; j++){
            if(abs(a[i] - a[j]) <= 1){
               long long ans = j - i -1;

               if(ans < mino){
                 mino = ans;
               }
            }
        }
    }

    if(mino == 1e9){
        return -1;
    }

    return mino;

}

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

        long long ans = operaciones(a,n);

        cout << ans << endl;
       
    }
    return 0;
}