#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    long long n = s.size();
    for(long long i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        string ans = "";

        for(long long i = 0; i < s.size(); i++){
            ans += s[i];
        }

        for(long long i = 0; i < ans.size() / 2; i++){
            if(ans[0] != ans[i]){
                swap(ans[0], ans[i]);
                swap(ans[ans.size()-1], ans[ans.size()-1-i]);
                break;
            }
        }

        if(isPalindrome(ans) && ans != s){
            cout << "YES"<<endl;
        } else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}