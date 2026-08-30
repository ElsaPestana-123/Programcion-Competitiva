#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s1;
    string s2;
    cin >> s1 >> s2;
 
    if(s1 == s2){
        cout << "YES" << endl;
    } else if(s1.length() == s2.length()){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
 
        if(s1 == s2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}