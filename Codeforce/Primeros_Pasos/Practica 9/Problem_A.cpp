#include <bits/stdc++.h>
using namespace std;

long long craftShovelsAndSwords(long long sticks, long long dimonds){
   long long totalMateriales = sticks + dimonds;

   long long totalHerramintas = totalMateriales / 3;

   if(totalHerramintas > sticks){
      totalHerramintas = sticks;
   }

   if(totalHerramintas > dimonds){
     totalHerramintas = dimonds;
   }

   return totalHerramintas;
}

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long sticks, dimonds;
        cin >> sticks >> dimonds;

        long long craft = craftShovelsAndSwords(sticks, dimonds);

        long long esmeralds = 0;

        esmeralds = esmeralds + craft;

        cout << esmeralds << "\n";

    }
    return 0;
}