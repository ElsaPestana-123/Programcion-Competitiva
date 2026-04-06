/*
B. All Even-Digit Palindromes
time limit per test1 second
memory limit per test256 megabytes

A palindrome is a number that reads the same from left to right and from right to left. 
For example, 1221 and 9009 are palindromes, while 1234 and 1012 are not.

You are given an integer n. 
Your task is to output all palindromes with exactly n digits, where n is even.

Input
The input consists of a single integer n (2≤n≤8, n is even).

Output
Print all n-digit palindromes in ascending order, each on a separate line.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
 
    long long base = n /2;
    long long inicio, fin;
 
    if(base == 1){
        inicio =1, fin = 9;
    } else if (base == 2){
        inicio = 10, fin = 99;
    } else if ( base == 3){
        inicio = 100, fin = 999;
    } else if (base == 4){
        inicio = 1000, fin = 9999;
    }
 
    for(int i = inicio; i <= fin; i++){
        long long num = i;
        long long sum = 0;
        long long temp = i;
 
        while(temp > 0){
            long long digit = temp % 10;
            sum = (sum * 10) + digit;
            temp /= 10;
        }
 
        cout << num << setfill('0') << setw(base) << sum << "\n";
 
    }
 
    return 0;
}