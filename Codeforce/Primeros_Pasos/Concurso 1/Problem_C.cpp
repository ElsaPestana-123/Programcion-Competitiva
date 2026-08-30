#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long hi, mi, hf, mf, n;
    cin >> hi;
    cin >> mi;
    cin >> hf;
    cin >> mf;
    cin >> n;
 
    long long tiempo_inicio = hi * 60 + mi;
    long long tiempo_final = hf * 60 + mf;
    long long tiempo_total = tiempo_final - tiempo_inicio;
    long long tiempo_menos_espera = tiempo_total - n;
 
    long long tiempo_exacto = (tiempo_menos_espera+1) / 2;
 
    long long hora_exacto = (tiempo_exacto + tiempo_inicio) / 60;
    long long minuto_exacto = (tiempo_exacto + tiempo_inicio) % 60;
    cout << hora_exacto << " " << minuto_exacto << endl;
 
    return 0;
}