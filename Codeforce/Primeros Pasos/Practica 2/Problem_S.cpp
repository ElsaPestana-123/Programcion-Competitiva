/*
S. Elapsed Time Between Date-Times
time limit per test1 second
memory limit per test256 megabytes

A datetime instant can be represented as a list of five integers [y,d,h,m,s]
where y represents the year, d represents the day of the year (1−indexed), and h,m,s
represent the hour, minute, and second of the current time, respectively. 
For example, 00:00:59 of January 1, 2025 can be represented as [2025,1,0,0,59].

You are given two valid datetime instants in any order (the first may be later or earlier than the second).

Your task is to compute the elapsed time between the two instants and print it as a 
decomposition into years, days, hours, and minutes, in that order.

Input
The input contains two lines. Each line contains five integers y,d,h,m,s— the year, day-of-year, hour, minute, and second for one instant.

Output
Print four integers separated by spaces years, days, hours, and minutes — the elapsed time between the two instants (absolute difference).
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long year1, day1, hour1, minute1, seg1;
    long long year2, day2, hour2, minute2, seg2;
 
    cin >> year1 >> day1 >> hour1 >> minute1 >> seg1;
    cin >> year2 >> day2 >> hour2 >> minute2 >> seg2;
    
 
    if (tie(year1, day1, hour1, minute1, seg1) > tie(year2, day2, hour2, minute2, seg2)) {
        swap(year1, year2);
        swap(day1, day2);
        swap(hour1, hour2);
        swap(minute1, minute2);
        swap(seg1, seg2);
    }
 
    if (seg2 < seg1) {
        seg2 += 60;
        minute2 -= 1;
    }
 
    if (minute2 < minute1) {
        minute2 += 60;
        hour2 -= 1;
    }
    long long res_m = minute2 - minute1;
 
    if (hour2 < hour1) {
        hour2 += 24;
        day2 -= 1;
    }
    long long res_h = hour2 - hour1;
 
    if (day2 < day1) {
        year2 -= 1; 
        
        bool es_bisiesto = (year2 % 4 == 0 && (year2 % 100 != 0 || year2 % 400 == 0));
        if (es_bisiesto) {
            day2 += 366;
        } else {
            day2 += 365;
        }
    }
    long long res_d = day2 - day1;
    long long res_y = year2 - year1;
 
    cout << res_y << " " << res_d << " " << res_h << " " << res_m << "\n";
 
    return 0;
}