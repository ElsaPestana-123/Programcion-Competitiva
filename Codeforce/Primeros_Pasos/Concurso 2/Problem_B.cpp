#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
   
    while (cin >> n) { 
        if (n == 0) {
            cout << "0 0 0\n";
            continue; 
        }
 
        long long cajas = n / 144;
        long long sobraC = n % 144;
        long long decenas = sobraC / 12;
        long long individuales = sobraC % 12;
 
        // Tu magia Greedy perfecta
        if(individuales * 21 >= 205){
            decenas += 1;
            individuales = 0;
        }
 
        long long sobrante = (decenas * 205) + (individuales * 21);
 
        if(sobrante >= 2280){
            cajas += 1;
            decenas = 0;
            individuales = 0;
        }
 
        cout << cajas << " " << decenas << " " << individuales << "\n"; // \n es más rápido que endl
    }
 
    return 0;
}
