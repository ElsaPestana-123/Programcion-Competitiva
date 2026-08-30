#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    long long suma = 0;
    int centro = 1;
    suma += centro;
    
 
    for(long long i = n; i > 1; i -= 2){
 
        long long esquina = i * i;
        long long resto = esquina - i - (i-2);
        suma += esquina +resto;
 
    }
 
    cout << suma << endl;
    
    return 0;
}
