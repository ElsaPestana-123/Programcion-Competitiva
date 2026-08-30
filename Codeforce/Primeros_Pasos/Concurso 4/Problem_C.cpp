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

        long long max_op = 2*n;

        for(long long i = 0; i < n; i++){
            long long op = 0;
            if(a[i] == 1 && op < max_op){
                a[i] += 1;
                op++;
            }
        }

        for(long long i =0; i < n-1; i++){
            long long op = 0;
            if(a[i +1] % a[i] == 0 && op < max_op){
                a[i+1] += 1;
                op++;
            }
        }

        for(long long i = 0; i < n; i++){
            cout << a[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}