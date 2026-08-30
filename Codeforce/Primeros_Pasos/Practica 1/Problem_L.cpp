/*
L. Complete Weeks in a Year
time limit per test1 second
memory limit per test256 megabytes

You are given the day of the week on which a non-leap year starts. 
Days of the week are numbered as follows:

Day of the week	   Number
Monday	             0
Tuesday	             1
Wednesday	         2
Thursday	         3
Friday	             4
Saturday	         5
Sunday	             6

A week is defined as seven consecutive days starting from Monday (day 0).
A week is said to be complete if its seven days correspond to the same year.

You are given an integer d, the day of the week of January 1. 
Your task is to determine the number of complete weeks in that year. Assume the year has exactly 365 days.

Input
The only input line contains a single integer d (0≤d≤6) — the day of the week of January 1st.

Output
Print a single integer — the number of complete weeks in that year.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int d;
    cin>> d;
    
    if(d == 0 || d == 6)
    cout << 52;
    else 
    cout << 51;
    
    return 0;
}