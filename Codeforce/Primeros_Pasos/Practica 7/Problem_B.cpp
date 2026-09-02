#include <bits/stdc++.h>
using namespace std;

bool symetricV(vector<vector<int>> &matrix, int n, int m){
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < m/2; j++){
            if(matrix[i][j] != matrix[i][m-1-j]){
                return false;
            }
        }
    }
    return true;
}

bool symetricH(vector<vector<int>> &matrix, int n, int m){

    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < m/2; j++){
            if(matrix[i][j] != matrix[n-1-i][j]){
                return false;
            }
        }
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    if(symetricH(matrix, n, m) || symetricV(matrix, n, m)){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}