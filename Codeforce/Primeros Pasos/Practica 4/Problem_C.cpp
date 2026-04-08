/*
C. Collatz to One
time limit per test1 second
memory limit per test256 megabytes

You are given a positive integer n.

At each step you must transform n as follows:

If n is even, replace it with n/2.

If n is odd, replace it with 3n+1.

Repeat this process until n becomes 1.

Your task is to print the value of n after each transformation, including the final 1.

Input
The only input line contains a single integer n (1≤n≤10^5).

Output
Print the sequence of integers obtained after each transformation, one per line, until n becomes 1.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    while(n > 1){

        if(n % 2 == 0){
            n /= 2;
            cout << n << endl;
        } else {
            n = 3 * n +1;
            cout << n << endl;
        }
    }

    return 0;
}