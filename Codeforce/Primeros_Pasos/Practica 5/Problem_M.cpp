#include <bits/stdc++.h>
using namespace std;

__int128 evaluar(__int128 t, __int128 A, __int128 B, __int128 D) {
    return (t * t * t) - (A * t * t) + (D * t) - B;
}

long long binarySearch(long long izq, long long der, __int128 A, __int128 B, __int128 D, bool sube){

    while(izq <= der){

        long long mid = izq + (der - izq) / 2;
        __int128 val = evaluar(mid, A, B, D);

        if(val == 0){
            return mid;
        }

        if(sube){
            if(val < 0){
                izq = mid + 1;
            } else {
                der = mid - 1;
            }
        } else {
            if(val > 0){
                izq = mid + 1;
            } else {
                der = mid - 1;
            }
        }
    }
    return -1e18;
}

int main(){
    int n;
    if (!(cin >> n)) return 0;

    while(n--){
        long long A, B, C;
        cin >> A >> B >> C;

        long long parity = (A % 2) * (A % 2) - (C % 2);
        if (parity % 2 != 0) {
            cout << "NO SOLUTION\n";
            continue;
        }

        __int128 ext_A = A;
        __int128 ext_C = C;
        __int128 D = (ext_A * ext_A - ext_C) / 2;
        __int128 ext_B = B;

        long double ld_A = A;
        long double ld_D = (double)A * (double)A / 2.0 - (double)C /2.0;
        long double delta = ld_A * ld_A - 3.0 * ld_D;

        if (delta <= 0) {
            cout << "NO SOLUTION\n";
            continue;
        }

        long long t1 = floor((ld_A - sqrt(delta)) / 3.0);
        long long t2 = ceil((ld_A + sqrt(delta)) / 3.0);

        long long limite = 3e9;

        long long x = binarySearch(-limite, t1, ext_A, ext_B, D, true);
        long long y = binarySearch(t1, t2, ext_A, ext_B, D, false);
        long long z = binarySearch(t2, limite, ext_A, ext_B, D, true);

        if (x != -1e18 && y != -1e18 && z != -1e18 && x < y && y < z) {
            
            if (x + y + z == A && (x*x + y*y + z*z == C)) {
                cout << x << " " << y << " " << z << "\n";
            } else {
                cout << "NO SOLUTION\n";
            }
            
        } else {
            cout << "NO SOLUTION\n";
        }
    }

    return 0;
}