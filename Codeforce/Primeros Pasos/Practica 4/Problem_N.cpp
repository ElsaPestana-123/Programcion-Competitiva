/*
N. Reversed Base Representation
time limit per test1 second
memory limit per test256 megabytes

You are given a positive integer n and a base b (2≤b≤16). 
Your task is to convert n into base b and print its digits reversed.

Digits greater than 9 should be represented as uppercase letters (A — F).

Input
The only input line contains two integers n and b (0≤n≤10^12, 2≤b≤16) — the number in decimal form and the target base, respectively.

Output
Print the digits of n in base b, in reverse order.
*/
#include <bits/stdc++.h>
using namespace std;

string conversion(long long num, long long base){
    if(num == 0) return "0";

    const string digits ="0123456789ABCDEF";

    string result;

    while( num > 0){
        result += digits[num % base];
        num /= base;
    }

    return result;

}

int main(){
    long long num, base;
    cin >> num >> base;

    string resultado = conversion(num,base);

    cout<< resultado << endl;

    return 0;
}
