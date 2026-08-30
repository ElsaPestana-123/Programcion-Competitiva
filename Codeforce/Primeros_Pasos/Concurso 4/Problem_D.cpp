#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>> t;

    while(t--){
        long long n,k;
        cin >> n >> k;

        long long sobrante_pares = n - 2 * (k-1);
        long long sobrante_impares = n - (k-1);

        if(sobrante_pares > 0 && sobrante_pares % 2 == 0){

            vector<int> pares(k);

            for(int i = 0; i < k-1; i++){
                pares[i] = 2; 
            }

            pares[k-1] = sobrante_pares;

            cout << "YES\n";

            for(long long i = 0; i < k; i++){
                cout << pares[i] << " ";
            }
            
            cout << "\n";

        } else if(sobrante_impares > 0 && sobrante_impares % 2 != 0){

            vector<long long> impares(k);

            for(int i = 0; i < k-1; i++){
                impares[i] = 1; 
            }

            impares[k-1] = sobrante_impares;

            cout << "YES\n";

            for(long long i = 0; i < k; i++){
                cout << impares[i] << " ";
            }

            cout << "\n";

        } else {
            cout << "NO\n";
        }
    }
    return 0;
}