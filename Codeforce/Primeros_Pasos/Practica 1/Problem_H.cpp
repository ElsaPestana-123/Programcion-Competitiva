/*
H. Days between dates
time limit per test1 second
memory limit per test256 megabytes

You are given two dates from the same year: one in March and one in December. Each date is expressed as a day number in the respective month. Your task is to compute the number of days that have passed between these two dates.

Input
The only input line contains two integers x and y
(1≤x≤31, 1≤y≤31) — the day in March and the day in December, respectively.

Output
Print a single integer — the number of days that have passed between March x and December y
(excluding the start date, including the end date).
*/
#include <bits/stdc++.h>
using namespace std;
const int idias = 244;
 
int main(){
 
    long long m,d;
    cin >> m >> d;
 
    int march = 31 - m;
 
    long long res = (idias + d) + march;
 
    cout << res << endl;
 
    return 0;
}