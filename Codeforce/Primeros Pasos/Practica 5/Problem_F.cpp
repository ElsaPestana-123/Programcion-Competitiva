#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){

        for(int espacios = 0; espacios < n-i; espacios++){
            cout << "  ";
        }

        for(int numeros = 0; numeros <= i; numeros++){
            cout << numeros;
            if(numeros < i) cout << " ";
        }

        for(int numeros = i -1; numeros>= 0; numeros--){
            cout << numeros << " ";
        }

        cout << "\n";
      
    }

    for(int j = n -1; j >= 0; j--){

        for(int espacios = 0; espacios < n-j; espacios++){
            cout << "  ";
        }

        for(int numeros = 0; numeros <= j; numeros++){
            cout << numeros;
            if(numeros < j) cout << " ";
        }

        for(int numeros = j -1; numeros>= 0; numeros--){
            cout << numeros << " ";
        }
        cout << "\n";
    }

    return 0;
}