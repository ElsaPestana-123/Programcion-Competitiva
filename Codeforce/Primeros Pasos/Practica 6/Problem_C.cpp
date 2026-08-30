#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
 
    string vocales;
    string consonates;
 
    for(long long i = 0; i < s.length(); i++){
        if(s[i] == 'a' ||s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vocales += s[i];
        } else {
            consonates += s[i];
        }
    }
    cout << consonates << endl;
    cout << vocales << endl;
 
    return 0;
} 