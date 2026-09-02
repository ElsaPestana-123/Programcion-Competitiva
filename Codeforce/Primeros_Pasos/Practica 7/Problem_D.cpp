
#include <bits/stdc++.h>
using namespace std;
 
 
vector<vector<long long>> rotar90(const vector<vector<long long>>& a){
    long long n = a.size();
    long long m = a[0].size();
    
    vector<vector<long long>> rotada(m, vector<long long>(n));
    
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            rotada[j][n - 1 - i] = a[i][j];
        }
    }
    return rotada;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<long long>> a(n, vector<long long>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
 
    k = k % 4; 
 
    while(k--){
        a = rotar90(a);
    }
 
    cout << a.size() << " " << a[0].size() << "\n";
 
    for(long long i = 0; i < a.size(); i++){
        for(long long j = 0; j < a[0].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}