#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    iota(a.begin(), a.end(), 1);

    for(int i = 0; i < n; i++){ 

        for(int x : a){
            cout << x << " ";
        }

        cout << "\n";

        rotate(a.begin(), a.begin() + 1, a.end());
    }
    return 0;
}