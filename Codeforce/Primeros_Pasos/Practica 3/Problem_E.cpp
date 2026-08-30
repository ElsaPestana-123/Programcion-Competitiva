/*
E. Print until Zero
time limit per test1 second
memory limit per test256 megabytes

You are given a sequence of integers, one per line. Your task is to read the numbers one by one and print them immediately; stop reading and printing as soon as you encounter the number 0
(the number 0 should not be printed).

Input
The input contains multiple lines, each containing a single integer x (−10^9≤x≤10^9).

The input ends with a line containing a single integer 0.

Output
Print all the integers from the input in the same order, stopping just before the 0
that indicates the end of the sequence. Each integer should be printed on a separate line.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    vector<long long> v(0);
 
    while (true){
        long long n;
        cin >> n;
 
        if (n == 0) break;
 
        v.push_back(n);
    }
 
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    
    return 0;
}