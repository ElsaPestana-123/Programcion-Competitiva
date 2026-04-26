#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;

    long long mcd = gcd(a,b);

    long long resultado =0;

    for(long long i = 1; i*i <= mcd; i++){

        if(mcd % i == 0){

            if(i * i == mcd){
                
                resultado++;

            }else{

                resultado += 2;
            }        
        }
    }

    cout << resultado << "\n";
    
    return 0;
}