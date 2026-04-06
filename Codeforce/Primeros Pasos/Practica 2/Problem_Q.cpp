/*
Q. Chocolate time
time limit per test1 second
memory limit per test256 megabytes

Pedro, a sugar-lover from the city center, enjoys his new digital watch and his favorite chocolates.

Every minute, he looks at the watch and eats one chocolate for each digit 4
appearing in the current time (hour and minutes). Pedro does not eat chocolates at night: 
he only eats between 08:00 and 20:59 (inclusive).

Your task is to calculate how many chocolates Pedro will eat in the next two minutes, starting from a given time. Note that if a minute is outside the eating hours, Pedro does not eat any chocolates in that minute.

Input
The only input line contains two integers h and m (0≤h≤23, 0≤m≤59) — the starting hour and minute.

Output
Print a single integer — the total number of chocolates Pedro eats in the next two minutes.
*/
#include <bits/stdc++.h>
using namespace std;
 
int contar_cuatros(long long h, long long m) {
  
    if (h < 8 || h > 20) {
        return 0; 
    }
 
    int chocolates = 0;
 
    if (h % 10 == 4) chocolates++; 
    if (h / 10 == 4) chocolates++; 
 
    if (m % 10 == 4) chocolates++; 
    if (m / 10 == 4) chocolates++; 
 
    return chocolates;
}
 
int main(){
    long long h,m;
    cin >> h >> m;
 
   long long resultado = contar_cuatros(h, m);
 
   m += 1;
    if (m == 60) {
        m = 0;
        h += 1;
        if (h == 24) {
            h = 0;
        }
    }
 
   resultado += contar_cuatros(h, m);
 
   cout << resultado << endl;
    
    return 0;
}