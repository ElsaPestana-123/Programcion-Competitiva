#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int a,b,c;
        cin >> a >> b >> c;

        bool found = false;

        for(int x = -100; x <= 100 && !found; x++){
            for(int y = x+1; y <= 100 && !found; y++){
                
                int z = a - x - y;
                
                
                if(z > y && b == x*y*z && c == (x*x + y*y + z*z)){
                    
                    cout << x << " " << y << " " << z << "\n";
                    found = true;
                }

            }
        }   
        
        if(!found){
            
            cout << "NO SOLUTION\n";
        }
    }

    return 0;
}