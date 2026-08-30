#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    cin >> n;
 
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
 
    long long sum = 0;
 
    for(long long i = 0; i < n; i++){
        sum += a[i];
    }
 
    long long average = sum / n;
 
    long long count = 0;
 
    for(long long i = 0; i < n; i++){
        if(a[i] > average){
            count++;
        }
    }
 
    cout << count << endl;
 
    return 0;
}