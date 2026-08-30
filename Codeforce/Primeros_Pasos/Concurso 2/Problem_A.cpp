#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    long long mitad1 = n/2;
    long long mitad2 = n - mitad1;
 
    long long result = (mitad1 +1) * (mitad2 +1);
 
    cout << result << endl;
 
    return 0;
}