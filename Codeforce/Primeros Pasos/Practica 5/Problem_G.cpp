#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    if(cin >> n >> s) {
        for(int i = 0; i < n; i++){
            
            for(int space = 0; space < i; space++){
                cout << "  "; 
            }

            for(int j = i; j < n; j++){
                int pos = j * (j + 1) / 2 + i;
                cout << ((s - 1 + pos) % 9) + 1;
                
                if (j < n - 1) {
                    cout << " ";
                }
            }
            
            cout << "\n"; 
        }
    }
    
    return 0;
}