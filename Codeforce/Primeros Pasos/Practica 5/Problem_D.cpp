#include <bits/stdc++.h>
using namespace std;

void criba(int n){

    if (n < 2) {
        cout << "\n";
        return; 
    }

    vector<bool> is_prime(n+1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    bool primero = true;

    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            if (!primero) {
                cout << " ";
            }
            cout << i;
            primero = false;
        }
    }
    cout << "\n";
}

int main() {

    int n;

    cin >> n;

    criba(n);
    
    return 0;
}