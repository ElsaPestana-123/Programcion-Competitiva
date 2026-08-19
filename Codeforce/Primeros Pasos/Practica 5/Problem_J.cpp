#include <bits/stdc++.h>
using namespace std;

void backtrack (int k, int inicio, vector<int> &numsAc, vector<vector<int>> &resultado, vector<int> &S){

    if(numsAc.size() == 6){
        resultado.push_back(numsAc);
        return;
    }

    for(int i = inicio; i < k; i++){

        numsAc.push_back(S[i]);
        backtrack(k,i+1,numsAc, resultado, S);
        numsAc.pop_back();

    }

}

int main(){
    int n;
    if (!(cin >> n)) return 0;

    for(int i = 0; i < n; i++){

        if(i > 0) {
            cout << "\n"; 
        }

        int k;
        cin>>k;

        vector<int> S(k);

        for(int j = 0; j < k; j++){
            cin>>S[j];
        }

        vector<int> combinacion;
        
        vector<vector<int>> resultado;

        backtrack(k,0,combinacion,resultado,S);

        for(int i = 0; i < resultado.size(); i++){
            for(int j = 0; j < resultado[i].size(); j++){
                cout<<resultado[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}