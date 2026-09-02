#include <bits/stdc++.h>
using namespace std;

long double rowAverage(const vector<vector<long long>> &a, int row, int m){
    long long sum = 0;
    for(int j = 0; j < m; j++){
        sum += a[row][j];
    }
    return (long double)sum / m;
}

long double colAverage(const vector<vector<long long>> &a, int col, int n){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i][col];
    }
    return (long double)sum / n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<long long>> a(n, vector<long long>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    cout << "Row averages:\n";
    for(int i = 0; i < n; i++){
        cout << fixed << setprecision(2) << rowAverage(a, i, m);
        if(i != n - 1) cout << " ";
    }
    cout << "\n";

    cout << "Column averages:\n";
    for(int j = 0; j < m; j++){
        cout << fixed << setprecision(2) << colAverage(a, j, n);
        if(j != m - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}