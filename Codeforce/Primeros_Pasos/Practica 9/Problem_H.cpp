#include <bits/stdc++.h>
using namespace std;

long long calcularCapa(long long a, long long b, bool empezamos){

    long long capa = 0;
    long long tam = 1;
    bool chocoB = empezamos;
    bool chocoN = !empezamos;

    while(true){
        if(chocoB){
            if(a < tam){
                break;
            }
            a = a - tam;
            capa = capa + 1;
            chocoB = false;
            chocoN = true;

        } else if (chocoN){
            if( b < tam){
                break;
            }

            b = b - tam;
            capa = capa + 1;
            chocoB = true;
            chocoN = false;

        }

        tam *= 2;

    }

    return capa;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;

        long long op1 = calcularCapa(a,b,true);
        long long op2 = calcularCapa(a,b,false);

        cout << max(op1,op2) << endl;

    }
    return 0;
}