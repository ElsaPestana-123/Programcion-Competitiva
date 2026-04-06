/*
H. List to 9
time limit per test1 second
memory limit per test256 megabytes

You are given a two-digit integer n. 
Construct a sequence as follows:

Reverse the digits of n.
Subtract the smaller number from the larger one to obtain the next number in the sequence.
Repeat the process with this new number until you reach a single-digit number.

The resulting sequence is called the "list to 9" for the starting number n. 
Your task is to generate and print this sequence.

Input
The only input line contains a two-digit integer n (10≤n≤99).

Output
Print the sequence generated according to the described procedure. 
All numbers must be printed on a single line, separated by spaces.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
 
    while (n >= 10){
 
        cout << n << " ";
 
        long long a = n % 10;
 
        long long b = n / 10;
 
        long long c = a * 10 + b;
 
        long long ans = abs(n -c);
 
        n = ans;
    }
 
    cout << n << "\n";
 
    return 0;
 
}