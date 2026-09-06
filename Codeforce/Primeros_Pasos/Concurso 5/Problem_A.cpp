#include <bits/stdc++.h>
using namespace std;

bool isActive(int r, int c, int n, int m, const vector<vector<char>>& v) {
    if (r - 1 >= 0 && (v[r - 1][c] == '#' || v[r - 1][c] == 'A')) return true;
    if (r + 1 < n && (v[r + 1][c] == '#' || v[r + 1][c] == 'A')) return true;
    if (c - 1 >= 0 && (v[r][c - 1] == '#' || v[r][c - 1] == 'A')) return true;
    if (c + 1 < m && (v[r][c + 1] == '#' || v[r][c + 1] == 'A')) return true;
    
    return false;
}

long long points(long long r, long long c, vector<vector<char>> &v){
    long long ans = 0;
   
    for(long long i = 0; i < r; i++){
        for(long long j = 0; j < c; j++){
            if(v[i][j] == '#' && isActive(i, j, r, c, v)){
                ans += 2;
                v[i][j] = 'A';
            }
        }
    }

    long long maxPoints = 0;
   
    for(long long i = 0; i < r; i++){
        for(long long j = 0; j < c; j++){
            if(v[i][j] == '.'){
                long long current_extra = 0;
                
                if(isActive(i, j, r, c, v)){
                    current_extra += 2; 
                    
                    if(i - 1 >= 0 && v[i - 1][j] == '#') current_extra += 2;
                    if(i + 1 < r && v[i + 1][j] == '#') current_extra += 2;
                    if(j - 1 >= 0 && v[i][j - 1] == '#') current_extra += 2;
                    if(j + 1 < c && v[i][j + 1] == '#') current_extra += 2;
                }

                if(current_extra > maxPoints){
                    maxPoints = current_extra;
                }    
            }
        }
    }
    return ans + maxPoints;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long r, c;
    if (!(cin >> r >> c)) return 0;

    vector<vector<char>> v(r, vector<char>(c));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> v[i][j];
        }
    }

    long long ans = points(r, c, v);

    cout << ans << "\n";

    return 0;
}