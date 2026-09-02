#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n >> m;

    vector<vector<long long>> a(n, vector<long long>(m));

    for(long long i=0; i<n; i++){
        for(long long j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    long long q;
    cin >> q;

    while(q--){
        long long r,c;
        cin >> r >> c;

        r--;
        c--;

        vector<long long> vecinos;

        if(r-1 >= 0 && c-1 >= 0){ vecinos.push_back(a[r-1][c-1]); }
        if(r-1 >= 0){             vecinos.push_back(a[r-1][c]);   }
        if(r-1 >= 0 && c+1 < m){  vecinos.push_back(a[r-1][c+1]); }

        if(c-1 >= 0){             vecinos.push_back(a[r][c-1]);   }
        if(c+1 < m){              vecinos.push_back(a[r][c+1]);   }

        if(r+1 < n && c-1 >= 0){  vecinos.push_back(a[r+1][c-1]); }
        if(r+1 < n){              vecinos.push_back(a[r+1][c]);   }
        if(r+1 < n && c+1 < m){   vecinos.push_back(a[r+1][c+1]); }

        cout << vecinos.size() << " ";

        for(long long i=0; i<vecinos.size(); i++){
            cout << vecinos[i] << " ";
        }
        cout << "\n";

    }

    return 0;
}