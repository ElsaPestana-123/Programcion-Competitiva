#include <bits/stdc++.h>
using namespace std;

vector<string> molde;

void moldes(){
    long long ans = 1;

    for(int i = 0; i <= 60; i++){

        molde.push_back(to_string(ans));
        ans *= 2;

    }
}

int movimientos (string n){
    int minimo = INT_MAX;

    for(int i = 0; i < molde.size(); i++){
        int j = 0,k= 0, ans = 0;

        while(j < molde[i].size() && k < n.size()){
            
            if(molde[i][j] == n[k]){
                j++;
                ans++;
            }
            k++;
            
        }

        int borrar = n.size() - ans;
        int agregar = molde[i].size() - ans;
        int total = borrar + agregar;

        if(total < minimo){
            minimo = total;
        }

    }

    return minimo;
}

int main(){

    moldes();

    long long t; 
    cin >> t;

    while(t--){
        string n;
        cin >> n;
        cout << movimientos(n) << endl;
    }
    return 0;
}