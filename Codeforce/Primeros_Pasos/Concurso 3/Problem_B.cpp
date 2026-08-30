#include <bits/stdc++.h>
using namespace std;
 
long long count00(string str){
    long long count = 0;
    for(int i = 0; i < str.length() -1; i++){
      if(str[i] == '0' && str[i+1] == '0'){
         count++;
         i++;
      }
    }
    return count;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string S;
        cin >> S;
 
        long long count = count00(S);
        if(count == 0){
            cout << S.length() << endl;
        } else {
            cout << S.length() - count << endl;
        }
 
    }
    return 0;
}