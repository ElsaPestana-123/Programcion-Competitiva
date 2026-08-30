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
 
    long long salto = 0;
    long long mejor_alcance = 0;
    long long limite = 0;
 
    for(long long i = 0; i < n-1; i++){
        long long aux = a[i] + i;
 
 
        if(aux > mejor_alcance){
            mejor_alcance = aux;
        }
 
        if(i == limite){
            if(mejor_alcance == i){
                cout << -1 << '\n';
                return 0;
            }
            salto++;
            limite = mejor_alcance;
        }
 
    }
    cout << salto << '\n';
    return 0;
}