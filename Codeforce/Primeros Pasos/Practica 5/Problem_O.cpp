#include <bits/stdc++.h>
using namespace std;

long long lcm_seguro(long long a, long long b) {
    long long limite = 2e18 + 1; 
    
    __int128 mcm = (__int128)a * b / std::gcd(a, b);
    
    if (mcm > limite) {
        return limite; 
    }
    
    return (long long)mcm;
}

long long busquedaBinaria(long long izq, long long der, long long x, long long a, long long b, long long c){
    while(izq <= der){
        long long mid = izq + (der - izq) / 2;

        long long resultado = mid - (mid /a) - (mid / b) - (mid / c) + 
        (mid / lcm_seguro(a,b)) + (mid / lcm_seguro(a,c)) + (mid / lcm_seguro(b,c)) - (mid / lcm_seguro(lcm_seguro(a,b),c));

        if(resultado >= x){
            der = mid - 1;
        } else {
            izq = mid + 1;
        }
    }
    return izq;
}

int main(){
    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    long long resultado = busquedaBinaria(1, 2e9, x, a, b, c);
    cout << resultado << endl;

    return 0;
}