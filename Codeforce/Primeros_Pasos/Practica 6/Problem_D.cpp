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
 
    set<long long> s;
 
    for(long long i = 0; i < n; i++){
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    
    return 0;
}