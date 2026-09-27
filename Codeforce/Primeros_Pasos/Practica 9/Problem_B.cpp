#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        string ans = "";

        for(long long i = 0; i < s.size(); i+=2){
            ans += s[i];
        }

        cout << ans << endl;
    }
    return 0;
}